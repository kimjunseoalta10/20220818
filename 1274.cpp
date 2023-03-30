#include<stdio.h>
main()
{
	int n,s=0,i;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			s++;
		}
	}
	if(s==2)
		printf("prime");
	else
		printf("not prime");
}
