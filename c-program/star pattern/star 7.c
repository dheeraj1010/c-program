#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,n;
	
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		for(j=1;j<2*n-1;j++)
		{
			if(j<=n+1-i||j>=n-1+i)
			printf("*");
			
			else
			printf(" ");
			
			
		}
		printf("\n");
	}
}
