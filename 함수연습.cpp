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
	

	myPrint("10604�輭��", 3);
	myPrint("����κ�", 2);
	myPrint("�ý��۰�", 1);
	
	int ret = add(3.5);
	myprintf("���� ���", ret)
}
