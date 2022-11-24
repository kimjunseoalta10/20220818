#include<stdio.h>
main()
{
	int a[4][2];
	int i,j;
	int tot;
	double avg;
	for(i=0; i<=3; i++)
	{
		printf("%d번 학생의 수학, C언어 성적 입력 :", i+1);
		for(j=0; j<=1; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for(i=0; i<=3; i++)
	{
		tot=0;
		for(j=0; j<2; j++)tot+=a[i][j];
		
		avg=tot/2.0;
		printf("%d번 학생의 총점 : %.3d, 평균 : %.2f\n", i+1, tot, avg);
	}
}
