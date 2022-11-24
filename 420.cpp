#include<stdio.h>
int main()
{
	int n, i, j, b;
	
	scanf("%d", &n);
	int a[n]={},t,arr[n]={};
	char c[n][10001]={};
	for(i=0; i<n; i++)
	{
		scanf("%s %d", c[i], &a[i]);
		arr[i]=i;
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(a[j]>a[1+j])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
				
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
		
	}
	
	printf("%s",c[arr[2]]);
}
