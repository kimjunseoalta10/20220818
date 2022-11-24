#include<stdio.h>
int main()
{
	int n, i, j, a[1001];
	scanf("%d", &n);
	for(j=0; j<n; j++)
	{
		scanf("%d", &a[j]);
		a[j+n]=a[j];
	}

	for(i=0; i<n; i++)
	{
		for(j=i; j<n+i; j++)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
	}
	
}
