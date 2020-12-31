#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS


//int main() {
//
//	double d = 3.14;
//	printf("%p\n", &d);
//	double* pd = &d;
//	printf("%p\n", pd);
//	*pd = 3.15;
//	printf("d=%lf\n", d);
//
//	//int a = 10;//申请四个字节
//	//int* p = &a;//指针变量p,类型为int *
//	//*p = 20;//*--解引用操作符/间接访问操作符
//	//printf("a=%d\n", a);
//	return 0;
//}
//

struct Book
{
	char name[20];//c语言程序设计
	short price;//55


};//不可缺少的封号
#include<string.h>
#include<stdio.h>
int main() {
	//利用结构体类型创建一个该类型的结构体变量出来
	struct Book b1 = { "c语言程序设计",55 };
	strcpy(b1.name, "C++");//strcpy-string copy 
	//字符串拷贝-库函数-string.h
	printf("%s\n", b1.name);

	//struct Book* pb = &b1;
	////利用pb打印出书名和价格；
	////.操作符  结构体变量.成员
	////->       结构指针->成员 
	//printf("《%s》\n", (*pb).name);
	//printf("《%s》\n", pb->name);
	//printf("价格：%d元\n", (*pb).price);
	//printf("价格：%d元\n", pb->price);
	//printf("书名：《%s》\n ", b1.name);
	//printf("价格：%d元\n", b1.price);

	//b1.price = 15;
	//printf("修改后的价格:%d元\n ", b1.price);
}