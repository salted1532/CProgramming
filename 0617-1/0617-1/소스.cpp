#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	int arr[5][5] = {{85,75},{95,88},{73,92},{99,98},{73,64}};
	int i,j ,rank;
	char name[5][10] = { "홍길동","김말동","Mr.Lee","이순신","강김찬" };
	bool chk;

	for (i = 0; i < 5; i++) {
		arr[i][2] = arr[i][0] + arr[i][1];
		arr[i][3] = (arr[i][0] + arr[i][1]) / 2;
	}

	for (i = 0; i < 5; i++) {
		arr[i][4] = 1;
		for (j = 0; j < 5; j++)
		{
			if (arr[i][2] < arr[j][2])
			{
				arr[i][4]++;
			}
		}
	}

	printf("이름 / 중간 / 기말 / 총점 / 평균 / 석차\n");
	printf("========================================\n");

	for (i = 0; i < 5; i++) {
		printf("%s\t", name[i]);
		for (j = 0; j < 5; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("========================================\n");
	chk = true;

	printf("검색하고 싶은 순위 : ");
	scanf("%d", &rank);

	printf("\n");
	printf("\n");
	printf("\n");
	//문자 == 숫자는 비교식으론 안된다
	printf("========================================\n");
	for (i = 0; i < 5; i++) {
		if (rank == arr[i][4]) {
			printf("%s\t", name[i]);
			for (j = 0; j < 5; j++) {
				printf("%d", arr[i][j]);
				printf("\t");
				chk = false;
			}
		}
	}
	printf("\n");
	printf("========================================\n");

	//null -> \0

	/*int num[7] = { 1,8,7,9,3,4,5 };
	int i;
	int su , inxp;
	printf("검색하고자 하는 숫자는 : ");
	scanf_s("%d", &su);
	
	inxp = 3;
	while (1) 
	{
		if (su == num[inxp]) {
			printf("검색완료 %d 인덱스\n", inxp);
			break;
		}
		else 
		{
			if (su > num[inxp]) {
				inxp = inxp + (6 - inxp) / 2;
			}
			else {
				inxp = (inxp - 1) / 2;
			}
		}
	}*/
}