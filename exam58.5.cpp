#include<stdio.h>
main()
{
	int i, j, cnt =1, a[4][5];
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			a[i][j]=cnt;
			cnt++;
		}
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
