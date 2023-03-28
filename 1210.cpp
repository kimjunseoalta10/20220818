#include<stdio.h>
main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	int sum=0;
	if(a==1)
		sum+=400;
	if(a==2)
		sum+=340;
	if(a==3)
		sum+=170;
	if(a==4)
		sum+=100;
	if(a==5)
		sum+=70;
	if(b==1)
		sum+=400;
	if(b==2)
		sum+=340;
	if(b==3)
		sum+=170;
	if(b==4)
		sum+=100;
	if(b==5)
		sum+=70;
	if(sum>500)
		printf("angry");
	if(sum<=500)
		printf("no angry");
 } 
