#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
//带头节点链表
#include <stdio.h>

typedef struct linknode
{
	int data;
	struct linknode* next;
}LinkNode;


LinkNode* createLinkList3()
{
	LinkNode* h = NULL;
	LinkNode* s = NULL;
	LinkNode* p = NULL;
	int x;

	s=h = (LinkNode*)malloc(sizeof(LinkNode));
	s->next = NULL;

	scanf("%d", &x);
	while (x != 0)
	{
		p= (LinkNode*)malloc(sizeof(LinkNode));
		p->data = x;
		p->next = NULL;
		s->next = p;
	}
	return h;
}

void showList(LinkNode* h)
{
	LinkNode* p = NULL;
	if (h != NULL)
	{
		p = h->next;
		printf("LinkList is :\n");
		while (p != NULL)
		{
			printf("%d ", p->data);
			p = p->next;
		}
		printf("\n");
	}
	else
		printf("list is null\n");
}
void main()
{
	LinkNode* H = createLinkList3();
	showList(H);

}