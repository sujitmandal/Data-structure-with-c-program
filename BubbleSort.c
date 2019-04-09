/* write c program for BubbleSort */
#include <stdio.h>
#include <stdlib.h>
int BubbleSort(int[], int);

/* This program created by Sujit Mandal */

int main()
{
    int array[100];
    int i,n;

    printf("Enter the array size[<100]: ");
    scanf("%d",&n);
    printf("\nEnter the %d integers:\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&array[i]);

    BubbleSort(array, n);

    printf("Sorted in ascending order:\n");
    for(i = 0; i < n; i++)
        printf("%d ",array[i]);

  return 0;

}
int BubbleSort(int array[], int n)
{
    int i, j ,temp;

    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++) //
        {
            if(array[j] > array[j+1]) // > for descending  order
            {
               temp = array[j];
               array[j]= array[j+1];
               array[j+1] = temp;
            }
        }
    }
}
