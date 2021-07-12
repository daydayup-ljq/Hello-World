#pragma once
#define row 3
#define col 3
#include<stdio.h>
#include<stdlib.h>

void InitBoard(char board[row][col], int Row, int Col);
void displayboard(char board[row][col], int Row, int Col);
void playermove(char board[row][col], int Row, int Col);
void computermove(char board[row][col], int Row, int Col);
//告诉我们四种游戏的状态
//玩家赢 '*'
//电脑赢 '#'
//平局   'Q'
//谁都没赢，游戏继续 'C'
IsWin(char board[row][col], int Row, int Col);