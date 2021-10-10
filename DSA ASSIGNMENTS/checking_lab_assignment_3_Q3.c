#include <stdio.h>
#include <stdlib.h>
 


struct Node
{
  int data;
  struct Node *next;
};
void TraverseList(struct Node *head)
{
  while (head != NULL)
  {
     printf(" %d ", head->data);
     head = head ->next;
  }
}
//Checking if the list is empty
int CheckEmpty(struct Node * head){
 	if(head!=NULL){
 		return 1;
	 }
	 else{
	 	return 0;
	 }
 }
 Node* insertBefore(Node* beforeNode, int val)
{
 
    
   
 
    
  Node *p, *n = head;
 
        
        for (n, p; n != beforeNode;
             p = n, n = n->next)
            ;
 
        
        Node* m = new Node(val);
 
        
        m->next = p->next;
 
        
        p->next = m;
 
        return m;
    
}
 
void deleteNode(struct Node** headRef, struct Node* dele)
{
  
    if (*headRef == NULL || dele == NULL)
        return;
 
   
    if (*headRef == dele)
        *headRef = dele->nextNode;
 
    
    if (dele->nextNode != NULL)
        dele->nextNode->prevNode = dele->prevNode;
 
    
    if (dele->prevNode != NULL)
        dele->prevNode->nextNode = dele->nextNode;
 
    
    free(dele);
}
 




void deleteNodeAtGivenPos(struct Node** headRef, int data)
{
    
    if (*headRef == NULL || data <= 0)
        return;
 
    struct Node* currentNode = *headRef;
    int i;
 
    
    for ( i = 1; currentNode != NULL && i < data; i++)
        currentNode = currentNode->nextNode;
 
    
    if (currentNode == NULL)
        return;
 
    
    deleteNode(headRef, currentNode);
}
 


 


void insertAfter(struct Node* prevNode, int newData)
{
    
    if (prevNode == NULL)
    {
      printf("Previous node cannot be null");
      return;
    }
 


    struct Node* newNode =(struct Node*) malloc(sizeof(struct Node));
 
    
    newNode->data  = newData;
 
    
    newNode->next = prevNode->next;
 
    
    prevNode->next = newNode;
}
 


int main()
{
  struct Node* head1 = NULL;
  int userChoice;
	printf("Do you want to continue. Press 0 or 1");
	scanf("%d", userchoice);
  
 
  return 0;
}