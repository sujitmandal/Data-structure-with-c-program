/* write c program stack */
#include<stdio.h>
#include<stdlib.h>
#define MAX 4

/* This program created by Sujit Mandal */
	
int a[MAX];
int indicator=-1;

void push();
void pop();
void display(); 

int main()
{
	int ch;
	do
	{
		printf("\n1: insert/push.");
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
	int item;
	if(indicator<MAX)
	{ 
		printf("\nEnter the value:");
		scanf("%d",&item);
		indicator=indicator+1;
		a[indicator]=item;
		printf("\nValue Inserted!\n");
	}
	else
	{
		printf("\nOVER FLOW!\n");
	}

}

void pop()
{
	if (indicator > -1)
	{
		indicator=indicator-1;
		printf("\nValue Deleted!\n");
	}
	else
	{
		printf("\nUNDER FLOW!");
	}
}

void display()
{
	int loop;
	for(loop=0;loop<=indicator;loop++)
	{
		printf("%d, ",a[loop]);
	}
}
