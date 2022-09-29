#include<stdio.h>
main()
{
	int i, j;
		for(i=1; i<=9; i++)
		{
			for(j=2; j<=5; j++)
				printf("%2d *%2d = %2d\t", j, i, i*j);
			printf("\n");	
				
		}
		printf("\n");
		for(i=1; i<=9; i++)
		{
			for(j=6; j<=9; j++)
				printf("%2d *%2d = %2d\t", j, i, i*j);
			printf("\n");
		}
	}
