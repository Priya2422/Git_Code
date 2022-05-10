#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *link;
}node;
node *head = NULL;			
void print();
void swap(node *t1, node*t2);
void list_SelectionSort(node *head);
void insert(int data, int position);
int main()
{
	insert(43,1);	
	insert(82,2);	
	insert(33,3);	
	insert(1,4);	
	insert(9,5);	
    insert(10,6);
	printf("\n Before sort = ");	
	print();
	list_SelectionSort(head);		
	printf("\n After sort  = ");
	print();	
	return 0;
}


void list_SelectionSort(node *head)
{
	node *start = head;
	node *trav;
	node *min;
	
	while(start->link)
	{
		min = start;
		trav = start->link;
		
		while(trav)
		{

			if( min->data > trav->data )
			{
				min = trav;
			}
			
			trav = trav->link;
		}
		swap(start,min);			
		start = start->link;
	}
} 


void swap(node *t1, node*t2)
{
	int temp = t1->data;
	t1->data = t2->data;
	t2->data = temp;
}

void insert(int data, int position)
{

	node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->link = NULL;

	if(position==1)
	{
	temp->link = head;
	head = temp;
	return ;
	}
	

	node *traverse = head;
	float i;
	for(i=0; i<position-2; i++)
	{
	traverse = traverse->link;
	}	
	temp->link = traverse->link;
	traverse->link = temp;	
}

void print()
{
	node *p = head;
	
	while(p)
	{
		printf(" %d",p->data);
		p = p->link;
	}
	printf(" \n\n");
}
