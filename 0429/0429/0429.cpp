#include <stdio.h>




int main(void) 
{
	int money = 0;
	int w500;
	int w100;
	int w50;
	int w10;
	printf("�ݾ� :");
	scanf_s("%d", &money);

	w500 = money / 500;
	money = money % 500;

	w100 = money / 100;
	money = money % 100;

	w50 = money / 50;
	money = money % 50;

	w10 = money / 10;
	money = money % 10;

	printf("500�� :%d\n", w500);
	printf("100�� ���� :%d\n", w100);
	printf("50�� ���� :%d\n", w50);
	printf("10�� ���� :%d\n", w10);
	printf("�ܵ� :%d", money);


}