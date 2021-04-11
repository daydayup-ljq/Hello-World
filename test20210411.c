#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#define MAXLEN 10
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct linknode {
	int data/*[MAXLEN]*/;
	struct linknode* next;
}LinkNode;

//1.在头部建立单链表
LinkNode* createLinkList()
{
	LinkNode* h = NULL;
	LinkNode* p = NULL;
	int x;
	scanf("%d", &x);
	while (x != 0)
	{
		LinkNode* p = (LinkNode*)malloc(sizeof(LinkNode));
		p->data = x;
		p->next = h;
		h = p;

		scanf("%d", &x);
	}
	return h;

}

void showLinkList(LinkNode* h)
{
	LinkNode* p = h;

	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}
void main()
{
	LinkNode* h = createLinkList();
	showLinkList(h);
}
