#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand()%row+1;//��һ������ģ�ŵĻ��õ���һ����0-8������
		int y = rand()%col+1;//rand����ʹ��֮ǰ��Ҫ����srand ����
		if (board[x][y] == '0')
		{
			board[x][y] = '1';//set a boom
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	    return mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] - 8 * '0';//������Χ�м�����
		
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	printf("�������Ų��׵�����\n");
	
	while (win<row*col-EASY_COUNT)
	{
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			if (mine[x][y] == '1')
			{
				printf("���ź����������\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//������
			{
				//ͳ�ƣ�x,y����Χ�м�����
				int count = get_mine_count(mine,x,y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
				
			}

		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("YOU ARE WIN\n");
		DisplayBoard(mine, row, col);
	}
}