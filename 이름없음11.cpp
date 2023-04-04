#include<stdio.h>
main()
{
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int k=2; k<=a; k++)
	{
		for(int l=k; l<=a; l++)
		{
			printf("*");
		}
		printf("\n");
	}
}
