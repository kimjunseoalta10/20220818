#include<stdio.h>
main()
{
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++)
	{
		for(int j=1; j<i; j++)
		{
			printf(" ");
		}
		for(int k=i; k<=a; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
