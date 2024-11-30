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
		printf_s("시도 %d : ",i+1);
		scanf_s("%d", &s);
		if (a > s) {
			printf_s("입력한 수보다 커요\n");
		}
		if (a < s)
		{
			printf_s("입력한 수보다 작아요\n");
		}
		if (a == s)
		{
			printf_s("정답입니다.\n");
			break;
		}
	}
	if (i == 5) {
		printf_s("못 맞췄어요\n");
		printf_s("정답은 %d였습니다!", a);
	}
}