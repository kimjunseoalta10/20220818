#include<stdio.h>
main()
{
	int a,i,t=0;
	scanf("%d", &a);
	while(a!=0)
	{
		a/=10;
		t++;
	}
	printf("%d", t);
}
