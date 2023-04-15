#include<stdio.h>
main()
{
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	for(int i=1; i<=c-1; i++)
	{
		a*=b;
	}
	printf("%lld", a);
}
