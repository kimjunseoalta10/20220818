#include<stdio.h>
#include<stdlib.h>
#include<time.h>
exam1(){
	int i,j;
	for(i=1; i<=3; i++)
	{
		printf("%d(i)�г�\n", i);
		for(j=1; j<=5; j++)
		{
			printf("\t%d(j)��\n", j);
		}
		printf("\n");
	}
} 

exam2(){
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=3; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
} 

exam3(){
	int i,j;
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=5; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	
} 

exam4(){
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
} 

exam5(){
	int i, j, n;
	printf("����� �� �Է� : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	 } 
} 
exam6(){
	int i,j;
	for(i=1; i<=5; ++i)
	{
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
	for(i=4; i>=1; --i)
	{
		for(j=i; j>=1; j--)
			printf("*");
		printf("\n");
	}
	
}

exam7(){
	int i,j;
	for(i=2; i<=9; i++)
	{
		printf("*** %d�� **** \n", i);
		for(j=1; j<=9; j++)
		{
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}

exam8(){
	int num=0;
	while(1)
	{
		num++;
		printf("%d \n", num);
		if(num == 5)
			break;
	}
}

exam9(){
	int i,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Be happy~\n");
		}
	}
}

exam10(){
	int i,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Be happy~\n");
			if(j==1) break;
		}
	}
}

exam11(){
	int i;
	for(i=0; i<10; i++)
	{
		if(i%3==0)
			continue;
		printf("%d ", i);
	}
}

exam12(){
	int i=0;
	while(i<=20)
	{
		i++;
		if(i%2==1
		) continue;
		printf("%d \n", i);
	}
}

exam13(){
	int n =1, sum = 0;
	
	while(1)
	{
		sum+=n;
		if(sum>=100) break;
		n++;
	}
	printf("sum = %d, n=%d\n ", sum, n);
}

exam14(){
	int n, count = 0, sum=0;
	
	do
	{
		scanf("%d", &n);
		if(n<1) continue;
		count++;
		sum+=n;
	}while(count<5);
	
	printf("�հ� : %d \n", sum);
}

exam15(){
	int n,a;
	printf("4�ڸ��� �Է� : ");
	scanf("%d", &n);
	
	do{
		printf("%d", n%10);
		n=n/10;
	} while(n!=0);
}

exam16(){
	int n, a1 =0, a2=1, a3, i;
	printf("�� ��° �ױ��� ���ұ��? ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("%d ", a1);
		a3 = a1+a2;
		a1 = a2;
		a2 = a3;
	 } 
}

exam17(){
	int answer, cnt=0, guess;
	srand(time(NULL));
	answer=rand()%101;
	
	do{
		printf("1���� 100���� ���ڸ� ���纸����>> ");
		scanf("%d", &guess);
		cnt++;
		
		if(guess>answer)
			printf("������ ���ڰ� �����ϴ�.\n");
		if(guess<answer)
			printf("������ ���ڰ� �����ϴ�.\n"); 
	}while(guess!=answer);
	
	printf("�����մϴ�! ������ %d�̰�, �õ�Ƚ�� = %d\n", answer, cnt);
}

exam18(){
	int a, b, temp, i;
	printf("*** �� �� ������ ���� ����ϱ� ***\n");
	printf("�� �� �Է� : ");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	for(i=a; i<=b; i++)
	{
		printf("%d ", i);
	}
}

exam19(){
	int i;
	for(i=1; i<=25; i++)
	{
		printf("%3d ", i);
		if(i%5==0) printf("\n");
	}
}

exam20(){
	int num;
	while(1)
	{
		printf("�����Է� : ");
		scanf("%d", &num);
		if(num<0) continue;
		if(num==0) continue;
		if(num%2==0)
			printf("¦��\n");
		else
			printf("Ȧ��\n");
	 } 
}

exam21(){
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i; j++)
		{
			printf("0");
		}
		printf("*\n");
	}
}

exam22(){
	int i=1, j;
	while(i<=5)
	{
		j=1; 
		while(j<i)
		{
			printf("0");
			j++;
		}
		printf("*\n");
		i++;
	}
}

exam23(){
	int n,i,jumsu;
	int max=0, min = 100;
	printf("�л����� �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("������ �Է��ϼ���(0~100) : ");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &jumsu);
		if(max<jumsu) max=jumsu;
		if(min>jumsu) min=jumsu;
	 } 
	printf("1���� %d��, ������ %d��\n", max, min);
}

exam24(){

	
}

exam25(){
}

exam26(){
}

exam27(){
}

exam28(){
}

exam29(){
}

exam30(){
}



main(){
	int no;
	
	while(1){
		printf("\n������ȣ:");
		scanf("%d" , &no);
		printf("%d�� ����==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
			case 11: exam11(); break;
			case 12: exam12(); break;
			case 13: exam13(); break;
			case 14: exam14(); break;
			case 15: exam15(); break;
			case 16: exam16(); break;
			case 17: exam17(); break;
			case 18: exam18(); break;
			case 19: exam19(); break;
			case 20: exam20(); break;
			case 21: exam21(); break;
			case 22: exam22(); break;
			case 23: exam23(); break;
			case 24: exam24(); break;
			case 25: exam25(); break;
			case 26: exam26(); break;
			case 27: exam27(); break;
			case 28: exam28(); break;
			case 29: exam29(); break;
			case 30: exam30(); break;
		}
	}
}
