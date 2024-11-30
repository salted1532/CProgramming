#include <stdio.h>

void main() {
	int i;
	int j;
	for (i = 2; i <= 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) break;
		}
		printf_s("%d\n", i);
	}
}