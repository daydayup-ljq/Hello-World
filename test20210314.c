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
//	student* p1 = &stu;//��ջ�ϣ����ŷ����Ľ�����ʧ
//	student* p = NULL;
//	student* p=(student*)malloc(sizeof(student));//�ڶ����棬�����ڳ�
//	//û���֣����ڷ���ѭ��
//	//free();�ڶ����治���Լ�����
//	stu.age = 18;
//	p1->age = 20;
//	strcpy(p->name ,"����");
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