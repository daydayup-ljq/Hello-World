#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#define MAX 10

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct seqNode
{

	int date[MAX];
	int last;
}SeqList;

void initList(SeqList* S)
{
	S->last = -1;
}

SeqList* creatSeqList()
{
	SeqList* p = (SeqList*)malloc(sizeof(SeqList));
	p->last = -1;
	return p;
}
int insertSeqList(SeqList* sq, int x,int i)//i:µÚ¼¸¸ö
{
	int j;
	if (MAX - 1 == sq->last)
	{
		printf("lift is full \n");
		return -1;

	}

	if (i <= 0 || i > sq->last + 2)
	{
		printf("i is err\n");
		return 0;
	}

	//j=-1;j>=0
	for (j = sq->last; j >= i - 1; j--)
	{
		sq->date[j + 1] = sq->date[j];
	}
	sq->date[i - 1] = x;
	sq->last++;
	return 1;
}

void showSeqList(SeqList* sq)
{
	int i;
	for (i = 0; i <= sq->last; i++)
	{
		printf("%d\n", sq->date[i]);
		printf("\n");
	}
}
int main()
{
	SeqList* s = creatSeqList();
	insertSeqList(s,10,1);
	insertSeqList(s,11,2);
	insertSeqList(s,12,3);
	showSeqList(s);
}