#include<stdio.h>
main()
{
	int a, b,c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%.2f MB", (float)a*b*c/(8<<20));
}
