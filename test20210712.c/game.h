#pragma once
#define row 3
#define col 3
#include<stdio.h>
#include<stdlib.h>

void InitBoard(char board[row][col], int Row, int Col);
void displayboard(char board[row][col], int Row, int Col);
void playermove(char board[row][col], int Row, int Col);
void computermove(char board[row][col], int Row, int Col);
//��������������Ϸ��״̬
//���Ӯ '*'
//����Ӯ '#'
//ƽ��   'Q'
//˭��ûӮ����Ϸ���� 'C'
IsWin(char board[row][col], int Row, int Col);