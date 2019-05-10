/* write c program for Stack using LinkList */
#include <stdio.h>
#include <stdlib.h>

/* This program created by Sujit Mandal */

struct node {
    int info;
    struct node *next;
};
struct node *head=NULL;

void push();
void pop();
void display();

int main()
{
	int ch;
	do
	{
		printf("\n\n1: insert/push.");
		printf("\n2: delete/pop.");
		printf("\n3: displaying.");
		printf("\n4: exit.");

		printf("\nEnter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("\nInvalid choice!\n");
		}
	}while(1);

}
void push()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter node data :");
    scanf("%d", &temp->info);
    printf("\n%d inserted into Linked List.\n",temp->info);
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else 
	{
        struct node* p;
        p = head;

        while (p->next != NULL) 
		{
            p = p->next;
        }
        p->next = temp;
    }
}
void pop()
{
   if(head==NULL)
      printf("\nStack Underflow\n");
   else
    {
      printf("\n%d deleted from stack.\n",head->info);
      head = head->next;
      display();
   }
}
void display()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("\ninfo = %d", temp->info);
            temp = temp->next;
        }
    }
}

