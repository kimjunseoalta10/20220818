#include<stdio.h>

func1()
{
	int num1, num2, i;
	printf("공배수를 구할 두 정수 입력 : ");
	scanf("%d %d", &num1, &num2);
	
	for(i=1; i<=100; i++)
	{
		if(i%num1==0&&i%num2==0)
			printf("%d ", i);
	 } 
}
func2()
{
	int num=1, sum=0;
	for(  ; ;  )
	{
		sum = sum+num;
		printf("%d까지의 합: %d \n", num, sum);
		num++;
		if(num>5) break;
	}
}

 







main(){
	int no;
	while(1){
		printf("몇번문제? : ");
		scanf("%d", &no);
		printf("%d번 문제\n", no); 
		switch(no){
			case 1:func1();break;
			case 2:func2();break;
			default:
				return 0;
		} 
	}
} 
