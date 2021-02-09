#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//signal是一个函数申明
//	//signal函数的参数有两个，第一个是int,第二个是函数指针，该函数指针指向的函数的参数是int,返回类型是void
//	//signal函数的返回类型也是一个指针函数：该函数指针指向的函数的参数是int，返回类型是void
//	void(*signal(int, void(*)(int)))(int);
//	//简化
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//
//	typedef unsigned int uint;
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
//
//	int(*pa)(int, int) = Add;//Add和pa是一回事
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", (*pa)(2, 3));//*是个摆设，对于函数指针来说前面的*并没有多大的价值
//	//pa是个值的话，*pa就是去解引用，找到那个函数，然后去调用它
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//
//	int (*pa)(int, int) = Add;//Sub,Mul,Div,
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5,-1,6,0
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
//
////2.写一个函数指针数组，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);

//函数指针数组使用案例
void menu()
{
	printf("****************************\n");
	printf("*******1. add    2. sub*****\n");
	printf("*******3. mul    4. div*****\n");
	printf("************0.exit**********\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择:  \n");
		scanf("%d%d", &x, &y);
		int ret = pfArr[input](x, y);
		printf("%d\n", ret);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数： \n");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	

	
}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//
//		menu();
//		printf("请选择：  \n");
//		scanf("%d", &input);
//		printf("请输入两个操作数:  \n");
//		scanf("%d%d", &x, &y);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出！！！   \n");
//			break;
//		default:
//			printf("选择错误      \n");
//			break;
//
//		}
//	} while (input);
//
//}