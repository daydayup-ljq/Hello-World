#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
//game.h  �ļ�
//#pragma once
//#define ROW 3
//#define COL 3
//void InitBoard(char board[ROW][COL], int row, int col);
//void DisplayBoard(char board[ROW][COL], int row, int col);

//game.c  �ļ�
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
//		//1.��ӡһ������
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf(" | ");
//		}
//		//2.��ӡ�ָ���
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
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������ \n");
			break;
		case 0:
			printf("�˳���Ϸ \n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
}

