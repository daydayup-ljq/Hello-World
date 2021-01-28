#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//int* p = NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	//char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针 - 指向数组的指针 - 存放数组的地址
//	int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素的地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(* p)[10] = &arr;//数组的地址要存起来
//	//上面的p就是数组指针
//	//首先和*结合，变成指针，再和[10]结合存放十个数组，类型是int
//	return 0;
//}

//int main()
//{
//	char* arr[5];//数组的地址要用数组指针存放
//	char*(* pa)[5] = &arr;
//	//pa 是指针变量的名字
//	//*说明pa是指针
//	//[5]说明pa指向的数组是五个元素
//	//char* 说明pa指向的数组的元素类型是char* 
//
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",(*pa)[i]);
//		
//
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//
//		printf("%d ", *(*pa + i));//*pa==arr
//
//	}
//	printf("\n");
//
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//参数是指针的形式
//void print2(int(*p)[5], int x, int y)//首元素是第一行，五个元素每个元素为整形
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", *(*(p + i)+j));
//		/*	printf("%d", (*(p + i))[j]);*/
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	/*print1(arr, 3, 5);*///arr -数组名 - 除了两种特殊情况，数组名就是首元素地址
//	//把arr想象成一维数组
//	print2(arr, 3, 5);
//	return 0;
//}

int main()
{

	return 0;
}