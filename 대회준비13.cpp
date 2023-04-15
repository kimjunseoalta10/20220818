#include<stdio.h>
main()
{
	int a[20][20]={0}, b, c, n, i, j;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d %d", &b, &c);
		a[b][c]=1;
	}
	for(i=1; i<=19; i++)
	{
		for(j=1; j<=19; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}
