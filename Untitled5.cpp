#include<stdio.h>
main()
{
	int i=1, n, sum=0;
	
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d", &n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
	} 
	printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);
}
