#include<stdio.h>

func1()
{
	int num1[3][2]={{1,2}, {3,4}, {5,6}};
	//int num1[3][2]={1,2,3,4,5,6};
	//int num1[][2]={1,2,3,4,5,6};
	printf("%d\n", num1[0][0]);
	printf("%d\n", num1[1][1]);
	printf("%d\n", num1[2][1]);
}


func2()
{
	int a[2][3]={{100, 90, 80}, {70, 60, 50}};
	int i, j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}

func3()
{
	int a[4][2];
	int i, j;
	int tot;
	double avg;
	
	for(i=0; i<=3; i++)
	{
		printf("%d번 학생의 수학, C언어 성적 입력 : ", i+1);
		for(j=0; j<2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<4; i++)
	{
		tot=0;
		for(j=0; j<2; j++)
		{
			tot+=a[i][j];
		}
		avg=tot/2.0;
		printf("%d번 학생의 ", i+1);
		printf("총점 : %3d, 평균 : %.2f\n", tot, avg);
	}
}


func4()
{
	char city[3][10] ={"Seoul", "Busan", "Incheon"};
	printf("%s\n", city[0]);
	printf("%s\n", city[1]);
	printf("%s\n", city[2]);
}

func5()
{
	char ani1[4][10]={
		{'c', 'a', 't', '\0'},
		{'h', 'o', 'r', 's', 'e', '\0'},
		{'d', 'o', 'g', '\0'},
		{'t', 'i', 'g', 'e', 'r'}
};
	char ani2[][10]= {"cat", "horse", "dog", "tiger"};
	int i;
	for(i=0; i<4; i++)
		printf("%s ", ani1[i]);
	printf("\n");
	for(i=0; i<4; i++)
		printf("%s ", ani2[i]);
}


func6()
{
	int arr[5];
	int max, min, i;
	for(i=0; i<5; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]); 
	}
	max = 0;
	for(i=0; i<5; i++)
	{
		if(max<arr[i]) max = arr[i];
		if(min>arr[i]) min = arr[i];
	}
	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min); 
}

func7()
{
	int a[5],sum=0, i;
	float avg;
	for(i=0; i<5; i++)
	{
		printf("%d라운드 점수 : ", i+1);
		scanf("%d", &a[i]);
		sum=sum+a[i];
	}
	avg=sum/5.0;
	printf("\n총점은 %d점이며, 평균은 %.2f점입니다.", sum, avg);
}


func8()
{
	int i, n;
	int a[10] = {65, 45, 73, 5,82, 25, 3, 34, 12};
	printf("검색할 데이터 : ");
	scanf("%d", &n);
	for(i=0; i<10; i++)
	{
		if(n==a[i])
		{
			printf("%d는 a[%d]에 있습니다.\n", n, i);
			break; 
		}
	}
	if(i==10)
		printf("%d은(는) 찾을 수 없습니다\n", n);
}

func9()
{
	int i, su, cnt = 0;
	int b[10] = {25, 7, 25, 7, 3, 25, 3, 7, 25, 1};
	printf("데이터 : ");
	scanf("%d", &su);
	for(i=0; i<10; i++)
	{
		if(b[i]==su)
		{
			cnt++;
		}
	}
	printf("%d은(는) %d개 있습니다.\n", su, cnt);
}


func10()
{
	int arr[4][5];
	int i, j, cnt = 1;
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			arr[i][j]=cnt++;
		}
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}

func11()
{
	int a[5][5]={'\0'};
	int i, j;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==j) a[i][j]= 'X';
		}
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}


func12()
{
	char mark[5][5]= {'\0'};
	int i, j;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==j||i+j==4) mark[i][j]='X';
		}
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%c ", mark[i][j]);
		}
		printf("\n");
	}
}


func13()
{

}


func14()
{
	
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
			case 12:func12();break;
			case 13:func13();break;
			case 14:func14();break;
			
			default:
				return 0;
		} 
	}
} 
