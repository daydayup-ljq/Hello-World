#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮��
//���磬����DigitSum��1729������Ӧ�÷���1+7+2+9������19
//���룺1729�����룺19
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//
//	}
//	else
//	{
//		return num;
//	}
//
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

////n��k�η�
//double Pow(int n, int k)
//{
//	//n^k=n*n^(k-1)
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//
//	double ret = Pow(n,k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}

//�ṹ��
//typedef struct/*�ṹ��ؼ���*/ Student/*�ṹ���ǩ*/
//{
//	//����һ��ѧ���ķ�����һЩ����
//	//���֣����䣬�绰���Ա�
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//	//������г�Ա����
//
//}STU;/*s1,s2,s3;//����ȫ�ֵĽṹ�����*/
//
//int main()
//{
//	STU s1 = { "sundany",18,"12345678912","male" };
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.name);
//	struct Student s;
//	return 0;
//}

//�ýṹ����ýṹ��
//struct S
//{
//
//	int a;
//	char c;
//	char arr[20];
//	double d;
//
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello world\n";
//	struct T t = { "hehe",{100,"W","good morning",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}