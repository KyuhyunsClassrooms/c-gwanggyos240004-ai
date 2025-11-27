#include <stdio.h>

/*
    1. int choice;                // 메뉴 선택
char *students[5];         // 학생 이름 배열
int attendance[5];         // 출석 상태(0 미체크, 1 출석, 2 결석)

    
    예시 - 배열 사용:
    char students[100][20];
    int attendance[100];
int count = 0;        
    
    예시 - 구조체 사용 (선택):
    // 학생 구조체 정의
struct Student {
    char name[20];     
    int attendance;    
};

// 최대 100명 학생 배열
struct Student students[100];

// 현재 등록된 학생 수
int count = 0;

*/


/*
    2. // 메뉴 출력
void showMenu();

// 사용자 입력 받기
int getInput();

// 출석 처리
void attend();

// 결석 처리
void absent();

// 프로그램 종료 처리 (옵션)
void exitProgram();

#include <stdio.h>

void attend() { printf("출석 처리 완료!\n"); }
void absent() { printf("결석 처리 완료!\n"); }

int main() {
    int menu;

    printf("=== 프로그램 시작 ===\n");

    while (1) {
        printf("\n1. 출석\n2. 결석\n0. 종료\n선택: ");
        scanf("%d", &menu);

        if (menu == 1)
            attend();
        else if (menu == 2)
            absent();
        else if (menu == 0)
            break;
        else
            printf("잘못된 입력입니다.\n");
    }

    printf("=== 프로그램 종료 ===\n");
    return 0;
}