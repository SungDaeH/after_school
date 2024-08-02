// 0802.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdlib.h>

struct Node {
    int data; // 노드가 저장하는 데이터
    struct Node* next; // 다음 노드를 가리키는 포인터
};

//리스트에 노드를 추가하는 함수
void append(struct Node** head_ref, int new_data) {
    // 새로운 노드 생성
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref; // 리스트의 마지막 노드를 찾기 위한 포

    new_node->data = new_data; // 새로운 노드에 데이터 추가
    new_node->next = NULL; // 새로운 노드는 다음 노드가 없음

    // 리스트가 비어 있는 경우
    if (*head_ref == NULL) {
        *head_ref = new_node;
        printf("NULL\n");
    };
}

// 메모리 해체를 위한 함수


int main()
{
    std::cout << "Hello World!\n";
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
