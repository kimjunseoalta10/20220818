#include<stdio.h>
main()
{
	int a[101], i;
	for(i=0; i<6; i++)
	{
		printf("정수를 입력: ");
		scanf("%d", &a[i]);
	}
	for(i=5; i>=0; i--)
	{
		printf("%d ", a[i]);
	}
}
