#include<stdio.h>
main()
{
	int i, su, cnt = 0;
	
	printf("숫자 입력 : ");
	scanf("%d", &su);
	
	i=1;
	while(i<=su)
	{
		if(su%i==0)
			cnt++;
		i++;
	 } 
	 if(cnt==2)
	 	printf("%d은(는) 소수\n", su);
	else
	 	printf("%d은(는) 소수가 아님\n", su);
}
