#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.β�巨������ͷ���ĵ�����
//2.�������
//3.�����Ԫ��X
#define datetype int
typedef struct LinkNode
{
	datetype data;
	struct LinkNode* next;
}linknode;


linknode* createlinklist3()
{
	linknode* p = NULL;//��ʱָ��
	linknode* s = NULL;
	linknode* h = NULL;
	datetype x;
	h = s = (linknode*)malloc(sizeof(linknode));
	s->next = NULL;
	scanf("%d", &x);
	while (x != 0)
	{
		p = (linknode*)malloc(sizeof(linknode));
		p->data = x;
		p->next = NULL;
		s->next = p;//sָ��p�Ŀռ�
		s = p;//s���p��β��
		scanf("%d", &x);
	}
	return h;
}

int len(linknode* h)
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

int  search(linknode* h, int x)
{
	linknode* p = h->next;//�ƹ�ͷ���ð�
	int i = 0;
	while (p != NULL && p->data != x)
	{
		p = p->next;
		i++;
	}
		

	return i;
}

void show(linknode* h)
{
	linknode* p = NULL;
	if (h != NULL)
	{
		p = h->next;
		printf("linklist is :\n");

		while (p != NULL)
		{
			printf("%d\t", p->data);
			p = p->next;
		}
	}
	else
		printf("list is null\n");


}
int main()
{
	int i;
	linknode* H = createlinklist3();
	show(H);
	printf("\n��Ϊ��%d\n", len(H));
	i = search(H, 42);
	if (i != NULL)
	{
		printf("�ҵ����±���:%d\n", i);
	}
	else
	{
		printf("û�ҵ�\n");
	}
}