#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("1.������Ϸ 0.�˳���Ϸ");
}

void game()
{
	int ret = 0;
	//�����ҵ��Դ�ŵ���Ϣ
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
		printf("��Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("������\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
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
		printf("������ѡ��:\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			//system("pause");
			system("cls");
			game();
			break;

		case 0:
			printf("���Ҫ�˳���?����Yȷ���˳�������N���ز˵�\n");
			scanf("%d", &t);
			if (t == 'Y')
			{
				printf("��ӭ�´�ʹ��\n");
				break;
			}
			else if(t=='N')
			{
				menu();
			}

		default:
			printf("������ѡ��\n");
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
