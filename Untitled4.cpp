#include<stdio.h>
main()
{
	int i, sum=0;
	
	while(i<=10)
	{
		sum+=i;
		i++;
	}
	printf("1부터 10까지의 합 : %d", sum);
}
