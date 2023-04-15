#include<stdio.h>
main()
{
	int a[20][20], b, c,d, i, j, n;
	for(i=1; i<=19; i++)
	{
		for(j=1;j<=19;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&b);
	for(int l=1;l<=b;l++)
	{
		scanf("%d %d",&c,&d);
		for(i=1;i<=19;i++)
		{
			if(a[c][i]==1)
				a[c][i]=0;
			else
				a[c][i]=1;
		}
		for(i=1;i<=19;i++)
		{
			if(a[i][d]==1)
				a[i][d]=0;
			else
				a[i][d]=1;
		}
		
	}
	
	
	for(i=1;i<=19;i++)
	{
		for(j=1;j<=19;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
