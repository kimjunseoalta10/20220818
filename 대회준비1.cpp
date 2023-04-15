#include<stdio.h>
main()
{
	int a, b, c, i, j, k, cnt=0;
	scanf("%d %d %d", &a, &b, &c);
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			for(k=0; k<c; k++)
			{
				printf("%d %d %d\n", i, j, k);
				cnt ++;
			}
		}
	}
	printf("%d", cnt);
}
