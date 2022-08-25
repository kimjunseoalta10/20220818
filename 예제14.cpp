#include<stdio.h>
main()
{
	int sum=0, n;
	do
	{
		scanf("%d", &n);
		sum+=n;
	}while(n!=0);
	printf("гу : %d", sum);
}
