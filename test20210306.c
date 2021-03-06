#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int arr[10];
//	int* p;
//	int* max;
//	int* min;
//	int k;
//	for (p = arr; p < arr + 10; p++)
//		scanf("%d", p);
//	max = min = arr;
//	for (p = arr + 1; p < arr + 10; p++)
//	{
//		if (*max < *p)
//			max = p;
//		if (*min > *p)
//			min = p;
//	}
//	p = arr;
//	if (*max == *(p + 9) && *min == *p)
//	{
//		k = *p;
//		*p = *(p + 9);
//		*(p + 9) = k;
//	}
//	else if (*max == *(p + 9))
//	{
//		k = *max;
//		*max = *p;
//		*p = k;
//		k = *min;
//		*min = *(p + 9);
//		*(p + 9) = k;
//	}
//	else
//	{
//		k = *min;
//		*min = *(p + 9);
//		*(p + 9) = k;
//		k = *max;
//		*max = *p;
//		*p = k;
//	}
//	for (p = arr; p < arr + 10; p++)
//	{
//		printf("%4d", *p);
//		printf("\n");
//	}
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = &arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//}

//int main()
//{
//	const char* p = "abcdef";//放不下,"abcdef"是一个常量字符串
//	//p里面存的是a的地址
//	printf("%c\n", *p);//%c打印一个字符
//	printf("%s\n", p);//从首字符的地址开始，向后打印直到\0
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char *p1 = "abcdef";
//	char *p2 = "abcdef";
//	if (p1 == p2)//存的是常量字符串，a的地址是相同的
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d",*( parr[i] + j));
//		}
//
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//arr-首元素地址
//	//&arr[0]- 首元素的地址
//	//&arr - 数组的地址
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址要存起来,*和p先结合，p就是数组指针
//	return 0;
//}

int main()
{
	char* arr[5];
	char*(*pa)[5] = &arr;//
	return 0;
}