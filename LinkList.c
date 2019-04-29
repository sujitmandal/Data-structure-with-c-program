/* write c program for LinkList */
#include <stdio.h>
#include <stdlib.h>

/* This program created by Sujit Mandal */

struct node {
    int info;
    struct node *next;
};
struct node *head=NULL;

void create();
void display();

int main()
{
    int choice;
    do
	{
		printf("\n\n1: create.");
		printf("\n2: displaying.");
		printf("\n3: exit.");

		printf("\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(1);
			default:
				printf("\nInvalid choice!\n");
		}
	}while(1);

    return 0;
}
void create ()
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
    else {
        struct node* p;
        p = head;

        while (p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
    }

}
void display()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("\nList is empty.");
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
