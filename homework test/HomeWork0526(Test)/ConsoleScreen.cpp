
// * #include "ConsoleScreen.h" �� ConsoleScreen.h(���)�� �ڵ尡 �״�� ����ٿ� ���� ���̴�. (ConsoleScreen.h�ڵ忡 �ִ� 
//   #include "int4.h" ���� ���Ե� ���ٵȴ�.�� ConsoleScreen.h�� �ִ� ��� �ڵ尡 ����ȴ�.)
#include "ConsoleScreen.h"


void ConsoleScreen::Clear()
{
    system("cls");
    for (size_t y = 0; y < YLine; y++)
    {
        for (size_t x = 0; x < XLine; x++)
        {
            ArrScreen[y][x] = BaseCh;
        }
        ArrScreen[y][XLine] = 0;
    }
}

bool ConsoleScreen::IsScreenOut(const int4& _Pos) const
{
    if (0 > _Pos.X)
    {
        return true;
    }

    if (0 > _Pos.Y)
    {
        return true;
    }

    if (XLine <= _Pos.X)
    {
        return true;
    }

    if (YLine <= _Pos.Y)
    {
        return true;
    }

    return false;
}

void ConsoleScreen::Print() const
{
    for (size_t y = 0; y < YLine; y++)
    {
        printf_s(ArrScreen[y]);
        printf_s("\n");
    }
}