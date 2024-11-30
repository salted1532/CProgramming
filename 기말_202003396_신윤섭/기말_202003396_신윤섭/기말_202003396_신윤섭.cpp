#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    char name[7][10] = { "구리점","춘천점","종로점","수서점","서일점","중랑점","관악점" };
    char tmp[10];  //분기별 최고대리점을 표기하기위한 임시배열
    int sil[7][8] = { 0 };
    int code, top;  //분기별 최고대리점의 코드와 실적을 표기하위한 변수

    int i, j, sel;

    srand((unsigned)time(NULL));

    for (i = 0; i < 7; i++) {

        sil[i][5] = 0;// 총계초기화

        //코드생성 및 실적등록, 총점, 평균계산
        sil[i][0] = 101 + i; //코드생성

        for (j = 1; j < 5; j++)//j분기 실적
        {
            sil[i][j] = (rand() % 49 - 1 + 1) + 7;
            sil[i][5] += sil[i][j]; //총계
        }
        sil[i][6] = sil[i][5] / 4; //평균
    }

    //순위계산
    for (i = 0; i < 7; i++) {
        sil[i][7]++;
        for (j = 0; j < 7; j++)
        {
            if (sil[i][6] < sil[j][6])
                sil[i][7]++;
        }
    }
    printf("code\t점포명\t1분기\t2분기\t3분기\t4분기\t총계\t평균\t순위\n");
    printf("===============================================================================\n");
    for (i = 0; i < 7; i++) {
        printf("%3d\t%s\t", sil[i][0], name[i]);
        for (j = 1; j < 8; j++) {
            printf("%3d\t", sil[i][j]);
        }
        printf("\n");
    }
    printf("===============================================================================\n");
    //분기별 최고실적 대리점 찾기
    code = sil[0][0];
    strcpy(tmp, name[0]);  //strcpy를 배우지 않은거 같지만 알고있어서 사용했습니다.
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

        printf("%d분기 최고 실적 %d %s %d\n", j, code, tmp, top);
    }
    printf("\n");
    for (;;) {
        printf("검색하고자 하는 순위[0 종료] : ");
        scanf_s("%d", &sel);
        //순위별 검색 코드
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