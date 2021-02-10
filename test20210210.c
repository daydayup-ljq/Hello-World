#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//回调函数
	//回调函数就是一个通过函数指针调用的函数。 
	//如果你把函数的指针(地址)作为参数传递给另一个函数, 当这个指针被用来调用其所指向的函数时, 我们就说这是回调函数。
	//回调函数不是由该函数的实现方直接调用, 而是在特定的事件或条件发生时由另外的一方调用的, 用于对该事件或条件进行响应。

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	
//	test(print);
//
//	return 0;
//}


////qsort - 可以排序任意类型的数据
//int main()
//{
//	//冒泡排序函数
//	//冒泡排序函数只能排序整形数组
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//}

//int Add(int x, int y)
//{
//	return  x + y;
//}
//int main()
//{
//	//指针函数
//	//arr后面和[]结合说明是数组，数组元素是10个，类型是int*
//	int* arr[10];
//
//	//数组指针
//	//*pa说明pa是个指针，[10]说明里面有十个元素
//	//pa指向的那个数组arr的类型是int*
//	int* (*pa)[10] = &arr;
//
//	//函数指针
//	//*paAdd就是一个指针
//	//（int，int）说明函数第一个参数是int，第二个参数是int
//	//int(*pAdd)说明返回类型是int
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	int sum = pAdd(1, 2);
//	         //Add(1, 2);
//	printf("sum=%d\n", sum);
//
//	//函数指针数组
//	//先和[]结合，[5]表示有5个元素，int(*)(int,int)代表函数指针
//	int(*pArr[5])(int, int);
//
//	//指向函数指针数组的指针
//	int(*(*ppArr)[5])(int,int)=&pArr;
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct Stu
//{
//
//	char name[20];
//	int age;
//};
//
//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void* e1, const void* e2)
//);
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"张三",20},{"李四",20},{"王五",10} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	qsort(arr, sz,sizeof(arr[0]),);
//
//	bubble_sort(f, sz);
//
//	//bubble_sort(arr, sz);//只能排整形，不够通用
//
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//qsort - 库函数 -快速排序
//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pa = &a;
//	//char ch = 'w';
//	void* p = &a;//无类型的指针
//	//void* 类型的指针  可以接收任意类型的地址
//	//void* 类型的指针  不能进行解引用操作
//	//void* 类型的指针  不能进行+-整数的操作
//	return 0;
//}