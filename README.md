# CProgramming

2020년도 1학년 1학기 C언어프로그래밍 기초 수업을 들으며 적성한 코드내용 입니다. C++로도 C언어는 작동 하는데 문제가 없어 cpp확장자로 대부분 작업하였습니다.

# C언어 기초 수업

이 레포지토리는 C 언어의 기초에 대해 배운 내용을 정리한 것입니다. 이 README는 C 언어의 기본 문법과 주요 개념들을 설명합니다.

## 목차

1. [C언어 소개](#c언어-소개)
2. [변수와 자료형](#변수와-자료형)
3. [연산자](#연산자)
4. [제어문](#제어문)
5. [함수](#함수)
6. [포인터](#포인터)
7. [배열과 문자열](#배열과-문자열)
8. [구조체](#구조체)

## C언어 소개

C 언어는 1970년대 초반에 데니스 리치(Dennis Ritchie)가 개발한 프로그래밍 언어입니다. C 언어는 효율적이고, 컴퓨터 하드웨어와 밀접하게 연관되어 있으며, 시스템 프로그래밍에 많이 사용됩니다. 많은 다른 프로그래밍 언어들이 C 언어의 문법과 구조를 기반으로 설계되었습니다.

## 변수와 자료형

변수는 데이터를 저장하기 위한 메모리 공간을 나타냅니다. C 언어에서는 여러 가지 자료형을 지원합니다.

### 예시: 변수 선언

```c
#include <stdio.h>

int main() {
    int num = 10;   // 정수형 변수
    float pi = 3.14;  // 실수형 변수
    char letter = 'A'; // 문자형 변수

    printf("정수: %d, 실수: %f, 문자: %c\n", num, pi, letter);
    return 0;
}
