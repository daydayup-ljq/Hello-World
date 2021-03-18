#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#define MAX 10

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct linknode
{
	int date;
	struct linknode* next;


}Linknode;

Linknode* createLinkList()
{
	Linknode* h = NULL;
	Linknode* p = NULL;
	int x;

	scanf("%d",&x);

	while (x != 0)
	{
		p = (Linknode*)malloc(sizeof(Linknode));
		p->date = x;
		p->next = h;
		h = p;

		scanf("%d", &x);
	}
	return h;
}

void showLinkList(Linknode* h)
{
	Linknode* p = h;
	printf("LinkList is :\n");
	while (p != NULL)
	{
		printf("%d ", p->date);
		p = p->next;
	}

	printf("\n");
}
int main()
{
	Linknode* H = createLinkList();
	showLinkList(H);
	return 0;
}