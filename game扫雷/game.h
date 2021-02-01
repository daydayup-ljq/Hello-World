#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);//初始化棋盘
void DisplayBoard(char board[ROWS][COLS], int row,int col);//展示棋盘
void SetMine(char board[ROWS][COLS], int row, int col);//设置雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);//扫描雷
