#include<stdio.h>
main()
{
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int sum=0;
	if(a==1)
		sum+=1;
	if(b==1)
		sum+=1;
	if(c==1)
		sum+=1;
	if(d==1)
		sum+=1;
	if(sum==0)
		printf("��");
	if(sum==1)
		printf("��");
	if(sum==2)
		printf("��");
	if(sum==3)
		printf("��");
	if(sum==4)
		printf("��"); 
}
