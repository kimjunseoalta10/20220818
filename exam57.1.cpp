#include<stdio.h>
main()
{
	int arr[5],i;
	int max, min;
	for(i=0; i<5; i++)
	{
		printf("�Է�: ");
		scanf("%d", &arr[i]); 
	}
	max=0;
	for(i=0; i<5; i++)
	{
		if(max<arr[i]) max=arr[i];
		if(min>arr[i]) min=arr[i];
	}
	printf("�ִ밪: %d\n�ּҰ�: %d", max, min);
}
