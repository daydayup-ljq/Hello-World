#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"game.h"

void menu()
{
	printf("*******ɨ��С��Ϸ******\n");
	printf("******* 1.play   ******\n");
	printf("******* 0.exit   ******\n");
	printf("***********************\n");
}
void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//��ӡ����
	
	//DisplayBoard(mine, ROW, COL);//�����׵�����
	printf("                             \n");
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//ɨ��
	//DisplayBoard(mine, ROW, COL);////���ú��׵�����

	FindMine(mine,show,ROW,COL);//��mine��ȡ��Ϣ�ŵ�show���棬������Χ��9*9
}

void test()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}
int main() {

	test();

	return 0;
}