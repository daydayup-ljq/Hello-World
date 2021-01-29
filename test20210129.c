#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组 - 数组 - 存放指针的数组
//
//	int* arr[10];
//	char* ch[5];
//	//数组指针
//	//int* p3//整形指针 - 指向整形的指针
//
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组的地址,pa就是一个数组指针
//
//		return 0;
//}
//void print(int* p, int sz)
//{
//
//}
////参数部分可以写成数组，数组大小可以省略
//void test(int arr[])//ok?，ok
//{}
//void test(int arr[10])//ok?,ok
//{}
//void test(int *arr,int sz)//ok?,ok,数组名是首元素地址，int的地址就是int*
//{int i = 0;
//for (i = 0; i < sz; i++)
//{
//	printf("%d ", arr[i]);
//}}
//void test2(int *arr[20])//ok?,ok,传数组，二十个元素（可以省略），每个元素是int*
//{
//
//}
//void test2(int **arr)//ok?，ok，一级指针的地址传过来放到二级指针里面
//{}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
////	int* arr2[20] = { 0 };
//	test(arr,sz);
////	test2(arr2);//每个元素都是int*（指针数组），参数设计成二级指针
//	return 0;
//}

//void test(int arr[3][5])//只能省略行，不能省略列
//{
//
//}
//
//void test5(int(*arr)[5])
//{
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组传参
//	test5(arr);
//	return 0;
//}
//总结二维数组传参，函数形参的设计只能省略第一个[]的数字
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行有多少元素，也就是列
//这样才方便运算

//void test1(int* p)
//{
//
//}
//void test2(char* p)
//{
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//pk
//	return 0;
//}

//二级指针传参
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//void test(char ** p)//形参的部分是二级指针
//{
//
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);//可以传一个一级指针变量pc的地址
//	test(ppc);//也可以传一个二级指针变量本身
//	test(arr);//还可以存放一级指针数组的数组名，数组名表示首元素的地址，也就是一级指针的地址
//	return 0;
//}