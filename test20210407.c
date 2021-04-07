#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#define MAXLEN 10
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct seqlist
{
	int data[MAXLEN];
	int last;
}Seqlist;

//void initList(Seqlist *p)
//{
//	p->last = -1;
//}
Seqlist*  createSeqList()
{
	Seqlist* p = (Seqlist*)malloc(sizeof(Seqlist));
	p->last = -1;
	return p;
}

void insertSeqlist(Seqlist* p,int x,int i)//插什么，插在哪
{
	int j;
	if (p->last == MAXLEN - 1)
	{
		printf("表满无法插入\n");
	}

	if (i <= 0 || i > p->last + 2)
	{
		printf("插入错误\n");
	}
	for (j = p->last; j >= i-1; j--)
	{
		p->data[j + 1] = p->data[j];
	}
	p->data[i - 1] = x;
	p->last++;
}

void showList(Seqlist* p)
{
	int i;
	printf("表为\n");
	for (i = 0; i <= p->last; i++)
	{
		printf("%d ", p->data[i]);
	}
	printf("\n");
}
	void main()
{
		/*Seqlist sq;
		initList(&sq);*/
		

		Seqlist *q=createSeqList();
		insertSeqlist(q,10,1);
		insertSeqlist(q,11,2);
		insertSeqlist(q,12,3);
		insertSeqlist(q,13,4);
		showList(q);
}