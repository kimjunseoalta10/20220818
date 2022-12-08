#include<stdio.h>

int add(int a, int b) {
	return a+b;
}
int minus(int a, int b) {
	return a-b;
}
int mult(int a, int b) {
	return a*b;
}
int divide(int a, int b) {
	if(b==0){
		printf("0으로 나눌 수 없습니다.");
	}
	return a/b;
	
}

main(){
	printf("계산식을 입력하세요(ex:1 + 2)\n ");
	int a, b;
	char op;
	int ret;
	scanf("%d %c %d", &a, &op, &b);
	switch(op){
		case '+' : ret = add(a,b);	break;
		case '-' : ret = minus(a,b);	break;
		case '*' : ret = mult(a,b);	break;
		case '/' : ret = divide(a,b);	break;
		default: break;
	}
	if(op!='/'|| b!=0)
		printf("%d %c %d = %d", a, op, b, ret);
}

