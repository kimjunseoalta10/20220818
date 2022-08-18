#include<stdio.h>
main()
{
	int  s,i=1, n, sum=0;
	printf("첫번쨰 수 : ");
	scanf("%d", &i);
	s=i;
	printf("두번쨰 수 : ");
	scanf("%d", &n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
	 } 
	printf("%d부터 %d까지의 합은 %d입니다.", s, n, sum);
}
