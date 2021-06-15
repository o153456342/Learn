#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void meau()
{
	printf("**********************************\n");
	printf("******1.开始游戏  0.退出游戏******\n");
	printf("**********************************\n");
}

#include <stdio.h>
void game()
{
	char board[ROW][COL] = { 0 };
	int count=0;
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
			playermove(board, ROW, COL);
			system("cls");
			Displayboard(board, ROW, COL);
			count++;
			is_win(board, ROW, COL);
			if (is_win(board, ROW, COL) != 'C' || count == ROW * COL)
			{
				break;
			}
			computermove(board, ROW, COL);
			system("cls");
			Displayboard(board, ROW, COL);
			count++;
			is_win(board, ROW, COL);
			if (is_win(board, ROW, COL) != 'C' || count == ROW * COL)
			{
				break;
			}
	}
	if (is_win(board, ROW, COL) == '*')
	{
		printf("恭喜你获得胜利！\n");
	}
	else if (is_win(board, ROW, COL) == '#')
	{
		printf("很遗憾，你输了TT\n");
	}
	else if (count == ROW * COL && is_win(board, ROW, COL) != '*' && is_win(board, ROW, COL) != '#')
	{
		printf("平局\n");
	}
	
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	meau();
	printf("请选择:>");
	do
	{
		int i = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			system("cls");
			game();
			printf("请问是否再来一盘（1/0）:>");
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入:>");
			break;
		}
	} while (input!=0);
	if (input == 0)
	{
		printf("退出成功，按任意键返回\n");
	}
}

int main()
{
	test();
	return 0;
}