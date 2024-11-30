#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i=0, dan;

	//printf_s("구구단 : ");
	//scanf_s("%d", &dan);

	/*while (i < 10) {
		printf_s("%d * %d = %d\n", dan, i, dan*i);
		i++;
	}
	do {
		printf_s("%d * %d = %d\n", dan, i, dan * i);
		i++;
	} while (i < 10);*/
	//배열이란 동일한 데이터 타입이 연속적인 공간을 할당하게 되는 자료구조
	//1차원 배열 2차원 3차원 등등
	do {
		i++;
		if (i % 3 == 0) continue;
		printf_s("%d\n", i);
		
	}while (i < 10);
}