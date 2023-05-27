// HomeWork0525(Re Test).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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