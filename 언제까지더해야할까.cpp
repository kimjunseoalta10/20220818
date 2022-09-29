#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	for(i=1; i<=1000; i++)
	{
		n=n-i;
		if(n<=0) break;
	}
	printf("%d", i);
}
