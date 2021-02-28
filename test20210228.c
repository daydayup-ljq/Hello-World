#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//判断一个字符串是否为另一个字符串旋转之后的字符串
//int is_left_move(char* str1,char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	// 1. 在str1字符串中追加一个str1字符串
//	//strcat - 追加
//	//例如：
//	//char arr1[30] = "abc";
//	//char arr2[] = "def";
//	//stract(arr1, arr2);
//	//printf("%s\n", arr1);// arr1--abcdef
//	//strncat -- 自己给自己追加的时候不能用strcat
//	strncat(str1, str1,len1);
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr-找子串 cdefab就是abcdefabcdef的子串
//	char* ret= strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//杨氏矩阵
//题目名称：
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写一个程序在这样的矩阵中查找某个数字是否存在,时间复杂度小于0（N）

int FindNum(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;

	while (x <= row - 1&& y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}

}
int main()
{
	int arr[3][3] = { {1,2,3}, {3,4,5}, {5,6,7} };
	int k = 17;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr, k, x, y);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}