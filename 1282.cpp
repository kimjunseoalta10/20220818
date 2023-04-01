#include<stdio.h>
main()
{
	int a,i=1;
	scanf("%d", &a);
	while(i*i<a)
	{
		i++;
	}
	i=i-1;
	int sum=a-i*i;
	printf("%d %d", sum, i);
}
