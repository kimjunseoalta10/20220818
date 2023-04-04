#include<stdio.h>
main()
{
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++)
	{
		printf("*");
	}
	printf("\n");
	for(int j=3; j<=a;j++)
	{
		printf("*");
		for(int k=3; k<=a;k++)
		{
			printf(" ");
			
		}
		printf("*\n");
	}
	for(int i=1; i<=a; i++)
	{
		printf("*");
	}
}
