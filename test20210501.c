#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include<string.h>

typedef struct linknode
{
	int data;
	struct linknode* next;
}LinkNode;

//LinkNode* createLinkList()
//{
//	LinkNode* p = NULL;
//	LinkNode* h = NULL;//ͷָ��
//	LinkNode* s = NULL;//βָ��,ʱ��ָ��β���
//	int x;
//	scanf("%d", &x);
//	while (x!=0)
//	{
//		 p = (LinkNode*)malloc(sizeof(LinkNode));
//		p->data = x;
//		p->next = NULL;
//
//		if (h == NULL)
//			h = p;//���������Ϊ�մ���ͷ
//		else
//		s->next = p;//��������������
//		s = p;//ָ�������ڵ�
//		scanf("%d", &x);//ѭ������
//	}
//	return h;
//}

//void show(LinkNode* h)
//{
//	LinkNode* p = h;
//
//	if (p == NULL)
//		printf("list is error \n");
//	while (p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}

LinkNode* cerateLinkList3()//ʡ���ж�ͷָ���Ƿ�Ϊ��
{
	LinkNode* h = NULL;
	LinkNode* s = NULL;
	LinkNode* p = NULL;

	int x;
	h=s=(LinkNode*)malloc(sizeof(LinkNode));//ͷβ��ָ��ͷ���
	s->next = NULL;
	scanf("%d", &x);
	while (x != 0)
	{
		p= (LinkNode*)malloc(sizeof(LinkNode));
		p->data = x;
		p->next = NULL;
		s->next = p;//��ǰָ�����ָ����һ����,��������
		//s ��next �������һ������next��
		s = p;//s ��next���Ϊ��ǰ����next��
		scanf("%d", &x);

	}
	return h;
}

void showlist(LinkNode* h)
{
	LinkNode* p = NULL;//��ʼ��
	if (h != NULL)//ͷָ�벻Ϊ�ղſ��ܳ���ͷָ���next
	{
		p = h->next;
		printf("linklist is :\n");

		while (p != NULL)
		{
			printf("%d ", p->data);
			p = p->next;
		}
		printf("\n");
	}
	else
		printf("error\n");
}

//int Listlens(LinkNode* h)//���������ѭ���ۼ����
//{
//	LinkNode* p = h->next;
//	int i = 0;
//	while (p != NULL);
//	{
//		i++;
//		 p->next=p;//error
//	}
//
//	return i;
//}

LinkNode * search(LinkNode *h,int i)//�ҵڼ���
{
	LinkNode* p = h;
	int count = 0;
	while (p != NULL && count < i)
	{
		p = p->next;
		count++;
	}

	return p;
}
void main()
{
	//LinkNode* H = createLinkList();
	//show(H);

	LinkNode* h3 = cerateLinkList3();
	showlist(h3);
	/*Listlens(h3);
	printf("list len is: %d", Listlens(h3));*/
	LinkNode* q=search(h3, 2);

	if (q != NULL)
	{
		printf("%d", q->data);
	}
	else
		printf("û�ҵ�");
	

}


