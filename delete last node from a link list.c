/* write a programe to delete last node from a link list */
#include <stdio.h>
#include <stdlib.h>

/* This program created by Sujit Mandal */

struct node {
    int info;
    struct node *link;
}*head;
struct node *head;

int n;
void create();
void delete_node();
void display();

int main()
{
    int choice;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    create();

    printf("\ninfo in the list.\n\n");
    display();

    printf("\nEnter [1] to display delete_node of the list\n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        delete_node(head);
    }

    printf("\ninfo in the list after deleted\n");
    display();

    return 0;
}
void create()
{
    struct node* new_node, *temp;
    int info, i;

    if(n <= 0)
    {
        printf("List size must be greater than zero.\n");
        return;
    }

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the info of node 1: ");
        scanf("%d", &info);

        head->info = info;
        head->link = NULL;
        temp = head;

        for(i=2; i<=n; i++)
        {
            new_node = (struct node *)malloc(sizeof(struct node));

                printf("Enter the info of node %d: ", i);
                scanf("%d", &info);

                new_node->info = info;
                new_node->link = NULL;
                temp->link = new_node;
                temp = temp->link;
        }
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


