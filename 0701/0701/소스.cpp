#include <stdio.h> 

void exchange(int i,int j) {
	int f;

	f = i;
	i = j;
	j = f;
	printf_s("a�� ���� %d b�� ���� %d", i, j);
}


int main() {
	int i,j;
	printf("a�� �� : ");
	scanf_s("%d", &i);
	printf("b�� �� : ");
	scanf_s("%d", &j);
	exchange(i, j);
}
