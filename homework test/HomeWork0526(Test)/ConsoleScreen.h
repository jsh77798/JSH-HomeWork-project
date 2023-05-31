#pragma once
//#include <iostream>
//#include <conio.h>
//class int4
//{
//public:
//    int X = 0;
//    int Y = 0;
//    int Z = 0;
//   int W = 1;
//
//    void operator=(const int4& _Other)
//    {
//        X = _Other.X;
//        Y = _Other.Y;
//        Z = _Other.Z;
//        W = _Other.W;
//    }
//    void operator+=(const int4& _Other)
//    {
//        X += _Other.X;
//        Y += _Other.Y;
//        Z += _Other.Z;
//        W += _Other.W;
//    }
//    int4 operator+(const int4& _Other) const
//    {
//        int4 Return;
//        Return.X = X + _Other.X;
//       Return.Y = Y + _Other.Y;
//        Return.Z = Z + _Other.Z;
//        Return.W = W + _Other.W;
//        return Return;
//    }
//};
//const int XLine = 20;
//const int YLine = 10;
//
//const int4 Left = { -1, 0 };
//const int4 Right = { 1, 0 };
//const int4 Up = { 0, -1 };
//const int4 Down = { 0, 1 };     
// * #include "int4.h" 는 위처럼 int4.h(헤더)의 코드가 그대로 복사붙여 지는 것이다. (int4.h코드에 있는 #include <iostream>,
//   #include <conio.h>또한 포함되 복붙된다.즉 int4.h에 있는 모든 코드가 복사된다.)
#include "int4.h"

class ConsoleScreen
{
public:
   
    ConsoleScreen()
    {

    }

    void Init(char _BaseCh)
    {
        BaseCh = _BaseCh;
        Clear();
    }

    void SetPixel(const int4& _Pos, char _Ch)
    {
        ArrScreen[_Pos.Y][_Pos.X] = _Ch;
    }


    void Clear();
    
    bool IsScreenOut(const int4& _Pos) const;
    
    void Print() const;
   


private:
    char BaseCh = ' ';
    char ArrScreen[YLine][XLine + 1] = {};
};

