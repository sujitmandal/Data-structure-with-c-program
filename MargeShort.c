/* write c program for MargeShort*/
#include <stdio.h>

/* This program created by Sujit Mandal */

void merging(int , int , int );
void sort(int , int );

int main_array[100];
int result_array[100];
int n;

int main()
{
   int i;

   printf("Enter the array size[<100]:");
   scanf("%d",&n);
   printf("\nEnter the %d element in the array: \n",n);
   for(i=0; i<n; i++)
   scanf("%d",&main_array[i]);

   printf("\nBefore sorting..\n");

   for(i = 0; i < n; i++)
      printf("%d ", main_array[i]);

   sort(0, n);

   printf("\n\nAfter sorting...\n");

   for(i = 1; i <= n; i++)
      printf("%d ", main_array[i]);
    return 0;
}
void merging(int low, int mid, int high)
 {
   int list1, list2, i;

   for(list1 = low, list2 = mid + 1, i = low; list1 <= mid && list2 <= high; i++)
    {
      if(main_array[list1] <= main_array[list2])
         result_array[i] = main_array[list1++];
      else
         result_array[i] = main_array[list2++];
   }

   while(list1 <= mid)
      result_array[i++] = main_array[list1++];

   while(list2 <= high)
      result_array[i++] = main_array[list2++];

   for(i = low; i <= high; i++)
      main_array[i] = result_array[i];
}

void sort(int low, int high)
{
   int mid;

   if(low < high)
    {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid +1, high);
      merging(low, mid, high);
   }
   else
      return 0;
}
