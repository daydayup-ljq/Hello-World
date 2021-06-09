#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 100

typedef struct stacknode
{
	int data;
	struct stacknode *next;
}stacknode;

typedef struct {

	stacknode* top;//���ýṹ���ס����ô��?

}Linkstack;

Linkstack * createseqstack()
{
	Linkstack* ls = (Linkstack*)malloc(sizeof(Linkstack));
	ls->top = NULL;
	return ls;
}

void push(Linkstack* ls,int x)
{
	stacknode* p = (stacknode*)malloc(sizeof(stacknode));
	p->data = x;
	p->next = ls->top;
	ls->top = p;
}

int pop(Linkstack* ls)
{
	stacknode* p = ls->top;
	int x;
	if (NULL == ls->top)
	{
		printf("ջΪ��\n");
		return 0;
	}
	else
	{
		x = p->data;
		ls->top = p->next;
		free(p);
		return x;
	}
}
void show(Linkstack* ls)
{
	stacknode* p = ls->top;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}
int main()
{
	Linkstack *LS=  createseqstack();
	push(LS, 1);
	push(LS, 2);
	push(LS, 3);
	show(LS);
	printf("\n");
	pop(LS);
	show(LS);
}