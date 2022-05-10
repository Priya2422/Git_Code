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
void multiply(struct node *, struct node *, struct node **);
void simplify(struct node **);
int main()
{
    struct node *h1 = NULL, *h2 = NULL, *h = NULL;
    create(&h1);
    create(&h2);
    printf("First polynomial: ");
    display(h1);
    printf("\nSecond polynomial: ");
    display(h2);
    multiply(h1, h2, &h);
    simplify(&h);
    printf("\nAfter multiplying: ");
    display(h);
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
        }
        else
        {
            if (ptr1->next->coeff > 0)
            {

                printf("%dx^%d+", ptr1->coeff, ptr1->expon);
            }
            else
            {

                printf("%dx^%d", ptr1->coeff, ptr1->expon);
            }
        }
        ptr1 = ptr1->next;
    }
}
void multiply(struct node *h1, struct node *h2, struct node **h)
{
    struct node *ptr, *ptr1, *ptr2;
    ;
    for (ptr = h1; ptr != NULL; ptr = ptr->next)
    {
        for (ptr1 = h2; ptr1 != NULL; ptr1 = ptr1->next)
        {
            struct node *curr;
            curr = malloc(sizeof(struct node));
            curr->coeff = ptr->coeff * ptr1->coeff;
            curr->expon = ptr->expon + ptr1->expon;
            curr->next = NULL;
            if (*h == NULL)
            {
                *h = ptr2 = curr;
            }
            else
            {
                ptr2->next = curr;
                ptr2 = curr;
            }
        }
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