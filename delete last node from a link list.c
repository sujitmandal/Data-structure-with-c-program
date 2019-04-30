/* write a programe to delete last node from a link list */
#include <stdio.h>
#include <stdlib.h>

/* This program created by Sujit Mandal */

struct node {
    int info;
    struct node *link;
};
struct node *head=NULL;

void create();
void delete_node();
void display();

int main()
{
    int choice;
    do
	{
		printf("\n1: create.");
		printf("\n2: delete last node.");
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
				delete_node(head);
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
    printf("\n%d inserted into Linked List\n\n",temp->info);
    temp->link = NULL;

    if(head == NULL) 
    {
        head = temp;
    }
    else {
        struct node* p;
        p = head;

        while (p->link != NULL) {
            p = p->link;
        }
        p->link = temp;
    }

}
void delete_node(struct node *p)
{
     struct node *r;
     r = p;
    while(p->link != NULL)
    {
        r = p;
        p=p->link;
    }
    r->link = NULL;
    free(p);

    printf("\nlist after deleted.\n");
}
void display()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("info = %d\n", temp->info);
            temp = temp->link;
        }
    }
}


