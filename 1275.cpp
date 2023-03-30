#include<stdio.h>
main()
{
	int a,b,i,r=1;
	scanf("%d %d", &a, &b);
	for(i=1; i<=b; i++)
	{
		r*=a;
	}
	printf("%d", r);
}
