#include<stdio.h>
#include<string.h>
func1()
{
	char str[10];
	printf("당신의 이름은 무엇입니까? : ");
	scanf("%s", &str);
	printf("안녕하세요 %s님\n", str); 
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
	
	printf("\nstr1의 크기 : %d\n", sizeof(str1));
	printf("str2의 크기 : %d\n", sizeof(str2));
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
	printf("한 문자씩 출력\n");
	while(i<6)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n\n문자열로 한꺼번에 출력\n");
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
	printf("영단어 입력: ");
	scanf("%s", &voca);
	
	while(voca[len]!='\0')
		len++;
	printf("입력한 영단어의 길이는 %d\n", len);
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
	printf("str의 문자길이 : %d\n", strlen(str));
	for(i=strlen(str)-1; i>=0; i--)
		printf("%c", str[i]);
}



func11()
{
	int score[5];
	int i, min= 100;
	for(i=0; i<5; i++)
	{
		printf("%d번 학생의 프로그래밍 성적을 입력 : ", i+1);
		scanf("%d", &score[i]);
	}
	for(i=0; i<5; i++)
		if(score[i]<min)
			min = score[i];
	printf("최저 점수 : %d\n", min);
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
