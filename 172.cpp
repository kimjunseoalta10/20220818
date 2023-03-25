#include<stdio.h>
main()
{
	int a[3]={};
	int t,i,j;
	for(i=0; i<=2; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(j=0; j<3; j++)
	{
		printf("%d ", a[j]);
	}
}
