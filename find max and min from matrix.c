/* Write a programe to find max and min from matrix */
#include<stdio.h>

/* This program created by Sujit Mandal */

int main()
{
	int n,m,i,j,a[10][10],max=0,min=a[10][10];
	
	printf("Enter the number of collumns: ");
	scanf("%d",&m);
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		scanf("%d",&a[i][j]);
	}
}

	
	printf("\nThe matris is:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n\n");
	}


	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		if(a[i][j]>max)
		max=a[i][j];
	}
}


	printf("\nThe max is : %d",max);
	
	
		for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		if(a[i][j]<min)
		min=a[i][j];
	}
}
	printf("\n\nThe min is : %d",min);
}
