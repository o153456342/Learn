#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void meau()
{
	printf("**********************************\n");
	printf("******1.��ʼ��Ϸ  0.�˳���Ϸ******\n");
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
		printf("��ϲ����ʤ����\n");
	}
	else if (is_win(board, ROW, COL) == '#')
	{
		printf("���ź���������TT\n");
	}
	else if (count == ROW * COL && is_win(board, ROW, COL) != '*' && is_win(board, ROW, COL) != '#')
	{
		printf("ƽ��\n");
	}
	
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	meau();
	printf("��ѡ��:>");
	do
	{
		int i = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			system("cls");
			game();
			printf("�����Ƿ�����һ�̣�1/0��:>");
			break;
		case 0:
			break;
		default:
			printf("�����������������:>");
			break;
		}
	} while (input!=0);
	if (input == 0)
	{
		printf("�˳��ɹ��������������\n");
	}
}

int main()
{
	test();
	return 0;
}