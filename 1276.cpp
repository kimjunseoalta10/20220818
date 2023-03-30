#include<stdio.h>
main()
{
	int a,i,r=1;
	scanf("%d", &a);
	for(i=1; i<=a; i++)
		r*=i;
	printf("%d", r);
}
