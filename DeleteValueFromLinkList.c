#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};
struct node *head=NULL;

void create();
void delete_value();
void display();

int main()
{
    int choice;
    do
	{
		printf("\n1: create.");
		printf("\n2: delete value.");
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
				delete_value();
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
    printf("\n%d inserted into Linked List\n",temp->info);
    temp->link = NULL;

    if(head == NULL) 
    {
        head = temp;
    }
    else
	 {
        struct node* p;
        p = head;

        while (p->link != NULL) 
		{
            p = p->link;
        }
        p->link = temp;
    }
}
void delete_value()
{
	int value;
	struct node *p, *r;
	printf("\nEnter the value for delete: ");
	scanf("%d",&value);

		while(head != NULL && head->info == value)
		{
			p = head;
			head = head->link;
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
				p->link = r->link;
				free(r);
				break;
			}
			p = r;
			r = r->link;
		}
	    printf("\nlist after deleted.\n\n");
	    display();
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
            printf("info = %d\n", temp->info);
            temp = temp->link;
        }
    }
}

