#include<stdio.h>
main()
{
	int a[5]= {1,2,3,4,5};
	int temp;
	int i;
	for(i=0; i<5; i++)
		printf("%d", a[i]);
	printf("\n");
	temp=a[0];
	for(i=0; i<4; i++)
		a[i]=a[i+1];
	a[4]=temp;
	for(i=0; i<5; i++)
		printf("%d", a[i]);
}
