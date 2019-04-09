/* write c program stack using one array*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* This program created by Sujit Mandal */

int a,i,N,array[100],top1,top2;
top1=-1;

void push1();
void push2();
void pop1();
void pop2();
void display1();
void display2();

int main()
{
    system("cls");
    int ch;
    x:
    printf("Enter the size of STACK[MAX=100]: ");
    scanf("%d",&N);
    top2=N;
    if(N <= 100)
    {
        do
        {
            printf("\n#Select any Option.\n");
            printf("1. Insert/Push Value in StackOne\n");
            printf("2. Insert/Push Value in StackTwo\n");
            printf("3. Delete/Pop Value From StackOne\n");
            printf("4. Delete/Pop Value From StackTwo\n");
            printf("5. Displaying StackOne\n");
            printf("6. Displaying StackTwo\n");
            printf("7. EXIT.\n");

            printf("\nEnter your choice: ");
            scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                push1();
                break;
            case 2:
                push2();
                break;
            case 3:
                pop1();
                break;

            case 4:
                pop2();
                break;

            case 5:
                display1();
                break;

            case 6:
                display2();
                break;

            case 7:
                exit(0);
            default:
                printf("\nInvalid choice!\n");
           }
        }while(ch != 7);
    }
    else
    {
        system("cls");
        printf("YOU HAVE ENTER INVALID ARRAY SIZE.\n\n");
        goto x;
    }
    return(0);
}
void push1()
{
    printf("\nEnter the value:\n");
    scanf("%d",&a);

    if(top1 + 1 == top2)
    {
        printf("\nStackOne is Overflow!\n");
    }
    else
    {
        top1++;
        array[top1]=a;
        printf("\nValue Inserted in StackOne!\n");
    }
}
void push2()
{
    printf("\nEnter the value:\n");
    scanf("%d",&a);

    if(top2 - 1 == top1)
    {
        printf("\nStackTow is Overflow\n");
    }
    else
    {
        top2--;
        array[top2]=a;
        printf("\nValue Inserted in StackTow!\n");
    }

}
void pop1()
{
    if(top1==-1)
        printf("\nStackOne is UnderFlow!\n");
    else
    {
        a=array[top1];
        top1--;
        printf("\nValue [%d] IS Deleted!\n",a);
    }
}
void pop2()
{
    if(top2==N)
        printf("\nStackTwo is UnderFlow!\n");
    else
    {
        a=array[top2];
        top2++;
        printf("\nValue [%d] IS Deleted!\n",a);
    }
}
void display1()
{
    if(top1==-1)
    printf("\nStackOne is Empty!\n");
    else
    {
        printf("\nStackOne is :\n");
        for(i=0;i<=top1;i++)
        printf("%d ",array[i]);
        printf("\n");
    }
}
void display2()
{
    if(top2==N)
    printf("\nStackTwo is Empty!\n");
    else
    {
        printf("\nStackTwo is :\n");
        for(i=(N-1);i>=top2;i--)
        printf("%d ",array[i]);
        printf("\n");
    }
}
