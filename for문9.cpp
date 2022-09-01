#include<stdio.h>
main()
{
	int i, dan;
	printf("원하는 단은?");
	scanf("%d", &dan);
	printf("\n*** %d단 ***\n", dan);
	for(i=1; i<=9; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan*i);
	 } 
 } 
