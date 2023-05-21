// homework test.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>







#include <iostream>
void NumberToString(int _Number, char* _Right)
{
    int index = 0;
    while (_Number != 0)
    {
        int digit = _Number % 10; // 가장 오른쪽 자릿수 추출
        _Number /= 10; // 다음 자릿수로 이동
        // 문자열에 숫자를 문자로 변환하여 저장
        *(_Right + index) = static_cast<char>(digit + '0');
        index++;
    }

    // 문자열을 역순으로 뒤집기
    int length = index;
    for (int i = 0; i < length / 2; i++)
    {
        char temp = *(_Right + i);
        *(_Right + i) = *(_Right + length - i - 1);
        *(_Right + length - i - 1) = temp;
    }

    // 문자열 끝에 null 문자('\0') 추가
    *(_Right + index) = '\0';


    return;
}

int main()
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

//앞의 코드를 활용하여 Result를 "312312" 값으로 바꾸는 코드를 만들어줘


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
