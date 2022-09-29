#include<stdio.h>
main()
{
	int i,n;
	scanf("%x", &n);
	for(i=1; i<=15; i++)
	{
		printf("%X*%X=%X\n", n, i, n*i);
	}
} 
