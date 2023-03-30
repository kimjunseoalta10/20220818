#include<stdio.h>
main()
{
	int a,i;
	scanf("%d", &a);
	int b[a+1];
	for(i=1; i<=a; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("%d %d %d", b[1], b[i/2], b[i-1]);
}
