#pragma once
#include "ConsoleScreen.h"


class Player
{
public:

    int4 GetPos() const
    {
        return Pos;
    }

    void AddPos(const int4& _Pos)
    {
        Pos += _Pos;
    }

    void SetPos(const int4& _Pos)
    {
        Pos = _Pos;
    }

    // �����ڿ��� ���ϼ��� ����.
    Player()
        : Pos()
    {
    }


    Player(const Player&) = delete;

    void Input(ConsoleScreen* _Screen);


private:

    int4 Pos;
};
