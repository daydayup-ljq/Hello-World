#
//包含一个叫stdio.h的文件

//std-标准 standard input output

//int num2 = 20;//全局变量，定义在大括号外面
//int main()//int是整形的意思，主函数-程序入口-main函数有且只有一个
//{
//	//这里完成任务，在屏幕上输出早上好觉觉
//	//函数-print function-打印函数
//	//库函数-C语言本身提供给我们使用的函数
//	//别人的东西-打招呼
//	//#include
//	//char ch = 'A';
////	printf("%c\n",ch);
//	/*int age = 20;
//	printf("%d\n", age);*/
//	//float f = 5.0;
//	//printf("%f/n", f);
//
//	//printf("%d\n", sizeof(double));8
//	//printf("%d\n", sizeof(short));2
//	//printf("%d\n", sizeof(int));4
//	//printf("%d\n", sizeof(long));4
//	//printf("%d\n", sizeof(long long));8
//	//printf("%d\n", sizeof(float));4
//	/*short age = 20;向内存申请两个字节*/
//	int num = 10;//局部变量-定义在代码块内部
//	return 0;//返回0；
//}


// char 字符类型 引号''框住字符，申请一个空间  char ch='A';
//%d 打印整形
//%f 打印浮点型（包含五个小数位）
//%p 以地址的形式打印
//%x 打印十六进制
//%c 打印字符
//float  单精度浮点型
//double 双精度浮点型




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()

{

	int num1 = 10;
	int num2 = 20;
	printf("num1= %d\n", num1);
	printf("num2= %d\n", num2);
	int sum = 0;
	sum = num1 + num2;
	/*scanf("%d%d\n", &num1, &num2);*/
	printf("sum = %d\n", sum);
	

	return ;
}