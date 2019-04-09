/* write c program ReversLinklist*/
#include <stdio.h>
#include <stdlib.h>

/* This program created by Sujit Mandal */

struct node {
    int info;
    struct node *next;
}*head;

int n;
void create();
void reverse();
void display();

int main()
{
    int choice;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    create();

    printf("\ninfo in the list.\n\n");
    display();

    printf("\nEnter [1] to display reverse the list\n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        reverse();
    }
    printf("\ninfo in the list\n");
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
        head->next = NULL;
        temp = head;

        for(i=2; i<=n; i++)
        {
            new_node = (struct node *)malloc(sizeof(struct node));

                printf("Enter the info of node %d: ", i);
                scanf("%d", &info);

                new_node->info = info;
                new_node->next = NULL;
                temp->next = new_node;
                temp = temp->next;
        }
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

        printf("REVERSED LIST\n");
    }
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
            temp = temp->next;
        }
    }
}
