#include<stdio.h>
main()
{
	int i, num;
	
	i=1;
	printf("����� ���� �� �Է� : ");
	scanf("%d", &num);
	
	while(i<=num)
	{
		if(num%i==0) printf("%d " , i);
		i++;
	 } 
}
