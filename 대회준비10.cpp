#include<stdio.h>
main()
{
	int a[24]={}, n,t;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &t);
		a[t]++;
	}
	
	for(int i=1;i<=23;i++)	printf("%d ",a[i]);
}
