#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;
//	printf(" a=%d b=%d c=%d d=%d", a, b, c, d);*/
//	// 2,3,3,5
//	//i为1，全真为真
//	//程序输出的结果是什么
//	printf("\n");
//	i = a++ || ++b || d++;
//	//2,2,3,4
//	printf(" a=%d b=%d c=%d d=%d", a, b, c, d);
//	//a++，a先使用后++，a为1是真，在或运算符里一个为真
//	//i就为真，后面的运算不进行
//	return 0;
//}

//int main()
//{
//	int c = 10;
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	b = (a > 5 ? b:c);
//	//三目运算符
//	//a大于五吗？如果是，b的值赋值给b，反之c的值赋值给b
//	printf("%d\n", b);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age ;
//	char id[20];
//
//};
//int main()
//{
//	int a = 10;
//	//使用了struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",20,"20191026135" };
//	struct Stu *p = &s1;
//
//	printf("%d\n",p->age);
//	//结构体指针->结构名
//	printf("%d\n",(*p).age);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//结构体变量.成员名
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//一个整数，32个bit 位
//	//00000000000000000000000000000011
//	//00000011 -a
//	//char 只能储存一个字符，要发生截断
//	char b = 127;
//	//01111111 -b
//	char c = a + b;
//	//a and b 如何相加
//	//0000000000000000000000000000000011
//	//0000000000000000000000000001111111
//	//0000000000000000000000000010000010
//	//char 只能存储8个bit位
//	//10000010 -c
//    //1111111111111111111111111110000010 -补码
//	//1111111111111111111111111110000001 -反码
//	//1000000000000000000000000001111110 -原码
//	// -126
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;//截断，补位后，不相等
//	short b = 0xb6000;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb6000)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c)); //1
//	printf("%u\n", sizeof(+c));//4
//	//c只要参与表达式运算，就会发生整形提升
//	//表达式+c就会发生提升，所以sizeof（+c）是4个字节
//	//（-c）同理
//	printf("%u\n", sizeof(!c));//1
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	//指针类型决定了指针的步长
//	//指针+几就是跳几个字节
//	//int *p;p+1-->4
//	//char *p;p+1-->1
//	//double *p;p+1-->8
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		//char* p不可用，循环十次只增加10个字节
//		//需要40个字节
//	}
//
//	return 0;
//}

//野指针
int main()
{
	//int a;局部变量不初始化，默认是随机值
	//int *p局部的指针变量，就被初始化随机值

	return 0;
}