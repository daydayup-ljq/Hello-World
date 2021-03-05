#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int len = sizeof(a) / sizeof(a[0]);
//	for (i = len; i>=0 ; i--)
//	{
//		printf( "%d ",a[i] );
//		
//	}
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
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));//parr[i]是首元素地址，然后+j，依次找到后续的地址
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	int arr[] = { 0 };
	int i = 0;
	int a = 0;
	int max = 0;
	int min = 0;
	int tmp = 0;
	for (i = 0; i <= 5; i++)
	{
		scanf("%d", arr[i]);
		if (arr[i] > arr[i - 1])
		{
			max = arr[i];
			tmp = arr[0];
			arr[0] = max;
			max = tmp;
		}
	}
	return 0;
}