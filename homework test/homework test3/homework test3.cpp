// Array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// typedef int DataType; == using DataType = int; 

// using DataType = int;

// #include "Player.h"
// 특화된 클래스 애초에 템플릿이어야할 이유가 없는데 

// 배열을 직접 만들어서 사용하지 않는다.

template<typename DataType>
class HArray
{
public:
    HArray()
    {

    }

    HArray(size_t _Size)
    {
        Resize(_Size);
    }

    HArray(const HArray& _Other)
    {
        //100번지     100번지
        // ArrValue = _Other.ArrValue;

        if (0 >= _Other.SizeValue)
        {
            return;
        }

        Resize(_Other.SizeValue);
        Copy(_Other);
    }

    DataType& operator[](size_t _Index) const
    {
        return ArrValue[_Index];
    }

    size_t Size() const
    {
        return SizeValue;
    }

    // 배열의 크기를 할당하는 기능입니다.
    void Resize(size_t _Value)
    {
        SizeValue = _Value;

        // new와 delete 혹은 delete[]는 한쌍이어야 한다.
        // 이 습관을 가지지 못하면 보통 큰실수를 하게 됩니다.

        // 포인트는 그냥 8바이트 정수일 뿐이야
        // 오른쪽부터 왼쪽으로 읽어야 합니다.
        ArrValue = new DataType[_Value];
    }

    void Copy(const HArray& _Other)
    {
        // 상대가 100개를 가진 배열
        // 나는 10개만 가졌다.

        // 이럴대 쓸만한 연산자가 있는데.

        size_t SmallSize = Size() <= _Other.Size() ? Size() : _Other.Size();

        for (size_t i = 0; i < SmallSize; i++)
        {
            ArrValue[i] = _Other[i];
        }
    }

    void Clear()
    {
        // 안전한 삭제라는것을 해줘야 한다.
        // 보통 누구나 safe_delete방식을 사용하는데

        // 다 사용한것은 nullptr로 만들어줘야 한다.
        if (nullptr != ArrValue)
        {
            delete[] ArrValue;
            ArrValue = nullptr;
        }

    }

    ~HArray()
    {
        Clear();
    }

private:
    size_t    SizeValue = 0;
    DataType* ArrValue = nullptr;
};

int Value = 0;

int* FunctionPtr()
{
    return &Value;
}

int& FunctionRef()
{
    return Value;
}

// 캐쉬아이템
// 아이템
// 장비아이템


class Inventory
{
    // 캐쉬아이템 ArrItem[100];
};

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


    {
        // 전역변수 Value를 고친거다.
        // 
        int* Test = FunctionPtr();
        *Test = 20;

        FunctionRef() = 1000;

        Value;

        int a = 0;
    }


    {
        int Arr0[10];
        // int Arr1[10];

        for (int i = 0; i < 10; i++)
        {
            // 이게 왜 되는지 이해해야 한다.
            // 이게 이해가 안된다면 레퍼런스가 뭔지 이해를 못한것.
            // Arr0[i] = i;
            Arr0[i] = i;
        }
    }



    // 내가 만든 자료형
    // Arr0 = Arr1;

    // 불편하죠?
    // => 그런데 나는 객체지향을 하고 있고 클래스를 사용할줄 알아
    // 클래스 => 뭐든지 될수 있다. 내가 만들실력만 된다면.

    // 불편한 배열 말고
    // C++만든 사람들이 만든 배열과 뭐 여러가지 편의 기능들이 있다.
    // 그걸 std라고 하고
    // 그중에서 템플릿이라는 문법을 사용하는것을 stl이라고 합니다.
    // 자료구조만을 통칭해서 stl이라고 하는것은 아니다.
    // stl은 템플릿을 사용한 std 전체를 가리킵티다.
    // 템플릿은 나중에 배워

    // 소멸자 

    {
        HArray<int> Arr0 = HArray<int>(5);

        // 20개의 int를 할당할 겁니다.
        // Arr0.Resize(5);
        // Arr0[0] = 20;
        // Arr0.operator[](0) = 20;

        // Arr0 = Arr1;

        for (int i = 0; i < Arr0.Size(); i++)
        {
            Arr0[i] = i;
        }

        // 이게 오늘의 숙제입니다.
        // 용어 디폴트 복사 생성자.
        HArray<int> Arr1 = HArray<int>(Arr0);

        // 이걸 해결해오세요.
        // 복사 생성자와 완전히 동일한 에러기 때문
        /*HArray Arr1;
        Arr1 = Arr0;*/

        for (size_t i = 0; i < Arr1.Size(); i++)
        {
            std::cout << Arr1[i] << std::endl;
        }

        // Arr0.Clear();

        // Arr0 = Arr1;
    }

    {
        int Value = 0;
    }

    {
        // HArray<Bullet>;
        //Var V1 = "aaaaa";
        //Var V1 = 1;
    }
}
