#include<stdio.h>
main()
{
	int  s,i=1, n, sum=0;
	printf("ù���� �� : ");
	scanf("%d", &i);
	s=i;
	printf("�ι��� �� : ");
	scanf("%d", &n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
	 } 
	printf("%d���� %d������ ���� %d�Դϴ�.", s, n, sum);
}
