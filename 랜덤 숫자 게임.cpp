#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{

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
