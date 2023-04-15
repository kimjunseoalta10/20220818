#include<stdio.h>
main()
{
	long long int a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	for(int i=1; i<=d-1; i++)
	{
		a=a*b+c;
	}
	printf("%lld", a);
}
