#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define n 5

void main()
{
	const int t = n * (n + 1) / 2;//等差数列 t=15
	int a[15];
	int m = 0;
	int k = 0;
	//printf("%d", t);
	int arr[n][n] = { {3}, {6,2} ,{4,8,1} ,{7,4,6,2} ,{8,2,9,5,7} };
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d  ", arr[i][j]);
			if (i >= j)
			{
				a[k] = arr[i][j];
				k++;
			}
		}
	
		printf("\n");
	}

	printf("\n");
	for (i = 0; i < t; i++)
	{
		printf("%d  ", a[i]);
	}
}


//void main()
//{
//	char arr1[100];
//	int i = 0;
//	int j = 0;
//	int t;
//	printf("请输入字符串: \n");
//	gets(arr1);
//	int len = strlen(arr1);
//	for (i = len - 1, j = 0; i >= 0; i--, j++)
//	{
//		if (arr1[j] != arr1[i])
//		{
//			//printf("%c  %c  %d\n", arr1[i], arr1[j], j);
//			t = 1;
//		}
//		else
//			t = 0;
//	}
//	if (t)
//		printf("不是回文！\n");
//	else
//		printf("是回文\n");
//
//}