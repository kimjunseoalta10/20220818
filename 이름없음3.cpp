#include<stdio.h>
main()
{
	int a;
	scanf("%X",&a);
	for(int i=1; i<=15; i++)
	{
			printf("%X*%X=%X\n", a,i,a*i);
	}

}
