#include <stdio.h>
#include <stdlib.h>
void main() 
{
	int i;
	for (i = 0; i < 10; i++) 
	{
		printf_s("%d\n", rand());
	}
	// void main�� return 0 �� �ʿ���� �Լ�
	//int main�� return 0�� �ʿ��� �Լ�
	printf_s("%d\n", rand() % 7);
	//rand() % (55 - 21 +1 )
	//33 ~ 77 rand() % 45 + 33;
	//num1 ~ num2 ����?
	//rand() % (num2 - num1 + 1) num1;
}