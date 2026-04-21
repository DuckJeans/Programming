#include <stdio.h>
#include <windows.h>


enum State
{
    IDLE = 99,
    ATTACK,
    DIE

    // 열거형은 값을 따로 설정할 수 있으며, 설정된 다음 값은 그 전의
    // 값에서 하나 증가된 값으로 설정됩니다.
};

enum Color
{
    BLACK,
    DARKBLUE,
    DARKGREEN,
    DARKSKYBLUE,
    DARKRED,
    DARKVIOLET,
    DARKYELLOW,
    GRAY,
    DARKGRAY,
    BLUE,
    GREEN,
    SKYBLUE,
    RED,
    VIOLET,
    YELLOW,
    WHITE
};

void convert(enum State state)
{
    switch (state)
    {
    case IDLE:
        printf("\n현재 가만히 있는 상태입니다.");
        break;
    case ATTACK:
        printf("\n현재 공격중입니다.");
        break;
    case DIE:
        printf("\n현재 사망하여 상호작용이 불가능합니다.");
    default:
        printf("\n현재 상태를 알 수 없습니다.");
        break;
    }
}

int main()
{
#pragma region 열거형
    // 관련된 상수의 값을 이름으로 정의한 집합의 자료형입니다.

   // enum State state = IDLE;
   //
   // int con;
   //
   // printf("0~2까지의 상태를 확인하세요. : ");
   // scanf_s("%d", &con);
   //
   // convert(con);
#pragma endregion

    int size = WHITE;

    for (int j = 0; j <= size; j++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), j);

        if (j % 3 == 0)
        {
            system("pause");
        }

        printf("color index : %d\n", j);
    }

    return 0;
}