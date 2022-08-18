#include<stdio.h>
main()
{
	int dan, num=9;
	printf("¸î ´Ü? ");
	scanf("%d", &dan);
	
	while(num>=1)
	{
		printf("%d * %d = %d\n", dan, num, dan*num);
		num--;
	}
} 
