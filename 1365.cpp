#include<stdio.h>
main()
{
	int a,i,j;
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		for(j=1; j<=a; j++)
		{
			if(i==1||i==a)
			{
				printf("*");
			}
			else if(i==j)
			{
				printf("*");
			}
			else if(j==a-i+1)
			{
				printf("*");
			}
			else if(j==1||j==a)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}	
}
