#include<stdio.h>
int fact(int num){
	if(num==0)
		return 1;
	else
		return num * fact(num-1);
}
recusive(int count){
	printf("%d   ", count);
	if(count > 0)
		recusive(count-1);
	printf("*");
}


main(){
	int num;
	printf("숫자 입력 :");
	scanf("%d", &num); 
	//recusive(num);
	printf("%d! = %d", num, fact(num));
}
