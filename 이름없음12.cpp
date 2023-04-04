#include<stdio.h>
main()
{
	int a;
	scanf("%d", &a);
	int space = a/2;
	for(int i=1; i<=a; i+=2)
	{
		for(int j=1;j<=space; j++)
		{
			printf(" ");
		}
		for(int k=1; k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
		space--;
	}
}
