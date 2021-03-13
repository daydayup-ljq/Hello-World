#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//typedef struct
//{
//	int data[100];
//	int last;
//}SeqList;
//
//InitList(SeqList *I)
//{
//	I->last = -1;
//}
//int main()
//{
//	SeqList L;
//	InitList(&L);
//}

//typedef struct
//{
//	int data[100];
//	int last;
//}SeqList;
//
//SeqList* InitList()
//{
//	SeqList* L;
//	L = (SeqList*)malloc(sizeof(SeqList));
//	L->last = -1;
//	return L;
//}
//void main()
//{
//	SeqList* LL;
//	LL = InitList();
//}


typedef struct Person
{
	char name[1024];
	int age;
	char  sex;
}person;

//void swap(int *m, int *n)
//{
//	int t;
//	t = *m;
//	*m = *n;
//	*n = t;
//}

void setAge(person *per1, int n)
{
	per1->age = n;

}

int main()
{

	person per;
	per.age = 18;
	//per.name = "lisi";error
	strcpy(per.name,"lisi");
	per.sex = "famale";
	person *p = &per;
	p->age=18;

	int a = 3, b = 4;
	//printf("a=%d,b=%d\n", a, b);
	//swap(&a, &b);
	//printf("a=%d,b=%d\n", a, b);

	//printf("%d\n", sizeof(per));
	setAge(&per, 20);
	printf("%d,",per.age);
	return 0;
}