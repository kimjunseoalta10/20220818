#include<stdio.h>
main()
{
	char a[51];
	int b[51];
	int n,i,j,t=0,t1=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s %d", &a[i], &b[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(b[j]<b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
				t1=a[j];
				a[j]=a[j+1];
				a[j+1]=t1;
			}
		}
	}
	for(i=0; i<=n; i++)
	{
		if(i==2)
		{
			printf("%s",a[i]);
		}
	}
}
