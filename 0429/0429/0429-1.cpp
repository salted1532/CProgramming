#include <stdio.h>

 int main(void)
 {
 	int num1 = 10;
	int su1;
	int su2;

	su1 = num1++;
	su2 = ++num1;

	printf("%d\t%d\t%d\n", num1, su1, su2);

	return 0;
 }