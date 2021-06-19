#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列数
	for (j = 0; j <= col; j++)
	{
		printf("%d   ", j);
	}
	printf("\n\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d   ", i);
		for (j = 1; j <= col; j++)
		{
			if (board[i][j] == '0')
			{
				board[i][j]=how_many_mine(board, i, j)+'0';
			}
			printf("%c   ", board[i][j]);
		}
		printf("\n\n");
	}
}

void set_boom(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '#';
			count--;
		}
	}
}

int how_many_mine(char board[ROWS][COLS], int x, int y)
{
	int m = 0;
	int n = 0;
	int count = 0;
	for (m = x - 1; m <= x + 1; m++)
	{
		for (n = y - 1; n <= y + 1; n++)
		{
			if (board[m][n] == '#')
			{
				count++;
			}
		}
	}
	return count;
}

void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win<(ROW*COL-COUNT))
	{
		printf("请选择坐标:>");
		scanf("%d%d", &x, &y);
		system("cls");
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '#')
			{
				printf("不好意思，你踩中地雷了！\n");
				displayboard(mine, row, col);
				break;
			}
			else
			{
				show[x][y] = how_many_mine(mine, x, y)+'0';
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入有误，请重新输入\n");
		}

	}
	if (win == ROW * COL - COUNT)
	{
		printf("恭喜你获得胜利！\n");
		displayboard(mine, row, col);
	}
}
