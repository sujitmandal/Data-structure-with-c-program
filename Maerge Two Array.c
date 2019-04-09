/* write c program for Marege Two Array*/
#include <stdio.h>
#include <stdlib.h>

/* This program created by Sujit Mandal */

int main()
{
   int array1[100], array2[100];
   int i, m, n;

   printf("Enter the array1 size[<100]: ");
   scanf("%d",&m);
   printf("\nEnter the %d element in the array1: \n", m);
   for(i=0; i<m; i++)
    scanf("%d",&array1[i]);

   printf("\nEnter the array1 size[<100]: ");
   scanf("%d",&n);
   printf("\nEnter the %d element in the array1: \n", n);
   for(i=0; i<n; i++)
    scanf("%d",&array2[i]);

    printf("\nThe array1: \n");
    for(i=0; i<m; i++)
        printf("%d\t",array1[i]);

    printf("\n\nThe array2: \n");
    for(i=0; i<n; i++)
        printf("%d\t",array2[i]);


    for(i=0; i<n; i++)
    {
        array1[m+i] = array2[i];
    }
    printf("\n\nThe array after marge: \n");
    for(i=0; i<(m+n); i++)
        printf("%d ",array1[i]);

}

