#include<stdio.h>
void myPrint(char *str,int a)
{
	printf("[%d] %s\n", str);
	printf("==========================\n");
} 
add(int a, int b){
	int sum=a+b;
	printf("%d+%d=%d\n", a, b, sum);
	return sum;
}
main(){
	

	myPrint("10604김서준", 3);
	myPrint("서울로봇", 2);
	myPrint("시스템과", 1);
	
	int ret = add(3.5);
	myprintf("합의 결과", ret)
}
