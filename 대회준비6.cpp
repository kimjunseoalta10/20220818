#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	for(int i=1; i<=c-1; i++)
	{
		a+=b;
	}
	printf("%d", a);
}
