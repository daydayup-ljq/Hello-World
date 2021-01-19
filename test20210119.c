#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		(*p)++ = i;
//		//数组越界导致的野指针问题
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//	//返回临时变量的地址都是有问题的，除非地址不销毁
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
	////避免指针问题
	////1.指针初始化
	//int a = 10;
	//int* pa = &a;
	//int* p = NULL;

	////指针指向空间释放，既放置NULL空指针
	//int a = 10;
	//int* pa = &a;
	//*pa = 20;
	//pa = NULL;

//	//使用指针之前检测指针可用性
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa != NULL)
//	{
//
//	}
//}

	//int main()
	//{
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int i = 0;
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	int* p = arr;
	//	for (i = 0; i < sz; i++)
	//	{
	//		printf("%d ", *p);
	//		p = p + 2;
	//		
	//	}
	//	return 0;
	//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	//printf("%d\n", &arr[9] - &ch[0]);//ear
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen -求字符串长度
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//1.&arr- &数组名不是首元素地址-数组名表示整个数组
//	//&数组名取出的是整个数组的地址
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
	/*for (i = 0; i < 10; i++)
	{
		printf("%p=====%p\n",p+i, &arr[i]);
	}*/

	//数组完全可以通过指针进行访问
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]/*或者*(p+i)*/);
//	}
//	return 0;
//}

	//int main()
	//{
	//	int a = 10;
	//	int* pa = &a;
	//	int** ppa = &pa;//二级指针
	//	return 0;
	//}

//#define N_VALUES 5
//int main() 
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	//标准并不能保证上述代码可行
//	//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较
//	//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
//	return 0;
//}
