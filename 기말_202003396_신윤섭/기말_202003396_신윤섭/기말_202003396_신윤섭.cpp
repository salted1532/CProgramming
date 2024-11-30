#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    char name[7][10] = { "������","��õ��","������","������","������","�߶���","������" };
    char tmp[10];  //�б⺰ �ְ�븮���� ǥ���ϱ����� �ӽù迭
    int sil[7][8] = { 0 };
    int code, top;  //�б⺰ �ְ�븮���� �ڵ�� ������ ǥ�������� ����

    int i, j, sel;

    srand((unsigned)time(NULL));

    for (i = 0; i < 7; i++) {

        sil[i][5] = 0;// �Ѱ��ʱ�ȭ

        //�ڵ���� �� �������, ����, ��հ��
        sil[i][0] = 101 + i; //�ڵ����

        for (j = 1; j < 5; j++)//j�б� ����
        {
            sil[i][j] = (rand() % 49 - 1 + 1) + 7;
            sil[i][5] += sil[i][j]; //�Ѱ�
        }
        sil[i][6] = sil[i][5] / 4; //���
    }

    //�������
    for (i = 0; i < 7; i++) {
        sil[i][7]++;
        for (j = 0; j < 7; j++)
        {
            if (sil[i][6] < sil[j][6])
                sil[i][7]++;
        }
    }
    printf("code\t������\t1�б�\t2�б�\t3�б�\t4�б�\t�Ѱ�\t���\t����\n");
    printf("===============================================================================\n");
    for (i = 0; i < 7; i++) {
        printf("%3d\t%s\t", sil[i][0], name[i]);
        for (j = 1; j < 8; j++) {
            printf("%3d\t", sil[i][j]);
        }
        printf("\n");
    }
    printf("===============================================================================\n");
    //�б⺰ �ְ���� �븮�� ã��
    code = sil[0][0];
    strcpy(tmp, name[0]);  //strcpy�� ����� ������ ������ �˰��־ ����߽��ϴ�.
    for (j = 1; j < 5; j++)   
    {
        top = sil[0][j];

        for (i = 0; i < 7; i++)
        {
            if (sil[i][j] > top)
            {
                code = sil[i][0];
                strcpy(tmp, name[i]);
                top = sil[i][j];
            }
        }

        printf("%d�б� �ְ� ���� %d %s %d\n", j, code, tmp, top);
    }
    printf("\n");
    for (;;) {
        printf("�˻��ϰ��� �ϴ� ����[0 ����] : ");
        scanf_s("%d", &sel);
        //������ �˻� �ڵ�
        for (i = 0; i < 7; i++) {
            if (sel == sil[i][7]) {
                printf("%3d\t%s\t", sil[i][0], name[i]);
                for (j = 1; j < 8; j++) {
                    printf("%3d\t", sil[i][j]);
                }
                printf("\n");
            }
        }
    }
}