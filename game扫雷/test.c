#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"game.h"

void menu()
{
	printf("*******扫雷小游戏******\n");
	printf("******* 1.play   ******\n");
	printf("******* 0.exit   ******\n");
	printf("***********************\n");
}
void game()
{
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//打印棋盘
	
	//DisplayBoard(mine, ROW, COL);//布置雷的棋盘
	printf("                             \n");
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//扫雷
	//DisplayBoard(mine, ROW, COL);////布置好雷的棋盘

	FindMine(mine,show,ROW,COL);//从mine获取信息放到show里面，操作范围是9*9
}

void test()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}
int main() {

	test();

	return 0;
}