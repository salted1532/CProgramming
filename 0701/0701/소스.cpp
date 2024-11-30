#include <stdio.h> 

void exchange(int i,int j) {
	int f;

	f = i;
	i = j;
	j = f;
	printf_s("a의 값은 %d b의 값은 %d", i, j);
}


int main() {
	int i,j;
	printf("a의 값 : ");
	scanf_s("%d", &i);
	printf("b의 값 : ");
	scanf_s("%d", &j);
	exchange(i, j);
}
