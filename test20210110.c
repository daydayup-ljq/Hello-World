#define _CRT_SECURE_NO_WORINGS
#include<stdio.h>
//int main() 
//{
//	//创建一个数组-存放十个整形
//	int arr[10] = {"abcd"};//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5];
//	char ch4[] = "abcdef";
//	printf("%d\n", sizeof(ch4));
//	//sizeof计算ch4所占空间的大小
//	//七个元素-char 7*1=7
//
//	printf("%d\n", strlen(ch4));
//	//strlen 求字符串长度，到/0之前的字符个数
//
//	char arr3[] = "abc";
//	char arr4[] = {'a','b','c'};
//	printf("%d\n", sizeof(arr3));
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", strlen(arr4));//c后面没有\0,,一直往后找，找到\0为止
//	return 0;
//}

//二维数组
//int main() {
//	int arr[3][4] = { {1,2,3},{1,2,3},{1,2,3} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int r = 0;
//		for ( r = 0; r <4; r++)
//		{
//			printf("%d ", arr[i][r]);
//		}printf("\n");
//	}
//	
//	return 0;
//}

//冒泡排序
//1.效率较低
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//每一趟冒泡排序
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
//
//}
//int main() {
//	int arr[] = { 5,6,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组进行传参，实际上传递过去的是arr的首元素的地址
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//较为高效
void bubble_sort(int arr[], int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

}
int main() {
	int arr[] = { 5,6,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	//arr是数组，我们对数组进行传参，实际上传递过去的是arr的首元素的地址
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}