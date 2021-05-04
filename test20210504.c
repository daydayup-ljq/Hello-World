#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define len 5


int search_arr(int arr[],int lens,int x)//数组，长度，找什么
{
	int left = 0;//左侧下标
	int right = lens-1 ;//右侧下标
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (  x== arr[mid])
		{
			printf("找到了，下标是：%d", mid);
			return mid;
		}
		if (x == arr[mid + 1])
		{
			printf("找到了，下标是:%d ", mid + 1);
			return mid;
		}
		else if (arr[mid] > x)
		{
			right = mid -1;
		}
		else  if (arr[mid] < x)
		 {
			 left = mid+1 ;
		 }
		 if(left>=right)
		 {
			 printf("找不到");
			 printf("%d %d \n", left, right);
		 }
	}
}
void main()
{
	int arr[len];
	int i;
	int x;
	int j;
	printf("输入5个整数:\n");
	for (i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
		//arr[i] =getchar();
		
	}

	printf("按从小到大排序后为：");
	for (i = 0; i < len; i++)
	{
		for (x = 0; x <len-1-i; x++)
		{
			if (arr[x] > arr[x + 1])
			{
				j = arr[x];
				arr[x] = arr[x + 1];
				arr[x + 1] = j;
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	search_arr(arr, len, 2);
}