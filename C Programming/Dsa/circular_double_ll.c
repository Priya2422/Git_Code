

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void display(struct node*);
void insert(struct node**,int,int);
int main()
{
    struct node *head=NULL;
    struct node *curr;
    printf("Enter number of nodes: ");
    int n,value,position;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        curr=malloc(sizeof(struct node));
        curr->data=rand()%100;
        curr->next=curr->prev=NULL;
        if(head==NULL){
            head=curr->next=curr->prev=curr;
        }else{
            curr->prev=head->prev;
            curr->next=head;
            head->prev->next=curr;
            head->prev=curr;
        }
    }
printf("Before insertion: /n");
display(head);
printf("Enter number and postion you want to insert: ");
scanf("%d",&value);
scanf("%d",&position);
insert(&head,value,position);
printf("After insertion: /n");
display(head);
    return 0;
}

void display(struct node *h){
    struct node *ptr;
    ptr=h;
    if(h==NULL){
        printf("List is empty");
    }else{
        do{
            printf("%d",ptr->data);
            printf("\n");
            ptr=ptr->next;
        }while(ptr!=h);
    }
    
}
void insert(struct node **h,int val,int pos){
    struct node *curr;
    curr=malloc(sizeof(struct node));
    curr->data=val;
    curr->next=curr->prev=NULL;
    if(*h==NULL){
       *h=curr->next=curr->prev=curr;
    }else if(pos==0){
        curr->prev=(*h)->prev;
        curr->next=(*h);
        curr->prev->next=curr;
        (*h)->prev=curr;
        *h=curr;
    }else{
        struct node *ptr;
        ptr=*h;
        int i=0;
        while(i<pos-1){
            ptr=ptr->next;
            i++;
        }
        curr->prev=ptr;
        curr->next=ptr->next;
        ptr->next->prev=curr;
        ptr->next=curr;
    }
    printf("node inserted at %d /n",pos);
}