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
//	LinkNode* h = NULL;//头指针
//	LinkNode* s = NULL;//尾指针,时刻指向尾结点
//	int x;
//	scanf("%d", &x);
//	while (x!=0)
//	{
//		 p = (LinkNode*)malloc(sizeof(LinkNode));
//		p->data = x;
//		p->next = NULL;
//
//		if (h == NULL)
//			h = p;//如果单链表为空处理头
//		else
//		s->next = p;//把链表连接起来
//		s = p;//指向新增节点
//		scanf("%d", &x);//循环起来
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

LinkNode* cerateLinkList3()//省的判断头指针是否为空
{
	LinkNode* h = NULL;
	LinkNode* s = NULL;
	LinkNode* p = NULL;

	int x;
	h=s=(LinkNode*)malloc(sizeof(LinkNode));//头尾都指向头结点
	s->next = NULL;
	scanf("%d", &x);
	while (x != 0)
	{
		p= (LinkNode*)malloc(sizeof(LinkNode));
		p->data = x;
		p->next = NULL;
		s->next = p;//当前指针可以指向下一个点,链表链接
		//s 的next 域就是上一个结点的next域
		s = p;//s 的next域变为当前结点的next域
		scanf("%d", &x);

	}
	return h;
}

void showlist(LinkNode* h)
{
	LinkNode* p = NULL;//初始化
	if (h != NULL)//头指针不为空才可能出现头指针的next
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

//int Listlens(LinkNode* h)//链表求表长用循环累加求表长
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

LinkNode * search(LinkNode *h,int i)//找第几个
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
		printf("没找到");
	

}


