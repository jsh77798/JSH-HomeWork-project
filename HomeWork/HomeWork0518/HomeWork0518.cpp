﻿// HomeWork0518.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
//int ChCount = 0;
//While(Arr[ChCount])
//{
//    char printch = Arr[ChCount];
//    putchar(PrintCh);
//    ++ChChount;
//}
int StringCount(char* Arr)
{
    int ChCount = 0;

    while (Arr[ChCount])
    {
        ++ChCount;
    }

    return ChCount;
}

void ChangeCh(char* _Arr, char _PrevCh, char _NextCh)
{
    for (int i = 0; _Arr[i] != '0'; ++i)
    {
        if (_Arr[i] == _PrevCh)
        {
            _Arr[i] = _NextCh;
        }
    }
}

int main()
{
    // 한글 들어가지 않습니다.
    {
        char Arr[100] = "312312321";

        //글짜 수를 세는 함수
        int Result = StringCount(Arr);

        std::cout << "글짜 수: " << Result << "\n";
        int a = 0;
    }

    {
        char Arr[100] = "aaa bbb ccc";

        Arr[0] = 'a';
        // "aaa bbb ccc"; => "aaa bbb ddd";
        ChangeCh(Arr, 'c', 'd');
        std::cout << "변경 후: " << Arr;

        int a = 0;
    }


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
