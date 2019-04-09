/* write c program for quicksort*/
#include <stdio.h>
#include <stdlib.h>

/* This program created by Sujit Mandal */

int quicksort(int[], int, int);

int main()
{
    int array[100];
    int i,n;

    printf("Enter the array size[<100]; ");
    scanf("%d",&n);

    printf("\nEnter the %d integer's: \n",n);
    for(i=0; i<n; i++)
        scanf("%d",&array[i]);

    quicksort(array, 0, n-1);

    printf("\n\nThe sorted array: \n");
    for(i=0; i<n; i++)
        printf("%d ",array[i]);

    return 0;
}
int quicksort(int array[], int first, int last)
{
    int i,j, pivot,temp;

    if(first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while(i>j)
        {
            while(array[i] <= array[pivot] && i < last)
                i++;
            while(array[j] > array[pivot])
                j--;

            if(i<j)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = j;
            }
        }

        temp = array[pivot];
        array[pivot] = array[i];
        array[j] = temp;

        quicksort(array, first, j-1);
        quicksort(array, j+1, last);
    }
}
