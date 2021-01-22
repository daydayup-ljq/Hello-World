#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum（1729），则应该返回1+7+2+9，和是19
//输入：1729，输入：19
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

////n的k次方
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

//结构体
//typedef struct/*结构体关键字*/ Student/*结构体标签*/
//{
//	//描述一个学生的方法—一些数据
//	//名字，年龄，电话，性别
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//	//这五个叫成员变量
//
//}STU;/*s1,s2,s3;//三个全局的结构体变量*/
//
//int main()
//{
//	STU s1 = { "sundany",18,"12345678912","male" };
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.name);
//	struct Student s;
//	return 0;
//}

//用结构体调用结构体
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