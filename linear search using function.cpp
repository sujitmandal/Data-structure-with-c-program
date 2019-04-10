/* linear search using function */
#include <stdio.h>

/* This program created by Sujit Mandal */

int linear_search(int [], int, int);
int main()
{
   int a[100], s, c, n, p;
 
   printf("Input number of elements in array\n");
   scanf("%d", &n);
 
   printf("Input %d numbers\n", n);
 
   for (c = 0; c < n; c++)
   scanf("%d", &a[c]);
   printf("Input a number to search\n");
   scanf("%d", &s);
   p = linear_search(a, n, s);
   if (p == -1)
      printf("\n%d isn't present in the array.\n", s);
   else
      printf("\n%d is present at location %d.\n", s, p+1);
   return 0;
}
int linear_search(int a[], int n, int find) {
   int c;
   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
   return -1;
}
