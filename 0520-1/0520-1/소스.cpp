#include <stdio.h>
#include <stdlib.h>
void main() 
{
	int i;
	for (i = 0; i < 10; i++) 
	{
		printf_s("%d\n", rand());
	}
	// void main은 return 0 가 필요없는 함수
	//int main은 return 0가 필요한 함수
	printf_s("%d\n", rand() % 7);
	//rand() % (55 - 21 +1 )
	//33 ~ 77 rand() % 45 + 33;
	//num1 ~ num2 난수?
	//rand() % (num2 - num1 + 1) num1;
}