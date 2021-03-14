#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10
//typedef struct Student
//{
//	char name[20];
//	int age;
//	char sex;
//	struct Student* next;
//}student;
//int main()
//{
//	student stu,stu1,stu2,stu3;
//	student* p1 = &stu;//在栈上，随着方法的结束消失
//	student* p = NULL;
//	student* p=(student*)malloc(sizeof(student));//在堆上面，生命期长
//	//没名字，利于反复循环
//	//free();在堆上面不会自己回收
//	stu.age = 18;
//	p1->age = 20;
//	strcpy(p->name ,"李四");
//	p->sex = "famle";
//	stu.next = &stu1;
//	stu1.next = &stu2;
//	stu2.next = &stu3;
//}

typedef struct seqNode
{

	int date[MAX];
	int last;
}SeqList;

void initList(SeqList *S)
{
	S->last = -1;
}

SeqList* creatSeqList()
{
	SeqList* p = (SeqList*)malloc(sizeof(SeqList));
	p->last = -1;
	return p;
}

void creatSeqList2()
{

}
int main()
{
	SeqList seq;
	initList(&seq);
	//seq.last = -1;
	SeqList *s=creatSeqList();
}