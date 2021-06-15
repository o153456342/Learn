#define ROW 3
#define COL 3

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col);