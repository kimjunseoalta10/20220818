#include<stdio.h>
main()
{
	int a, b, i, j, k;
	char c;
	scanf("%d %d ",&a, &b);
	scanf("%c", &c);
	if(c=='L')
	{
		for(i=1; i<=a; i++)
		{
			for(j=1; j<i; j++)
			{
				printf(" ");
			}
			for(k=1; k<=b; k++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if(c=='R')
	{
		for(i=1; i<=a; i++)
		{
			for(j=i; j<a; j++)
			{
				printf(" ");
			}
			for(k=1; k<=b; k++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}
