#include<stdio.h>
main()
{
	int i, num;
	
	i=1;
	printf("약수를 구할 수 입력 : ");
	scanf("%d", &num);
	
	while(i<=num)
	{
		if(num%i==0) printf("%d " , i);
		i++;
	 } 
}
