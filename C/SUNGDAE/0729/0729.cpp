// 0729.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int; // 복습
    int* array = new int[10];
    int ten = 10;

    ptr = &ten;
    cout << *ptr;
    free(ptr);
    //cout << *ptr;

    free(array); // 메모리 종료
    

    //struct stack {
    //    int arr[10000]; // 메모리를 10000으로 설정하여 4x10000으로 40008의 메모리가 필요하다.
    //    int last;

    //    void init() {
    //        last = -1;
    //    }
    //    void push(int data) {
    //        arr[++last] = data;
    //    }
    //    bool empty() {
    //        return (last < 0);
    //    }
    //    int pop() {
    //        if (empty()) {
    //            return -1;
    //        }
    //        return arr[last--];
    //    }
    //    int size(){
    //        return last + 1;
    //    }
    //    int top() {
    //        if (empty()) {
    //            return -1;
    //        }
    //        return arr[last];
    //    }
    //};

    //stack s;
    //s.init();

    //s.push(10);
    //int x = s.pop();
    //cout << x << endl;
    //int y = s.size();
    //cout << y << endl;
    //s.empty();
    //s.top();

    //return 0;

    //int a = 10;
    //int* pa = &a;
    //char alpha = 'a';
    //char* palpha = &alpha;
    //double dp = 5.3;
    //double* pdp = &dp;

    //cout << "a의 값 : " << a << endl;
    //cout << "pa의 값 : " << pa << endl;
    //cout << "pa의 저장된 값 : " << *pa << endl;
    //cout << sizeof(alpha) << sizeof(dp) << endl;
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
