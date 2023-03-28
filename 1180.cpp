#include<stdio.h>
main()
{
	int a;
	scanf("%d", &a);
	int b, c;
	b=a/10;
	c=a%10;
	int sum, result;
	sum=c*10+b;
	result=sum*2;
	if(result>100)
		result%=100;
	printf("%d\n", result);
	if(result>50)
		printf("OH MY GOD");
	else
		printf("GOOD");
}
