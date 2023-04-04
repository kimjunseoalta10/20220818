#include<stdio.h>
main()
{
	int a;
	scanf("%d", &a);
	if(a>13)
	{
		printf("%d %d",2012-1900-a+1, 1);
	}
	else
	{
		printf("%d %d",2012-2000-a+1, 3);
	}
}
