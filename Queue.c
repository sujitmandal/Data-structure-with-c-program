/* C Program to Implement a Queue using an Array */
#include <stdio.h>
#include<stdlib.h>
#define MAX 4

/* This program created by Sujit Mandal */

int queue_array[MAX];
int rear = - 1;
int front = - 1;

void push();
void pop();
void display();

main()
{
    int choice;
    do
    {
        printf("\n1. Insert/push.");
        printf("\n2. Delete/pop.");
        printf("\n3. Displaying.");
        printf("\n4. Exit.");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                posh();
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

void posh()
{
    int item;
    if (rear == MAX - 1)
    printf("Queue Overflow!\n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Enter the value : ");
        scanf("%d", &item);
        rear = rear + 1;
        queue_array[rear] = item;
        printf("\n%d inserted in the queue.\n", item);
    }
}
void pop()
{
    if (front == - 1 || front > rear)
    {
        printf("\nQueue Underflow \n");
       return ;
    }
    else
    {
        printf("\n%d deleted from queue.\n", queue_array[front]);
        front = front + 1;
        display();
    }
}

void display()
{
    int i;
    if (front == - 1)
        printf("\nQueue is empty!\n");
    else
    {
        printf("\nQueue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d, ", queue_array[i]);
        printf("\n");
    }
}

