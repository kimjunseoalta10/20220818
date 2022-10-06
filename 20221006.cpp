#include <stdio.h>
#include <stdlib.h>
#include <time.h>

exam1(){
	int i=30;
	while(i>=10)
	{
		printf("%d ", i);
		i-=2;
	}
} 

exam2(){
	int a,i,sum=0;
	printf("합을 구할 마지막 수 입력 : ");
	scanf("%d", &a);
	while(i<=a)
	{
		sum+=i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다", a, sum);
} 

exam3(){
	int i=0,sum=0;
	while(1)
	{
		i++;
		if(i>10) break;
		if(i%5==0) continue;
		sum+=i;
		
	}
	printf("sum = %d", sum);
} 

exam4(){ 
	int a,i,cnt=0;
	printf("숫자 입력 : ");
	scanf("%d", &a);
	i=1;
	while(i<=a)
	{
		if(a%i==0) 
			cnt++;
		i++;
	}
	if(cnt==2) printf("%d은(는) 소수", a);
	else printf("%d은(는) 소수가 아님", a);
} 

exam5(){
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=4; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
} 

exam6(){
	int a,n;
	printf("4자리수 입력 : ");
	scanf("%d", &a);
	do
	{
		printf("%d", a%10);
		a=a/10;
	}
	while(a!=0);
}

exam7(){
	int a,b=0,c=1,d,i;
	printf("몇 번째 항까지 구할까요? ");
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		printf("%d ", b);
		d=b+c;
		b=c;
		c=d;
	}
	 
}

exam8(){
	int a,b,c,i;
	printf("*** 두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력 : ");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		c=a;
		a=b;
		b=c;
	 }
	 for(i=a; i<=b; i++)
	 {
	 	printf("%d ", i);
	 }
}

exam9(){
	int i, j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<i; j++)
		{
			printf("0");
		}
		printf("*\n");
	}
}

exam10(){
	int i,j;
	for(i=1; i<=9; i++)
	{
		for(j=2; j<=5; j++)
		{
			printf("%d * %d = %d\t", j, i, j*i);
		}
		printf("\n");
	}
	printf("\n");
	for(i=1; i<=9; i++)
	{
		for(j=6; j<=9; j++)
		{
			printf("%d * %d = %d\t", j, i, j*i);
		}
		printf("\n");
	}
}






main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
		}
	}
}
