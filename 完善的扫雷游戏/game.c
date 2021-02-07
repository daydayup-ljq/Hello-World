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
	//打印列号
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
		int x = rand()%row+1;//当一个数字模九的话得到的一定是0-8的数字
		int y = rand()%col+1;//rand函数使用之前需要条用srand 函数
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
		mine[x + 1][y + 1] - 8 * '0';//计算周围有几个雷
		
}
void Extend(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{
	if (!get_mine_count(mine, x, y))
	{
		show[x][y] = '0';
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (mine[i][j] == '0' && show[i][j] == '*' && (i >= 1 && i <= ROW) && (j >= 1 && j <= COL))//如果没有被遍历，且此时检查的区域不是雷，则进入递归
				{
					Extend(show, mine, i, j);
				}
			}

		}
	}
	else if(get_mine_count(mine, x, y) == 0 && mine[x][y] == '0' && show[x][y] == '*' && (x >= 1 && x <= ROW) && (y >= 1 && y <= COL))
	{
		show[x][y] = get_mine_count(mine, x, y) + '0';
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	printf("请输入排查雷的坐标（横坐标，纵坐标）\n");
	
	while (win<row*col-EASY_COUNT)
	{
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你踩雷了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else if(show[x][y] == '*') //不是雷
			{
				Extend(show, mine, x, y);
				//统计（x,y）周围有几个雷
				int count = get_mine_count(mine,x,y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);

					win++;
				
			}

		}
		
	}
	
	if (win == row * col - EASY_COUNT)
	{
		printf("YOU ARE WIN\n");
		DisplayBoard(mine, row, col);
	}
}

