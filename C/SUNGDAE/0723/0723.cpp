// 0723.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main(void)
{
    int sum = 0;
    int i = 0;

    while (i < 6) {
        sum += i;
        i++;
    }

    printf("%d", sum);

    /*for (int i = 0; i < 6; i++) { for 반복
        sum = sum + i;
    }
    printf("%d", sum);*/

    /*float f = 3.14;
    int i = 2;

    float sum = f + i; 덧셈
    printf("sum %f\n", sum);*/

    //printf("%s", "Hello, Wolrd!"); 문자열

    /*float f = 3.14;
    printf("%d", (int)f);*/ // 자료형 변환

    /*float f = 3.14; 실수형
    printf("%f", f);*/

    //char ch = 'A'; 문자열

    //unsigned short age = 1000; // short = 메모리 최적화 unsigned = 부호 없애기
    //printf("%d %d", age, sizeof(age));
    //printf("%c", ch);

    /*int j=1;
    int i = 0;*/

    //printf("%d\n", i & j); // and
    //printf("%d\n", i | j); // or
    //printf("%d\n", i ^ j); // xor
    //printf("%d\n", ~i); // 모든 비트 반전
    //printf("%d\n", j<<1); // 다음 비트로 이동


    /*printf("Hi, %d",i);*/

    //for (int i = 0; i < 10; i++) { 반복문
    //    sum += i;
    //}

    //int num1, num2, num3;
    //int hex = 0xF; // 0x가 앞에 나오면 16진수(핵사값)으로 이해해야한다...

    //printf("%d", hex); 10진수
    /*printf("세 개의 정수를 입력하시오. : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    
    printf("%d % d % d = %d", num1, num2, num3,sum);*/
    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
