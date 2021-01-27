#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%lf\n", *pFloat);
//	return 0;
//}

//void test(int arr[])//数组传首元素地址
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//4/4=1
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char arr[]="abcdefg";
//	char* pc = arr;
//
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串,交给常量字符串指针
//	//p里面存放的是a的地址
//	//*p = 'w';//常量无法被改变
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";//数组名表示首元素的地址
//	char arr2[] = "abcdef";//arr1和arr2首元素地址不同
//	char* p1 = "abcdef";//p1和p2里面存的地址相同
//	char *p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组 -指针数组
//	char* pch[5];//存放字符指针的数组 -指针数组
//
//	return 0;
//}

//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,2,3,4,5 };
//	int arr3[] = { 3,2,2,4,5 };
//	int* parr[] = { arr1,arr2,arr3 };//一个一维数组维护三个一维数组
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 1; j++)
//		{
//			printf("%d ", *(parr[i] + j));//parr[i]是首元素地址，然后+j，依次找到后续的地址
//		}
//		printf("\n");
//	}
//	return 0;
//}