/* write c program SelectionShort*/
#include<stdio.h>

/* This program created by Sujit Mandal */

int main()
{
    //int min = array[n];
    int array[100];
    int i,j,n,position,temp;
    printf("Enter the size[<100] of array: ");
    scanf("%d",&n);

    printf("\nEnter %d element in the array: \n", n);
    for(i=0; i<n; i++)
        scanf("%d",&array[i]);

    printf("\nthe matrix is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);

    }
    for(i=0; i<(n-1); i++)
    {
        position = i;

        for(j=i+1; j<n; j++)
        {
            if(array[position] > array[j])
                position = j;
        }

    if(position != i)
    {
        temp = array[i];
        array[i] = array[position];
        array[position]= temp;
    }

    }

 printf("\n\nSorted list in ascending order: \n");
    for(i=0; i<n; i++)
        printf("%d\t",array[i]);

    return 0;
}
