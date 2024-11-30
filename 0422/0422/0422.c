#include <stdio.h>

void main()
{
	int num = 23, res = 0;
	int num = 10;//바로 넣을수 있음
	double fnum;
	char ch = 'A';//""이거는 문자열이라서 2바이트 임 ''이걸 써야함

	fnum = 12.34;//나중에 넣을수있음

	ch = ch + 1;
	printf("%d  %c\n",ch ,ch);
	
	//sizeof = 데이터형의 바이트 구하기
	printf("%d\n", sizeof(int));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("sizeof(ch) = %d\n", sizeof(char));



	printf("%d\n", (float)num / num * 1.0);//float형으로 바꿔주거나 1.0을 곱해 실수형으로 만들어줌 

}