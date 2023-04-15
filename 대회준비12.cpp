#include<stdio.h>
main()
{
	int a[10001], n, k=24;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i]<k)
		{
			k=a[i];
		}
	}
	printf("%d", k);
}
