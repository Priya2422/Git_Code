#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coeff;
    int expon;
    struct node *next;
};
void create(struct node **);
void display(struct node *);
void join(struct node **, struct node *);
void simplify(struct node **);
int main()
{
    struct node *h1 = NULL, *h2 = NULL;
    create(&h1);
    create(&h2);
    printf("First polynomial: ");
    display(h1);
    printf("\nSecond polynomial: ");
    display(h2);
    join(&h1, h2);
    simplify(&h1);
    printf("\nAfter substracting: ");
    display(h1);
    return 0;
}
void create(struct node **h1)
{
    struct node *curr, *ptr;
    int n;
    printf("Enter no of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        curr = malloc(sizeof(struct node));
        scanf("%d", &curr->coeff);
        scanf("%d", &curr->expon);
        curr->next = NULL;
        if (*h1 == NULL)
        {
            *h1 = curr;
            ptr = curr;
        }
        else
        {
            ptr->next = curr;
            ptr = curr;
        }
    }
}
void display(struct node *h1)
{
    struct node *ptr1;
    ptr1 = h1;

    while (ptr1 != NULL)
    {
        if (ptr1->next == NULL)
        {
            printf("%dx^%d", ptr1->coeff, ptr1->expon);
        }else{
        if (ptr1->next->coeff > 0)
        {

            printf("%dx^%d+", ptr1->coeff, ptr1->expon);
        }
        else
        {

            printf("%dx^%d", ptr1->coeff, ptr1->expon);
        }}
        ptr1 = ptr1->next;
    }
}

void join(struct node **h1, struct node *h2)
{
    struct node *ptr1;
    ptr1 = h2;
    while (ptr1 != NULL)
    {
        ptr1->coeff = (-1) * ptr1->coeff;
        ptr1 = ptr1->next;
    }
    if (*h1 == NULL)
    {
        *h1 = h2;
    }
    else
    {
        struct node *ptr;
        ptr = *h1;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = h2;
    }
}
void simplify(struct node **h1)
{
    struct node *ptr, *ptr1, *prev;
    for (ptr = *h1; ptr != NULL; ptr = ptr->next)
    {
        prev = ptr;
        ptr1 = ptr->next;
        while (ptr1 != NULL)
        {
            if (ptr1->expon == ptr->expon)
            {
                ptr->coeff += ptr1->coeff;
                prev->next = ptr1->next;
                free(ptr1);
                ptr1 = prev;
            }
            prev = ptr1;
            ptr1 = ptr1->next;
        }
    }
}