﻿// HomeWork0525.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

// 선생님 프로젝트의 HomeWork0524 프로젝트를 Player, Monster, FightZone을 헤더와 cpp 분리해라
// 헤더와 cpp를 분리해서 이곳에서 동일하게 실행되게 만들어 보세요.

#include <iostream>
#include <conio.h>
#include "Player.h"
#include "Monster.h"
#include "FightZone.h"







// 문법은 왜 발전했다? 인간이 코드를 덜치기 위해서 발전했습니다.
int main()
{
	// 객체지향이라고 한다.
	Player NewPlayer;
	Monster NewMonster;

	FightZone FZone;
	FZone.Fight(NewPlayer, NewMonster);
	
}