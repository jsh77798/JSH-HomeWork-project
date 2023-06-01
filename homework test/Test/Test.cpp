// Test.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void myPrintf(int _ptr)
{
    _ptr = 200;
    std::cout <<"Arr= "<< _ptr << std::endl;
}

int Print(int A) 
{
    A = 100;
    return A;
}

int main()
{
    {
        int Arr = 20;
        myPrintf(Arr);
    }

    {
        int Att = 10;
        Att=Print(Att);

        std::cout <<"Att= "<< Att << "Att= "<< Print(Att) <<std::endl;
    }




}

