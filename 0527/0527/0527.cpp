#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	int i;
	int a;
	int s;
	srand((unsigned)time(NULL));
	a = rand() % (50-1+1)+1;
	for (i = 0; i< 5; i++) 
	{
		printf_s("�õ� %d : ",i+1);
		scanf_s("%d", &s);
		if (a > s) {
			printf_s("�Է��� ������ Ŀ��\n");
		}
		if (a < s)
		{
			printf_s("�Է��� ������ �۾ƿ�\n");
		}
		if (a == s)
		{
			printf_s("�����Դϴ�.\n");
			break;
		}
	}
	if (i == 5) {
		printf_s("�� ������\n");
		printf_s("������ %d�����ϴ�!", a);
	}
}