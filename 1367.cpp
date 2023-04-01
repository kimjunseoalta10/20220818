#include<stdio.h>
main()
{
	int a, i, j, k;
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		for(j=i; j<=a-1; j++)
		{
			printf(" ");
		}
		for(k=1; k<=a; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
