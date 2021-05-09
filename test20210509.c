#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>
#include<malloc.h>
#define MAXLEN 100
typedef struct TNode
{
	char data;
	struct TNode *lchild;
	struct TNode *rchild;

}BN,*BL;


int IsEmpty(BL* t) {
	if (*t == NULL)
		return 1;
	else
		return 0;
}

 createBiTree(BL *t)
{
	char x,temp;

    scanf("%c", &x);
	temp = getchar();
	if (x == '*')
	{
		*t = NULL;
	}
	else
	{
		(*t) = (BN*)malloc(sizeof(BN));
		(*t)->data = x;
      printf("请输入%c的左子节点\n",x);
		createBiTree(&((*t)->lchild));
      printf("请输入%c的右子节点\n",x);
	    createBiTree(&((*t)->rchild));
	}

}

void  preOrder(BL* t)//先序遍历
{
	if ((*t) == NULL)
	{
		return;
	}
	printf("%c  ", (*t)->data);
	preOrder(&((*t)->lchild));
	preOrder(&((*t)->rchild));
}
void InOrder(BL* t)
{
	if ((*t) == NULL)
	{
		return;
	}
	InOrder(&((*t)->lchild));
	printf("%c  ", (*t)->data);
	InOrder(&((*t)->rchild));
}

void PostOrder(BL* t)
{
	if ((*t)==NULL)
	{
		return 0;
		
	}
	PostOrder(&((*t)->lchild));
	PostOrder(&((*t)->rchild));
	printf("%c  ", (*t)->data);
}

void Order(BL t)
{
	int front = 0;
	int rear = 0;
	BL BQ[MAXLEN];
	BL temp;
	if (!IsEmpty(&t))
	{
		BQ[rear++] = t;

		while (front != rear)
		{
			temp = BQ[front++];
			if (!IsEmpty(&(temp->lchild)))
				BQ[rear++] = temp->lchild;

			if (!IsEmpty(&(temp->rchild)))
				BQ[rear++] = temp->rchild;

			printf("%c  ", temp->data);
		}
	}
}
int count1(BL *t)
{
	static int num = 0;
	if ((*t) == NULL)
	{
		return 0;
	}
	else
	{
		if (((*t)->lchild) == NULL && ((*t)->rchild) == NULL)
		{
			num++;
		}
		count1(&((*t)->lchild));
		count1(&((*t)->rchild));
	}
	return num;
}

int count2(BL* t)
{
	static int num2;
	if ((*t) == NULL)
		return 0;
	
		else if (((*t)->lchild) != NULL && ((*t)->rchild) != NULL)
		{
			num2++;
		}
		count1(&((*t)->lchild));
		count1(&((*t)->rchild));

	 return  num2;
		
}
void main()
{
	//AB**CD**E**
	int num1,num2,num3;
	BL T;
	printf("请输入根结点，符号*表示为空:\n");
	createBiTree(&T);
	printf("先序遍历二叉树:\n");
	preOrder(&T);
	printf("\n");
	printf("中序遍历二叉树:\n");
	InOrder(&T);
	printf("\n");
	printf("后序遍历二叉树:\n");
	PostOrder(&T);
	printf("\n");
	printf("层次遍历二叉树:\n");
	Order(T);
	printf("\n");
	num1 = count1(&T);
	printf("叶结点个数为:%d", num1);
	printf("\n");
	num2 = count2(&T);
	num3 = num1 + num2+1;
	printf("总结点个数为:%d", num3);
}

