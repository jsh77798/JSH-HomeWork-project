
// * #include "ConsoleScreen.h" 는 ConsoleScreen.h(헤더)의 코드가 그대로 복사붙여 지는 것이다. (ConsoleScreen.h코드에 있는 
//   #include "int4.h" 또한 포함되 복붙된다.즉 ConsoleScreen.h에 있는 모든 코드가 복사된다.)
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