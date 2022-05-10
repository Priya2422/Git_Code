#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
typedef struct{
    struct node *top;
}stack;
int push(stack *,int);
void pop(stack*, int *);
int display(stack *);
void init(stack *);
int main()
{
    stack s1;
    init(&s1);
    int val;
    for(int i=0;i<5;i++){
        scanf("%d",&val);
    int k=push(&s1,val);
    printf("%d",k);
    }
int m=display(&s1);
printf("%d",m);
return 0;
}
void init(stack *s1){
    s1->top=NULL;
}

int push(stack *s1,int val){
    struct node *curr;
    curr=malloc(sizeof(struct node));
    if(curr==NULL){
        printf("Overflow");
        return 1;
    }
    curr->data=val;
    curr->next==s1->top;
    s1->top=curr;
    return 0;
}

int display(stack *s1){
    if(s1->top==NULL){
        printf("Stack empty");
        return 1;
    }
    struct node *ptr;
    ptr=s1->top;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}