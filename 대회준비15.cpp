#include<stdio.h>
main()
{
	int a[101][101]={0}, h, w, n, l, d, x, y, i, j;
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if(d==0)
		{
			for(j=0; j<l; j++)
				a[x][y+j]=1;
		}
		else
		{
			for(j=0; j<l; j++)
				a[x+j][y]=1;
		}
	}
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	 } 
	
}
