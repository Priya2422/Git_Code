#include<stdio.h>
#include<stdlib.h>
 

typedef struct Node
{
	int data;
	struct Node *link;
}node;
 
node *head = NULL;			
 

void print();
void swap(node *p1, node*p2);
void SelectionSort(node *head);
void insert(int data, int position);

 

int main()
{
	insert(43,1);	
	insert(82,2);	
	insert(33,3);	
	insert(1,4);	
	insert(20,5);	
	insert(22,6);
	insert(78,7);
	insert(4,8);
	insert(28,9);
	insert(99,10);

	printf("\n Before sorting = ");	
	print();
	
	SelectionSort(head);		

	printf("\n After sorting  = ");
	print();	

	return 0;
}


void SelectionSort(node *head)
{
	node *start = head;
	node *traverse;
	node *min;
	
	while(start->link)
	{
		min = start;
		traverse = start->link;
		
		while(traverse)
		{

			if( min->data > traverse->data )
			{
				min = traverse;
			}
			
			traverse = traverse->link;
		}
		swap(start,min);			
		start = start->link;
	}
} 


void swap(node *p1, node*p2)
{
	int temp = p1->data;
	p1->data = p2->data;
	p2->data = temp;
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

