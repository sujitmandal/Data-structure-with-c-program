/* write c program ReversLinklist*/
#include <stdio.h>
#include <stdlib.h>

/* This program created by Sujit Mandal */

struct node {
    int info;
    struct node *next;
};
struct node *head=NULL;

void create();
void revers();
void display();

int main()
{
    int choice;
    do
	{
		printf("\n\n1: create.");
		printf("\n2: revers.");
		printf("\n3: display.");
		printf("\n4: exit.");
	
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
				create();
				break;
			case 2:
				revers();
				display();
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

    return 0;
}
void create ()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data :");
    scanf("%d", &temp->info);
    printf("\n%d inserted into nexted List\n",temp->info);
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
void revers()
{
    struct node *prev_node, *cur_node;

    if(head != NULL)
    {
        prev_node = head;
        cur_node = head->next;
        head = head->next;

        prev_node->next = NULL;

        while(head != NULL)
        {
            head = head->next;
            cur_node->next = prev_node;

            prev_node = cur_node;
            cur_node = head;
        }

        head = prev_node;

        printf("\nREVERSED LIST\n\n");
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
