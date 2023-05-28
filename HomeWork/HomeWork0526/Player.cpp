#include "Player.h"


void Player::Shoot(ConsoleScreen* Screen)
{
    int4 BulletPos = GetPos();


    char BulletChar = '-';


    int4 BulletMove = Left;


    while (!Screen->IsScreenOut(BulletPos))
    {
        system("cls");
        BulletPos += BulletMove;

        Screen->SetPixel(BulletPos, BulletChar);
        Screen->Print();

        Sleep(100);
        Screen->SetPixel(BulletPos, ' ');
    }
}

void Player::Input(ConsoleScreen* _Screen)
{
    char Select = (char)_getch();

    int4 MovePos = { 0, 0 };

    switch (Select)
    {
    case 'q':
        Shoot(_Screen);
        break;

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

    int4 NewPos = GetPos() + MovePos;

    if (!_Screen->IsScreenOut(NewPos) && _Screen->GetPixel(NewPos) != '0')
    {
        SetPos(NewPos);

    }

}