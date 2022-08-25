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
	 
	 printf("\n***********************\n");
	 int count=1;
	 
	 while(1)
	{
		if(count%2==1)
		{
			printf("%d ", count);
		}
		else
		{
		}
		count++;
		
		if(count>10) break;
	}
 } 
