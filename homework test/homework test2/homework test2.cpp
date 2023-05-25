// homework test2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

const int LineCount = 40;

int StringCount(const char* _Arr)
{
	// 위쪽 예제코드를 참고하세요
	int ChCount = 0;
	while (_Arr[ChCount])
	{
		++ChCount;
	}

	return ChCount;
}

class Player
{
public:
	void StatusRender()
	{
		int Count = 0;

		Count = StringCount(Name);

		// 40개로 맞춰오세요.

		// 줄바꿈이 안되고 있습니다.
		printf_s("%s", Name);

		for (size_t i = 0; i < LineCount - Count; i++)
		{
			printf_s("-");
		}
		printf_s("\n");

		printf_s("공격력 : %d\n", Att);
		printf_s("체  력 : %d\n", Hp);
		for (size_t i = 0; i < LineCount; i++)
		{
			printf_s("-");
		}
		printf_s("\n");

	}

	void DamagePrint(const char* const _AttName, int _Att)
	{
		printf_s("%s가 %s를 공격했습니다.\n", _AttName, Name);
		printf_s("%s는 %d의 데미지를 입었습니다.\n", Name, _Att);
	}

	void Damage(int _Att)
	{
		Hp -= _Att;
	}

	// 
	const char* GetName()
	{
		return Name;
	}

	int GetAtt()
	{
		return Att;
	}

	bool IsDeath()
	{
		return Hp <= 0;
	}


private:
	// 캡슐화
	char Name[40] = "Player";
	int Att = 10;
	int Hp = 100;
};

class Monster
{
	// c++에서는 함수에도 그걸 만든 프로그래머의 의도를 부여할수가 있습니다.

public:
	//void LvUp() 
	//{
	//	Att += 10;
	//}

	void StatusRender()
	{
		int Count = 0;

		Count = StringCount(Name);

		// 40개로 맞춰오세요.

		// 줄바꿈이 안되고 있습니다.
		printf_s("%s", Name);

		for (size_t i = 0; i < LineCount - Count; i++)
		{
			printf_s("-");
		}
		printf_s("\n");

		printf_s("공격력 : %d\n", Att);
		printf_s("체  력 : %d\n", Hp);
		for (size_t i = 0; i < LineCount; i++)
		{
			printf_s("-");
		}

		printf_s("\n");

	}

	void DamagePrint(const char* const _AttName, int _Att)
	{
		printf_s("%s가 %s를 공격했습니다.\n", _AttName, Name);
		printf_s("%s는 %d의 데미지를 입었습니다.\n", Name, _Att);
	}

	void Damage(int _Att)
	{
		Hp -= _Att;
	}

	const char* GetName()
	{
		return Name;
	}

	int GetAtt()
	{
		return Att;
	}

	bool IsDeath()
	{
		return Hp <= 0;
	}

private:
	// 캡슐화
	char Name[40] = "Monster";
	int Att = 10;
	int Hp = 100;
};

class FightZone
{
public:
	void Fight(Player& NewPlayer, Monster& NewMonster)
	{
		while (true)
		{
			system("cls");

			// 한번에 함수로 만든것이고
			NewPlayer.StatusRender();
			NewMonster.StatusRender();
			_getch();

			system("cls");
			NewMonster.Damage(NewPlayer.GetAtt());
			NewPlayer.StatusRender();
			NewMonster.StatusRender();
			NewMonster.DamagePrint(NewPlayer.GetName(), NewPlayer.GetAtt());
			_getch();

			if (true == NewMonster.IsDeath())
			{
				printf_s("%s가 죽었습니다.\n", NewMonster.GetName());
				printf_s("%s의 승리입니다.\n", NewPlayer.GetName());
				_getch();
				return;
			}

			system("cls");
			NewPlayer.Damage(NewMonster.GetAtt());
			NewPlayer.StatusRender();
			NewMonster.StatusRender();
			NewMonster.DamagePrint(NewPlayer.GetName(), NewPlayer.GetAtt());
			NewPlayer.DamagePrint(NewMonster.GetName(), NewMonster.GetAtt());
			_getch();

			if (true == NewPlayer.IsDeath())
			{
				printf_s("%s가 죽었습니다.\n", NewPlayer.GetName());
				printf_s("%s의 승리입니다.\n", NewMonster.GetName());
				_getch();
				return;
			}
		}
	}
};

// 문법은 왜 발전했다? 인간이 코드를 덜치기 위해서 발전했습니다.
int main()
{
	// 객체지향이라고 한다.
	Player NewPlayer;
	Monster NewMonster;

	FightZone FZone;
	FZone.Fight(NewPlayer, NewMonster);

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
