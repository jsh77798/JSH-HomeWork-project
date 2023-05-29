﻿// HomeWork0526.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
// 1. 파일 정리
// 2. 10개의 장애물 배치 class Wall
//    Player 
//    Wall 
//    같은 클래스를 상속받아서 만들어져야 한다.
// 
// 3. 장애물을 통과 못하게 하기.

// 4. 플레이어가 어떠한 키를 누르면 플레이어 위치에서
//    총알 1발이 발사되게 만드세요.

// 5. 그 총알 1발에 벽이 닿으면 벽이 없어지게 만드세요.

// 숙제 플레이어가 화면 바깥으로 나가지 못하게 해라.

#include "ConsoleScreen.h"
#include "Player.h"


int main()
{
    ConsoleScreen Screen;
    Screen.Init('*');

    Player MainPlayer;
    // 클래스의경우에는 
    MainPlayer.SetPos({ 10, 5 });

    int Count = 0;

    //Wall ArrWall[10];
    //Wall* PtrWall = ArrWall;

    while (true)
    {
        Screen.Clear();
        Screen.SetPixel(MainPlayer.GetPos(), 'a');


        for (size_t i = 0; i < 10; i++)
        {
            // int4 WallPos = PtrWall.GetPos();
            // int4 WallPos = ArrWall[i].GetPos();
            int4 WallPos = { 5 + Count, i };
            Screen.SetPixel(WallPos, '0');
        }
        // ++Count;

        Screen.Print();

        if (0 != _kbhit())
        {
            MainPlayer.Input(&Screen);

            // 1000이면 1초입니다.
        }
        // 1초 동안 정지합니다.
        Sleep(200);
    }


}
