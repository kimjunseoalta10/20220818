#include<stdio.h>
main()
{
	char voca[101];
	int len=0;
	printf("���ܾ� �Է�: ");
	scanf("%s", &voca);
	
	while (voca[len]!='\0')
		len++;
	printf("�Է��� ���ܾ��� ���̴� %d", len); 
}
