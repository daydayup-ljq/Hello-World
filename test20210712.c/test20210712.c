#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("1.进入游戏 0.退出游戏");
}

void game()
{
	int ret = 0;
	//存放玩家电脑存放的信息
	char board[row][col] = {' '};
	InitBoard(board, row, col);
	displayboard(board, row, col);

	while (1)
	{
		playermove(board, row, col);
		//displayboard(board, row, col);
		ret = IsWin(board, row, col);
		if (ret != 'C')
		{
			break;
		}

		computermove(board, row, col);
		system("cls");
		displayboard(board, row, col);
		ret = IsWin(board, row, col);
		if (ret != 'C')
		{
			break;
		}
}

	if (ret == '*')
	{
		printf("你赢了\n");
	}
	else if (ret == '#')
	{
		printf("你输了\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}

}




void test()
{
	int t=1;
	srand((unsigned int)time(NULL));
	int i = 1;
	while (i)
	{

		menu();
		printf("请输入选择:\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			//system("pause");
			system("cls");
			game();
			break;

		case 0:
			printf("真的要退出吗?输入Y确认退出，输入N返回菜单\n");
			scanf("%d", &t);
			if (t == 'Y')
			{
				printf("欢迎下次使用\n");
				break;
			}
			else if(t=='N')
			{
				menu();
			}

		default:
			printf("请重新选择\n");
			system("cls");
			break;
		}
	}
}


int main()
{
	test();
	return 0;
}
