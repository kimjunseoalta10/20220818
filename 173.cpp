#include<stdio.h>
main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(b>=30)
	{
		b-=30;
		printf("%d %d", a, b);
	}
	else
	{
		b+=30;
		if(a!=0)
		{
			a-=1;
			printf("%d %d", a, b);
		}
		else
		{
			a=23;
			printf("%d %d", a, b);
		}
	}
}
