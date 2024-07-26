// 0726.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>

void ShowArray(int* param, int len) {
    int i;
    for (int i = 0; i < len; i++) {
        printf("%d", param[i]++);
        printf("\n");
    }
}

int Add(int a, int b) { return a + b; }

void Swap(int* n1, int* n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    //printf("n1 n2 : %d %d \n", n1, n2);
}

void Swap2(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
    //printf("n1 n2 : %d %d \n", n1, n2);
}
int main()
{
    int num1 = 10, num2 = 20;
    printf("num1 num2 : %d %d \n", num1, num2);
    Swap2(num1, num2); // call by value
    printf("num1 num2 : %d %d \n", num1, num2);
    
    printf("num1 num2 : %d %d \n", num1, num2);
    Swap(&num1, &num2); // call by reference
    printf("num1 num2 : %d %d \n", num1, num2);



    //int arr1[3] = { 1,2,3 };
    //int arr2[5] = { 4,5,6,7,8 };
    //int length = sizeof(arr1) / sizeof(int);

    //ShowArray(arr1, length);

    //for (int i = 0; i < length; i++) {
    //    printf("%d", arr1[i]);
    //    printf("\n");
    //}
    /*printf("%d\n", Add(1, 2));*/
    //int i = 10;

    //int* j; // pointer : 주소 저장

    //j = &i;

    // printf("%d, %d", i, *j); // 포인트 변수를 불러올 때 *을 붙이면 값을 가져옴.

    //printf("%p", j); // 주소를 가져옴.

    //int arr[3] = { 0,1,3 }; // long long으로 int를 바꾸면 size가 4byte에서8byte가 된다.

    //// sizeof()는 그 변수가 가지고 있는 메모리의 길이 (byte길이)
    //for (int i = 0; i < sizeof(arr)/sizeof(long); i++) { // sizeof() : 4x3 = 12byte
    //    printf("%d[%p], ", arr[i], &arr[i]); // 함수 앞에 &를 붙이는 이유는 주소를 불러오기 때문에.
    //} 

    //int arr[3] = { 11,22,33 };

    //int* ptr = arr;

    //printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

    char a = 'A';
    char st[] = "Hello World";

    printf("%s, %d", st, sizeof(st)); // Hello world뒤에 보이지 않는 \n이 있어, 기존에 글자수인 11이 아닌 12가 나온다.
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
