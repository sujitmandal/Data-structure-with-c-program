#include<stdio.h>
#include<stdlib.h>

/* This program created by Sujit Mandal */

typedef struct Node

{
	int info;
	struct Node *next;
}node;

node *front=NULL,*rear=NULL,*temp;

void create();
void del();
void display();

int main()
{
	int chc;
	do
	{
 	printf("\n\nEnter 1 to create the node : ");
	printf("\nEnter 2 to delete the element : ");
	printf("\nEnter 3 to display the link list : ");
	printf("\nEnter 4 to exit : ");
	printf("\n\nEnter your choice : ");
	scanf("%d",&chc);

		switch(chc)
		{
			case 1:
	 		create();
			break;

		 	case 2:
	 		del();
	 		break;

	 		case 3:
	 		display();
	 		break;

	 		case 4:
	 		return 1;

			default:
	 			printf("\nEnter valid choice :");
	 	}
	}while(1);

	return 0;
}

void create()
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the node value : ");
	scanf("%d",&newnode->info);
	newnode->next=NULL;

	if(rear==NULL)
	front=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
	}

	rear->next=front;
}

void del()
{
	temp=front;
	if(front==NULL)
		printf("\nUnderflow :");
	else
	{
		if(front==rear)
		{
			printf("\n%d",front->info);
			front=rear=NULL;
		}
		else
		{
			printf("\n%d",front->info);
			front=front->next;
			rear->next=front;
		}

	temp->next=NULL;
	free(temp);
	}
}

void display()
{
	temp=front;
	if(front==NULL)
		printf("\nList is Empty");
	else
	{
		printf("\n");
		for(;temp!=rear;temp=temp->next)
			printf("\n%d ",temp->info);
			printf("\n%d ",temp->info);
	}
}
