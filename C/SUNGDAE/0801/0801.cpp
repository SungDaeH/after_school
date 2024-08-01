// 0801.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <math.h>

using namespace std;

#include <stdio.h>

struct point_ { // 자주 쓰임
    int posx;
    int posy;
};

typedef struct person_ { // typedef로 미리 선언 가능
    char name[30];
    char phoneNum[20];
    int age;
    struct point_ point;
} Person; 
typedef int INT; // typedef 선언시 struct 함수 생략가능
typedef point_ Point;
//typedef person_ Person;

void printPoint(Point p) { printf("pointX : %d \n", p.posx, p.posy); }
int main()
{
    Person person[3] = {
        {"손재영", "01012345678", 22, {1, 1}},
        {"양민석", "01098765432", 12, {1, 1}},
        {"전종현", "01034567889", 3, {1, 1}}
    };

    for (int i = 0; i < 3; i++) {
        printf("이름 : %s \n", person[i].name);
        printf("전화번호 : %s \n", person[i].phoneNum);
        printf("나이 : %d \n", person[i].age);  // Changed %s to %d for integer
        printPoint(person[i].point);
        //printf("포인트 : (%d, %d) \n", person[i].point.posx, person[i].point.posy);
    };

    return 0;
};

    //struct point pos1, pos2;
    //double distance;
    //fputs("point1 pos:", stdout);
    //scanf("%d %d", &pos1.posx, &pos1.posy);

    //distance =(double)(pos1.posx * pos1.posy);

    //printf("multified : %f", distance);


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
