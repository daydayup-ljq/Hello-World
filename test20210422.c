#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
typedef struct linknode
{
	int data;
	struct linknode* next;
}Linknode;

void show(Linknode* h)
{
	Linknode* p = h;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

Linknode*  createlinklist_tail()
{
	Linknode* h = NULL;
	Linknode* p = NULL;
	Linknode* s = NULL;
	int x;
	scanf("%d", &x);

	while (x != 0)
	{
		Linknode* p = (Linknode*)malloc(sizeof(Linknode));
		p->data = x;
		p->next = NULL;
		if (h == NULL)
			h = p;
		else
			s->next = p;
		s = p;

		scanf("%d", &x);
	}

	return h;
}
void main()
{
	Linknode* H = createlinklist_tail();
	show(H);

}