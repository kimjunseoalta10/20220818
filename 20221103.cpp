#include<stdio.h>
#include<string.h>
func1()
{
	char str[10];
	printf("����� �̸��� �����Դϱ�? : ");
	scanf("%s", &str);
	printf("�ȳ��ϼ��� %s��\n", str); 
}

func2()
{
	char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char str2[] = "world!";
	int i;
	
	printf("%s\n", str1);
	for(i=0; i<6; i++)
		printf("%c", str2[i]);
	//printf("%s\n", str2);
	
	printf("\nstr1�� ũ�� : %d\n", sizeof(str1));
	printf("str2�� ũ�� : %d\n", sizeof(str2));
	str2[5]= '~';
	printf("%s\n", str2);
}

func3()
{
	int i;
	char str[10]="Good time";
	for(i=0; i<=9; i++)
	{
		printf("str[%d]=%c\n", i, str[i]);
	}
}

func4()
{
	char str[6] = "apple";
	int i = 0;
	printf("�� ���ھ� ���\n");
	while(i<6)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n\n���ڿ��� �Ѳ����� ���\n");
	printf("%s\n", str);
}

func5()
{
	char a[] = "Seoul Robotics";
	printf("%s\n", a);
	a[5]= '\0';
	printf("%s\n", a);
}

func6()
{
	char voca[50];
	int len =0;
	printf("���ܾ� �Է�: ");
	scanf("%s", &voca);
	
	while(voca[len]!='\0')
		len++;
	printf("�Է��� ���ܾ��� ���̴� %d\n", len);
}

func7()
{
	int i, n, a[1000];
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=n; i>=1; i--)
	{
		printf("%d ", a[i]);
	}
}

func8()
{
	int i, j, k, a[100];
	scanf("%d", &k);
	for(j=1; j<=k; j++)
	{
		scanf("%d", &a[j]);
	}
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=k; j++)
		{
			printf("%d\n", a[j]);
		}
	}
}

func9()
{
	int i, k, j, a[1001];
	scanf("%d", &k);
	
	for(i=1; i<=k; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=1; i<=k; i++)
	{
		a[i+k]= a[i];
	}
	for(i=0; i<k; i++)
	{
		for(j=1; j<=k; j++)
		{
			printf("%d ", a[j+i]);
		}
		printf("\n");
	}
}

func10()
{
	char str[100];
	int i;
	gets(str);
	printf("str�� ���ڱ��� : %d\n", strlen(str));
	for(i=strlen(str)-1; i>=0; i--)
		printf("%c", str[i]);
}



func11()
{
	int score[5];
	int i, min= 100;
	for(i=0; i<5; i++)
	{
		printf("%d�� �л��� ���α׷��� ������ �Է� : ", i+1);
		scanf("%d", &score[i]);
	}
	for(i=0; i<5; i++)
		if(score[i]<min)
			min = score[i];
	printf("���� ���� : %d\n", min);
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
			case 7:func7();break;
			case 8:func8();break;
			case 9:func9();break;
			case 10:func10();break;
			case 11:func11();break;

			default:
				return 0;
		} 
	}
} 
