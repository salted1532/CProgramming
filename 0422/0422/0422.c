#include <stdio.h>

void main()
{
	int num = 23, res = 0;
	int num = 10;//�ٷ� ������ ����
	double fnum;
	char ch = 'A';//""�̰Ŵ� ���ڿ��̶� 2����Ʈ �� ''�̰� �����

	fnum = 12.34;//���߿� ����������

	ch = ch + 1;
	printf("%d  %c\n",ch ,ch);
	
	//sizeof = ���������� ����Ʈ ���ϱ�
	printf("%d\n", sizeof(int));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("sizeof(ch) = %d\n", sizeof(char));



	printf("%d\n", (float)num / num * 1.0);//float������ �ٲ��ְų� 1.0�� ���� �Ǽ������� ������� 

}