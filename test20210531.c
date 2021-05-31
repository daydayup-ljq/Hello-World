#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.尾插法建立带头结点的单链表
//2.求单链表表长
//3.求表中元素X
#define datetype int
typedef struct LinkNode
{
	datetype data;
	struct LinkNode *next;
}linknode;


linknode* createlinklist3()
{
	linknode* p = NULL;//临时指针
	linknode* s = NULL;
	linknode* h = NULL;
	datetype x;
	h=s= (linknode*)malloc(sizeof(linknode));
	s->next = NULL;
	scanf("%d", &x);
	while (x!=0)
	{
		p = (linknode*)malloc(sizeof(linknode));
		p->data = x;
		p->next = NULL;
		s->next = p;//s指向p的空间
		s = p;//s变成p的尾巴
		scanf("%d", &x);
	}
	return h;
}

int len(linknode *h)
{
	int i = 0;
	linknode* p = h->next;
	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return i;
}

//search()

void show(linknode *h)
{
	linknode* p=NULL;
	if (h != NULL)
	{
		p = h->next;
		printf("linklist is :\n");

		while (p != NULL)
		{
			printf("%d\t", p->data);
			p=p->next;
		}
	}
	else
		printf("list is null\n");

	
}
int main()
{
	linknode *H=createlinklist3();
	show(H);
	printf("\n表长为：%d",len(H));
	//search(H);
}