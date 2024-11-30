#include <stdio.h>

void main() 
{
	char a[20];
	printf_s("이름을 입력하십시오 : ");
	scanf_s("%s", &a);

	printf_s("%s", a);
}