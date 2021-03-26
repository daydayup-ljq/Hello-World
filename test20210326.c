#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct linknode
{

	int data;
	struct linknode* next;
}LinkNode;

LinkNode* createLinkList()
{
	LinkNode* head, * p, * t;
	int x;
	head = NULL;
	p = head;
	printf("请输入数据，以-1结束");
	scanf("%d", &x);
	while (x != -1)
	{
		t = (LinkNode*)malloc(sizeof(LinkNode));
		t->data = x;
		t->next = NULL;
		if (head == NULL)
			head = t;
		else
			p->next = t;
		p = t;
		scanf("%d", &x);
	}
	return head;
}

void deleteList(LinkNode* h, int x)//x是要删除的元素
{
	LinkNode* p, * q;
	p = h;
	q = h;
	if (p->next == NULL)
	{
		printf("空表无法删除元素");
	}
	else
		while (p != NULL && p->data != x)
		{
			q = p;
			p = p->next;
		}
	if (p != NULL)
	{
		q->next = p->next;
		free(p);

	}
	else
		printf("找不到该元素");
	}


void showLinkList(LinkNode* h)
{
	LinkNode* p = h;
	while (p != NULL)
	{
		printf("%d", p->data);
		p = p->next;
	}
}
void main()
{
	LinkNode* L = createLinkList();
	showLinkList(L);
	printf("\n");
	deleteList(L, 4);
	showLinkList(L);

}