#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i=0, dan;

	//printf_s("������ : ");
	//scanf_s("%d", &dan);

	/*while (i < 10) {
		printf_s("%d * %d = %d\n", dan, i, dan*i);
		i++;
	}
	do {
		printf_s("%d * %d = %d\n", dan, i, dan * i);
		i++;
	} while (i < 10);*/
	//�迭�̶� ������ ������ Ÿ���� �������� ������ �Ҵ��ϰ� �Ǵ� �ڷᱸ��
	//1���� �迭 2���� 3���� ���
	do {
		i++;
		if (i % 3 == 0) continue;
		printf_s("%d\n", i);
		
	}while (i < 10);
}