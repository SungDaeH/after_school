﻿// 0731.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<stdio.h>
using namespace std;

int main(void)
{
    double num = 3.14;
    double* ptr = &num;
    double** dptr = &ptr;
    double* ptr2;

    printf("%9p %9p \n", ptr, *dptr);

    ptr2 = *dptr;
    *ptr2 = 10.99;
    printf("%9g %9g \n", num, **dptr);
    //int arr[2][3][2] = {
    //    {{1,2},{3,4},{5,6}},
    //    {{7,8},{9,10},{11,12}} 
    //};


    //int i, j, k;
    //int sum[2] = { 0,0 };
    //int temp=0;

    //for (i = 0; i < 2; i++) {
    //    for (j = 0; j < 3; j++) {
    //        for (k = 0; k < 2; k++) {
    //            sum[i] += arr[i][j][k];
    //            //printf("%p:%d \n", &arr[i][j][k], arr[i][j][k]);
    //        }
    //        printf("[%d] \n", sum[i]);
    //    }
    //}
    //std::cout << "Hello World!\n";
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