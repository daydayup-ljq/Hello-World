#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct person//person-�ṹ����
{
	char name[20];
	int age;
	char sex;
}Person;

//int main()
//{
//	//����
//	//int a;
//	//char ch;
//	//�൱�����ڴ��п�����һ���ռ乩ʹ��
//	//�������Ͳ�ͬ���ٲ�ͬ�ռ�
//	//ÿ���ֽڶ��е�ַ�Ƚ��Ѽ������ñ�����������
//	//int* p;
//	//char* p;
//	//Ҳ���ڴ��￪����һ���ռ�
//	//��Сֻ���ݼ����ƽ̨��С���жϣ�32/64��
//	//ֻ��ŵ�ַ
//
//	//p = &a;
//	//a = 4;
//	//printf("%d\n", a);
//	//printf("%d\n", *p);
//
//	/*int* p2;*/
//	//*p2 = 4; error��ִ��
//
//
//	//�ṹ��
//	char name[20];
//	int age;
//	char sex;
//	//����̫��
//
//	struct person per;//struct person�ṹ��������
//	per.age = 18;//��.��ֵ
//	per.sex = 'f';
//	//per.name = "leilei";error
//	//name �Ǹ����飬�����������ǳ����������Է�����ֵ����������
//	strcpy(per.name, "leilei");
//	printf("%d\n", sizeof(per));//�ṹ��Ĵ�С������ֱ����
//	Person per2;
//	per2.age = 20;
//
//	Person s[3];
//	int a[3];
//	s[0].age = 20;
//	s[1].age = 18;
//	s[2].age = 24;
//
//	Person* p;
//
//	p = &per2;//��һ����Ա�ĵ�ַ��ֵ��p
//	//���ҿ�����*p��ʾper
//	(*p).age = 20;
//	p->age = 60;
//	strcpy(p->name, "������");
//	printf("%s\n", p->name);
//}


//void swap(int m, int n)//��ֵ���Ǵ�ַ��
//{
//	int t;
//	printf("m=%d,n=%d\n", m, n);
//	t = m;
//	m = n;
//	n = t;
//	printf("m=%d,n=%d\n", m, n);
//}

void swap2(int* m, int* n)
{
	int t;
	t = *m;
	*m = *n;
	*n = t;
}

void setAge(Person per1, int n)
{
	per1.age = n;

}

void setAge2(Person *p, int n)
{
	p->age = n;
}
void main()
{
	int a = 3;
	int b = 4;
	//printf("a=%d,b=%d\n", a, b);
	//swap(a, b);
	//printf("a=%d,b=%d\n", a, b);
	swap2(&a, &b);
	printf("a=%d,b=%d\n", a, b);

	Person per2;
	//setAge(per2, 20);

	setAge2(&per2, 200);
	printf("per2.age=%d\n", per2.age);
}