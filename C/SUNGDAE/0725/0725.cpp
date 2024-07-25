// 0725.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Recursive(int num) {
    if (num <= 0) return;

    printf("%d", num);
    
    Recursive(num - 1);
}
int main()
{
    // 포인터는 데이터를 저장하는 곳의 주소를 말한다.
    // 포인터 변수는 데이터를 저장하는 곳의 주소를 저장하고 있다

    //int num = 7;
    //int * pnum; // pointer 변수 생성, 데이터는 없음

    //pnum = &num; // num의 있는 주소값을 pnum에 저장

    //printf("%d", *pnum);    // 정해진 자료형이 다르면 오류 발생

    // 연습문제
    //int num = 10;
    //int* ptr1 = &num; // 실제 주소 삽입
    //int* ptr2 = ptr1;

    //(*ptr1)++; // num의 주소를 받아 왔기에 num++과 같음
    //(*ptr2)++; // ptr1의 주소를 받아 와 실상 위에 코드와 같음

    //printf("%d", num); // 답은 12

    int arr[3] = { 0,1,2 }; // int pointer 변수

    printf("%p \n", arr);
    printf("%p \n", &arr[0]);
    printf("%p \n", &arr[1]);
    printf("%p \n", &arr[2]);
    
    return 0;

    //char a = 'a';

    //char str[] = "Good Morning!"; // 문자열은 char 형의 어레이라고 말할 수 있다.

    //printf("%s", str);

    //for (int i = 0; i < size(str); i++)
    //{
    //    printf("%c", str[i]); // 하나씩 꺼내기에 %s가 아닌 %c를 사용.
    //}



    //int now_temp = 30;

    //printf("섭씨와 화씨를 선택하시오. [1] 섭씨 [2] 화씨");

    //int num;

    //scanf("%d", &num);

    //if (num == 1) {
    //    int minus = 18 * now_temp + 32;
    //    printf("%d", minus);
    //}
    //else if (num == 2) {
    //    int plus = (now_temp - 32) / 1.8;
    //    printf("%d", plus);
    //}

    //Recursive(5);
    //return 0;

    //vector<int> num_list = { 1,2,3,4,5 };
    //reverse(begin(num_list), end(num_list));
    //for (int i = 0; i < num_list.size(); i++) {
    //    cout << num_list[i] << " ";
    //}
    //return 0;

    //vector<int> v = { 1,2,3 };
    //cout << "v[1] : " << v[1] << "\n"; // v[1] : 2
    //cout << "v.back() : " << v.back() << "\n"; // v.back() : 3
    //v.push_back(10);
    //cout << "v.back() <added> : " << v.back() << "\n"; // v.back() <added> : 10

    //cout << "v.size() : " << v.size() << "\n"; // v.size() : 4
    //v.push_back(12);
    //v.push_back(14);
    //v.push_back(16);
    //v.push_back(18);
    //cout << "v.size() <added> : " << v.size() << "\n"; // v.size() <added> : 8

    //vector<int> v(10, -1); // 벡터 생성

    //v.push_back(2);

    //v.clear(); // 벡터 초기화
    //v.push_back(2);
    //cout << v.size() << "\n";

    //vector<int> v(10, -1); // 벡터 생성

    //v.push_back(2); // 뒤에 값 추가
    //cout << v.size() << "\n";

    //vector<int> v(10, -1); // 벡터 생성

    //cout << v.front() << v.back() << "\n"; // front : 벡터에 첫번째 값 가져오기 back : 벡터의 마지막 값 가져오기

    //vector<int> v(10, -1); // 벡터 생성

    //cout << v.at(3) << "\n"; // at : 벡터의 특정 지점 가져오기

    //vector<int> v(10); // 벡터 생성

    //for (int i = 0; i < 10; i++)
    //    cout << v[i] << "\n";

    //int x = 0;
    //int numbers[5] = { 1, };
    //int number[5] = { 1,2,3,4,5 }; // 어레이...

    //for (int i = 0; i < 5; i++) {
    //    printf("%d", number[i]);
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
