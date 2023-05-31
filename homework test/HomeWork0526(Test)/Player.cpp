#include "Player.h"

void Player::Input(ConsoleScreen* _Screen)
{
    char Select = (char)_getch();

    int4 MovePos = { 0, 0 };

    switch (Select)
    {
    case 'a':
        MovePos = Left;
        break;

    case 'd':
        MovePos = Right;
        break;

    case 'w':
        MovePos = Up;
        break;

    case 's':
        MovePos = Down;
        break;

    default:
        break;
    }


     
    // -> 는 포인터가 가리키는 객체의 멤버에 접근하기 위해 사용됩니다. 포인터를 통해 멤버 변수나 멤버 함수에 접근할 때 사용됩니다.
    if (false == _Screen->IsScreenOut(GetPos() + MovePos))
    {
        AddPos(MovePos);
    }

}