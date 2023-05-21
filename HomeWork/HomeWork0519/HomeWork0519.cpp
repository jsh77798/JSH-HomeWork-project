// HomeWork0519.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//int ChCount = 0;
//while (_string[ChCount])
//{
//    ++ChCount;
//}

int ChCount(const char* const _string, char Ch)

{
    
    int Count = 0;
    const char* Text = _string;
            while (*Text !='\0')
            {
                
                if (*Text == Ch)
                {
                    ++Count;
                }
                ++Text;
            }
          
    
    // for문을 돌리는건 당연한거야.

    // Ch와 같은 문자가 몇개들어있는지 세어서 리턴해주는 함수
    return Count;
}

void TrimDelete(char* _string)
{
    char Ch = ' ';

    char* check = _string;
    const char* check2 = _string;

    while (*check2 != '\0')
    {
        if (*check2 != Ch)
        {
            *check = *check2;
            ++check;
        }
        ++check2;
    }
    *check = '\0';

}


int DigitsCount(int _Number)
{
    int Count = 0;
    
    
    while (_Number !=0)
    {
        _Number /= 10;
        ++Count;
        
    }

    return Count;
    
    
}

void StrCopy(const char* const _Left, char* _Right)
{
    int i = 0;
    while (_Left[i] != '\0')
    {
        _Right[i] = _Left[i];
            ++i;
    }

    return;
}

// 가장 어려운 숙제
void NumberToString(int _Number, char* _Right)
{
    int ch = 0;
    char* _Right = &ch;




    return;
}


int main()
{
    
    {
        // a의 개수를 구한다
        // 4가 리턴되어야 합니다.
        // 문자열의 마지막에 들어가는 0은 글자로 치지 않습니다.
        int Result = ChCount("ab aaa ccc ddd eee", 'a'); 
        std::cout << "1. a의 총개수: " << Result << "\n";
    }

    {
        char Arr[256] = "aa  b  c dd ee";

        TrimDelete(Arr);
        std::cout << "2. 정답은: " << Arr << "\n";
        // 띄어쓰기를 없애라
        // Arr "aabcddee"
        

    }

    {
        // 수의 개수를 구해라
        // 8이 리턴되게 만들어라.
        int Result = DigitsCount(12367867);
        std::cout << "3. 수의 개수: " << Result << "\n";
        int a = 0;
    }

    {
        // ArrCopyText를 왼쪽 처럼 똑같이 바꿔라
        char ArrCopyText[256] = {};

        StrCopy("aaaa bbb ccc", ArrCopyText);
        std::cout << "4. ArrCopyText== " << ArrCopyText << "\n";
        int a = 0;
    }

    {
        char Result[256] = {};
        // 아래 Result 값으로 바꿔라
        // Result = "312312";

        NumberToString(312312, Result);

        char Ch = '0';

        int Value = 7;

        char ChConvert = Value + 48;

        std::cout << "5. 정답은: " << Result << "\n";
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
