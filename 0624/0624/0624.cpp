#include <stdio.h> 

int input();
int Max(int su1, int su2);
int Min(int su1, int su2);

int input() {
	int res;
	printf("���� : ");
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
	printf("ū�� : %d \t ������ : %d\n", Max(input(), input()), Min(input(), input()));
}


/*int plus(int n1, int n2);//����

void main() 
{
	int res;
	res = plus(10, 20);
	printf("%d\n", res);
}

int plus(int n1, int n2) //<- ���ξȿ��ִ°� �Ű�������//����
{
	int result;
	result = n1 + n2;
	return result;
}*/


//���� : �Լ��� ���ž�
//���� : �Լ� �ؾ��ϴ� �ϵ�

//�Ű����� : ���� ���ִ� �� = �Ű�
//strcmp () => ���ڿ� �� strcpy () plus () sum () cos() sin() tan() abs()
/*void main() {
	int plus(int n1, int n2);

	int res;

	res = plus(10, 20); // �Լ��� ȣ��
	printf("%d\n", res);
}

int plus(int n1, int n2) {
	int result;
	result = n1 + n2;
	return result;
}*/
