#include<stdio.h>

func1()
{
	int i;
	int num[3];
	num[0]= 10;
	num[1]= 20;
	num[2]= 30;
	for(i=0; i<3; i++)
		printf("num[%d] = %d\n", i, num[i]);
}

func2()
{
	int a[10], i;
	for(i=0; i<=9; i++)
	{
		a[i]=5;
	}
	printf("a[5]: %d\n", a[5]);
	printf("a[7]: %d\n", a[7]);
}

func3()
{
	int data[6], i;
	for(i=0; i<6; i++)
	{
		printf("������ �Է� : ");
		scanf("%d", &data[i]);
	}
	for(i=5; i>=0; i--)
	{
		printf("%d ", data[i]);
	}
}

func4()
{
	int score[5];
	int i, sum = 0;
	for(i=0; i<5; i++)
	{
		printf("%d�� �л��� ���α׷��� ������ �Է�: ", i+1);
		scanf("%d", &score[i]);
	}
	for(i=0; i<5; i++)
		sum += score[i];
	printf("���� : %d \n", sum);
	printf("��� : %.2f \n", sum/5.0);
}

func5()
{
	int score[5];
	int i, max = 0;
	for(i=0; i<5; i++)
	{
		printf("%d�� �л��� ���α׷��� ������ �Է� : ", i+1);
		scanf("%d", &score[i]);
	}
	for(i=0; i<5; i++)
		if(score[i]>max)
			max = score[i];
	printf("�ְ� ���� : %d \n", max);
}
func6()
{
	int h[]={170, 178, 175, 180, 177, 167, 189};
	int i, h_min = h[0], num;
	for(i=0; i<7; i++)
	{
		if(h[i]<h_min)
		{
			h_min = h[i];
			num = i+1;
		}
	}
	printf("���� Ű�� ���� �л���ȣ = %d��, Ű = %dcm \n", num, h_min);
}



main(){
	int no;
	while(1){
		printf("�������? : ");
		scanf("%d", &no);
		printf("%d�� ����\n", no); 
		switch(no){
			case 1:func1();break;
			case 2:func2();break;
			case 3:func3();break;
			case 4:func4();break;
			case 5:func5();break;
			case 6:func6();break;
			default:
				return 0;
		} 
	}
} 
