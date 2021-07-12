#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[row][col], int Row, int Col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < Row; i++)
	{
		for (j = 0; j < Col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[row][col], int Row, int Col)
{
	int i = 0;
	for (i = 0; i < Row; i++)
	{
		int j = 0;
		for (j = 0; j < Col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < Col - 1)
				printf("|");

		}

			printf("\n");

			if (i < Row - 1)
			{
				for (j = 0; j < Col; j++)
				{
					printf("---");
					if (j < Col - 1)
					{
						printf("|");

					}
					
				}
				printf("\n");
			}
		}
	}

void playermove(char board[row][col], int Row, int Col)
{
	int x = 0;
	int y = 0;
	printf("请输入下标->横，纵\n");

	while (1)
	{
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= Row && y >= 1 && y <= Col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占有\n");
			}
		}
	}
}

void computermove(char board[row][col], int Row, int Col)
{
	int x = 0;
	int y = 0;
	printf("电脑走; \n");
	while (1)
	{
		x = rand() % Row;
		y = rand() % Col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}

}

int isfull(char board[row][col], int Row, int Col)
{
	int j = 0;
	int i = 0;
	for (i = 0; i < Row; i++)
	{
		for (j = 0; j < Col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
 IsWin(char board[row][col], int Row, int Col)
{
	int i = 0;
	//横三行
	for (i = 0; i < Row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	//竖三列
	for (i = 0; i < Col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (1 == isfull(board, Row, Col))
	{
		return 'Q';
	}
	return 'C';
}
