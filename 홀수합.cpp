#include<stdio.h>
main()
{
	int i=1, sum=0;
	while(1)
	{
		sum+=i;
		i+=2;
		if(i>100) break;
	}
	printf("1부터 100까지 홀수의 합 = %d\n", sum);
}
