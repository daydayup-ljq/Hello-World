#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
//game.h  文件
//#pragma once
//#define ROW 3
//#define COL 3
//void InitBoard(char board[ROW][COL], int row, int col);
//void DisplayBoard(char board[ROW][COL], int row, int col);

//game.c  文件
//#define _CRT_SECURE_NO_WORINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include "game.h"
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1.打印一行数据
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf(" | ");
//		}
//		//2.打印分割线
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//}


void menu()
{
	printf("*********************\n");
	printf("****1.play 0.exit****\n");
	printf("*********************\n");
}


void game()
{
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋 \n");
			break;
		case 0:
			printf("退出游戏 \n");
			break;
		default:
			printf("请重新选择：\n");
			break;
		}
	} while (input);
}

