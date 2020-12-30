#define _CRT_SECURE_NO_WORINGS
#include <stdio.h>
#include <string.h>

//#define MAX 3//define 定义的常量
//int main() {
//	int arr[] = {1,2,3,4,5};
//	printf("%c\n", arr[MAX]);
//	printf("%d\n", MAX);
//	
//}

//MAX(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main() {
//	int num1 = 20;
//	int num2 = 10;
//	int max = MAX(num1, num2);
//	printf("较大值为%d\n", max);
//
//	return;
//
//}
//int main() {
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组大小除以单个元素大小为元素数量
//	return 0;
//}
//int main() {
//	int a = 10;
//	int b = ++a;//前置++，先++，再使用
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	int c = 10;
//	int d = c++;//后置++，先使用，再++
//	printf("d=%d\n", d);
//	printf("c=%d\n", c);
//
//	int x = 10;
//	int y = --x;//前置--，先--，再使用
//	printf("%d\n %d\n", x, y);
//	
//	
//	return 0;
//}
//int main() {
//	int a = (int)3.14;//强制类型转换 double->int
//	return 0;
//}

//int main() {
//	//真-非0
//	//假-0
//	int a = 2;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	if (a < b)
//		max = b;
//	printf("max=%d\n", max);
//	return 0;
//}

//int Add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main() {
//	//int arr[10] = { 0 };
//	//arr[4];  //[]-下标引用操作符
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//}

//100000000000000000000000010 - 原码
//111111111111111111111111101 - 反码 原码符号位不变，其它位取反
//111111111111111111111111110 - 补码 反码加一

//void test()
//{
//	//static 修饰局部变量，局部变量的生命周期变长
// 只能在自己所在的源文件内部使用，出了源文件就无法再使用了
//
//	static int a = 1;//是一个静态的局部变量
//	a++;
//	printf("a=%d\n", a);
//}
//int main() {
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//
//}

//普通的函数具有外部的连接属性，如果被static修饰了，就变成了内部的连接属性

//extern int  Add(int, int);
//int main() {
//	int a = 4;
//	int b = 5;
//	int sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//宏的定义
//#define MAX(X,Y)(X>Y?X:Y)
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

int main() {
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("ch=%c\n", ch);




	int a = 10;//44个字节
	int* p = &a;//取地址
	//*p:解引用操作符
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;
	printf("a=%d\n", a);
	return 0;
}