#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <graphics.h>
#include <Windows.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define COUNT 10

#define SIZE 30



void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void displayboard(char board[ROWS][COLS], int row, int col);
void set_boom(char board[ROWS][COLS], int row, int col);
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int how_many_mine(char board[ROWS][COLS], int x, int y);