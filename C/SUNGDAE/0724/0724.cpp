// 0724.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
void SimpleFunc(void) {
    static int num1 = 0;
    int num2 = 0;
    num1++, num2++;
    printf("static:%d, local:%d", num1, num2);
}

int global = 10; // 글로벌 변수 전체적으로 사용가능 이름이 같은 변수가 있으면 실행 x


int Add(int n1, int n2) // 함수 생성 방식
{
    int sum = n1 + n2;
    int global = 5; // 로컬 변수 글로벌보다 힘이 쎔
    printf("%d ... %d", global, sum);
    return sum;
}


//void Add(float n1, float n2) { // 함수 생성 방식
//    float sum = n1 + n2;
//    printf("%f", sum);
//}
int Add(int n1, int n2); // 함수 생성 방식
int main()
{
    int i;
    for (i = 0; i < 5; i++) 
        SimpleFunc();
    return 0;

    int s = Add(1, 2); // int와 float를 자동으로 구분하여 계산
    //printf("%d", s);
    return 0;


//    int n = 0;
//
//    if (n == 0) 많이 사용하지 않는 if문
//        goto ONE;
//    else if (n == 1)
//        goto TWO;
//
//ONE:
//    printf("one");
//    goto END;
//TWO:
//    printf("two");
//    goto END;
//END:
//    return 0;

    // 분기문 if, switch

    //char i;
    //
    //printf("알파벳 하나를 출력 (단 a~c까지)");
    //scanf("%c", &i);

    //switch (i) {//스위칭하려는 변수를 스위치문 안데 쓴다. char 스위치 문
    //case 'a':
    //    printf("a");
    //    break;
    //case 'b':
    //    printf("b");
    //    break;

    //case 'c':
    //    printf("c");
    //    break;

    //default:
    //    printf("수를 벗어났습니다.");

    //}

    /*int i = 0;*/
    //printf(" 1이상 5이하의 정수를 입력하세요.");

    //scanf("%d", &i); //파이썬의 input과 같음
    //printf("d", i);

    //switch (i) {//스위칭하려는 변수를 스위치문 안에 쓴다. int 스위치 문
    //    case 0:
    //        printf("0");
    //        break;
    //    case 1:
    //        printf("1");
    //        break;

    //    case 2:
    //        printf("2");
    //        break;

    //    case 3:
    //        printf("3");
    //        break;

    //    case 4: 
    //        printf("4");
    //        break;

    //    case 5:
    //        printf("5");
    //        break;

    //    default:
    //        printf("수를 벗어났습니다.");

    //}


    //while (true) { while문
    //    if (i == 10) {
    //        break; 
    //    }

    //    printf("%d", i);
    //    i++;
    //}

    //while (true) {
    //    if (i == 10) {
    //        continue; continue문
    //    }
    //    i++;
    //}


    //if (x) { if 문
    //    printf("i==0");
    //}
    //else if (i) { 이중 if문
    //    printf("i=1");
    //}
    //else {
 
    //}

    //printf(b ? "true" : "false"); boolean 사용법

    //for (int k = 0; k < 5; k++) { //for문
    //    for (int j = 0; j < 5; j++) {
    //        printf("%d\n", j);
    //    }
    //}

    //while (x < 5) { while문
    //    x++;
    //}
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
