#include<stdio.h>
main()
{
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++)
	{
		for(int j=i; j<=a; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
