/* write c program for Queue using LinkList */
#include <stdio.h>
#include <stdlib.h>

/* This program created by Sujit Mandal */

struct node
{
    int info;
    struct node *next;
};
struct node *head=NULL;

void create();
void reverse();
void delete_last_node();
void delete_info();
void display();

int main()
{
    int choice;
    do
	{
		printf("\n\n1: create.");
		printf("\n2: reverse.");
		printf("\n3: delete_last_node.");
		printf("\n4: delete_info.");
		printf("\n5: displaying.");
		printf("\n6: exit.");

		printf("\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				create();
				break;
            case 2:
                reverse();
                display();
                break;
            case 3:
                delete_last_node(head);
                break;
            case 4:
            	delete_info();
            	break;
			case 5:
				display();
				break;
			case 6:
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
void reverse()
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

        printf("\nREVERSED LIST\n");
    }
}
void delete_last_node(struct node *p)
{
     struct node *r;
     r = p;
     if(head != NULL)
     {
     	while(p->next != NULL)
    {
        r = p;
        p=p->next;
    }
    r->next = NULL;
    free(p);

    printf("\nlist after deleted.\n");
    display();
	 }
	 else
	 {
	 	printf("\nList is empty.");
	 }
}
void delete_info()
{
	int value;
	struct node *p, *r;
	printf("Enter the value for delete: ");
	scanf("%d",&value);

		while(head != NULL && head->info == value)
		{
			p = head;
			head = head->next;
			free(p);
			break;
		}
		p = NULL;
		r = head;

		while(r != NULL)
		{
			if(r->info == value)
			{
				if(p != NULL)
				p->next = r->next;
				free(r);
				break;
			}
			p = r;
			r = r->next;
		}
	    printf("\nlist after deleted.\n\n");
	    display();
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
        printf("\nlink list is: \n");
        while(temp != NULL)
        {
            printf("%d->", temp->info);
            temp = temp->next;
        }
    }
}
