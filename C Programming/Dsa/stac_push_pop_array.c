#include<stdio.h>

typedef struct{
int arr[10];
int top;
}stack;
int push(stack *,int);
int pop(stack*, int *);
void display(stack *);
int main()
{
    stack s1;
    s1.top=-1;
    int k,val;
    
    for(int i=0;i<5;i++){
    scanf("%d",&val);
    k=push(&s1,val);
    }
display(&s1);
     printf("After del\n");
     int data;
     int m=pop(&s1,&data);
         printf("%d\n",data);
display(&s1);
return 0;
}
int push(stack *s1, int val){
if(s1->top==9){
    printf("overflow");
    return 1;
}
s1->top++;
s1->arr[s1->top]=val;
return 0;
}

int pop(stack *s1,int *data){
    if(s1->top==-1){
        printf("Underflow");
        return 1;
    }
*data=s1->arr[s1->top];
s1->top--;
return 0;
}

void display(stack *s1){
    if(s1->top <= -1){
printf("Stack empty");
    }
    else{
        for(int i=s1->top;i>=0;i--){
            printf("%d",s1->arr[i]);
        }
    }
}