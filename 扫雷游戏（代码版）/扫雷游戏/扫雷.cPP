#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
 
void game()
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	displayboard(show, ROW, COL);
	displayboard(mine, ROW, COL);
	set_boom(mine,ROW,COL);
	displayboard(show, ROW, COL);
	displayboard(mine, ROW, COL);
	find_mine(mine, show, ROW, COL);
	

}

void meau()
{
	printf("************************************\n");
	printf("*********    1.开始游戏   **********\n");
	printf("*********    0.退出游戏   **********\n");
	printf("************************************\n");
}

void test()
{

	int input = 0;
	meau();
	srand((unsigned int)time(NULL));
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("输入有误，请重新选择\n");
			break;
		}
		if(input !=0)
		printf("游戏结束，请问是否再来一盘(1/0):>");

	} while(input);

	printf("退出游戏成功，按任意键返回\n");
}


int main()
{
	test();
	return 0;
}