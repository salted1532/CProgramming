#include <stdio.h> 

int input();
int Max(int su1, int su2);
int Min(int su1, int su2);

int input() {
	int res;
	printf("정수 : ");
	scanf_s("%d", & res);
	return res;
}

int Max(int su1, int su2) 
{
	if (su1 > su2) 
	{
		return su1;
	}
	else 
	{
		return su2;
	}
}

int Min(int su1, int su2) 
{
	if (su1 < su2)
	{
		return su1;
	}
	else
	{
		return su2;
	}
}

void main() {
	printf("큰수 : %d \t 작은수 : %d\n", Max(input(), input()), Min(input(), input()));
}


/*int plus(int n1, int n2);//선언

void main() 
{
	int res;
	res = plus(10, 20);
	printf("%d\n", res);
}

int plus(int n1, int n2) //<- 가로안에있는게 매개변수들//정의
{
	int result;
	result = n1 + n2;
	return result;
}*/


//선언 : 함수를 쓸거야
//정의 : 함수 해야하는 일들

//매개변수 : 연결 해주는 것 = 매개
//strcmp () => 문자열 비교 strcpy () plus () sum () cos() sin() tan() abs()
/*void main() {
	int plus(int n1, int n2);

	int res;

	res = plus(10, 20); // 함수의 호출
	printf("%d\n", res);
}

int plus(int n1, int n2) {
	int result;
	result = n1 + n2;
	return result;
}*/
