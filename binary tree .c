/* write c program for binary tree */
#include<stdio.h>
#include<stdlib.h>

/* This program created by Sujit Mandal */

struct tree {
	int info;
	struct tree *left;
	struct tree *right;
};
struct node *head = NULL, *temp = NULL;

struct tree* create();
void inorder();
void preorder();
void postorder();

int main()
{
	int value, choice;
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
				printf("Enter the value: ");
				scanf("%d", &value);
				head = create(value, head);
				break;
			case 2:
			    printf("\nInorder:   ");
				inorder(head);
				printf("\nPreorder:  ");
				preorder(head);
				printf("\nPostorder: ");
				postorder(head);
				break;
			case 3:
				exit(1);
				break;
			default:
				printf("\nInvalid choice!\n");
		}
	}while(1);
	return 0;
}

struct tree* create(int value,struct tree *leaf)
 {
	if(leaf == 0)
    {
		struct tree *temp;
		temp = (struct tree *)malloc(sizeof(struct tree));
		temp->info = value;
		temp->left = 0;
		temp->right = 0;
		printf("Data inserted!\n");
		return temp;
	}
	else
	{
		if(value < leaf->info)
			leaf->left = create(value,leaf->left);
		else
			leaf->right = create(value,leaf->right);
	}
	return leaf;
}

void inorder(struct tree *leaf)
{
	if(leaf == NULL)
		return;
	preorder(leaf->left);
	printf("%d, ",leaf->info);
	preorder(leaf->right);
}

void preorder(struct tree *leaf)
 {
	if(leaf == NULL)
		return;
	printf("%d, ",leaf->info);
	preorder(leaf->left);
	preorder(leaf->right);
}

void postorder(struct tree *leaf)
{
	if(leaf == NULL)
		return;

	preorder(leaf->left);
	preorder(leaf->right);
	printf("%d, ",leaf->info);
}

