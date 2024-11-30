#include <stdio.h>

void main() 
{
	char name[10];
	int num[10];
	int i, j,k,l,max = -9999, min = 9999;
	int f;
	/*printf("이름 입력 : ");
	scanf("%s", name);
	printf("=======================\n");
	printf("%s", name);*/


	/*가장 큰 값을 구하기 위해서 max 변수의 초기값을 가장 작은 수를 가져야 한다.
	if(max < num[i]) max = num[i];
	if(min > num[i]) min = num[i];*/
	/*for (i = 0; i < 5; i++) {
		printf("%d번째 데이터 배열요소 num[%d] : input => ", i + 1, i);
		scanf("%d", &num[i]);
		printf("%d\n",num[i]);
		if (max < num[i]) {
			max = num[i];
		}
		if (min > num[i]) {
			min = num[i];
		}
		
	}
	printf("max = %d min = %d",max, min);*/
	for (k = 0; k < 7; k++) {
		printf("%d번째 수 : ", k + 1);
		scanf("%d", &num[k]);
	}
	for (i = 0; i < 6; i++) {
		for (j = i + 1; j < 7; j++) {
			if (num[i] > num[j]) {
				f = num[i];
				num[i] = num[j];
				num[j] = f;
			}
		}
	}
	for (l = 0; l < 7; l++) {
		printf("%d번 -> %d\n",l, num[l]);
	}
	
}