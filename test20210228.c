#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//int is_left_move(char* str1,char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	// 1. ��str1�ַ�����׷��һ��str1�ַ���
//	//strcat - ׷��
//	//���磺
//	//char arr1[30] = "abc";
//	//char arr2[] = "def";
//	//stract(arr1, arr2);
//	//printf("%s\n", arr1);// arr1--abcdef
//	//strncat -- �Լ����Լ�׷�ӵ�ʱ������strcat
//	strncat(str1, str1,len1);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr-���Ӵ� cdefab����abcdefabcdef���Ӵ�
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

//���Ͼ���
//��Ŀ���ƣ�
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���дһ�������������ľ����в���ĳ�������Ƿ����,ʱ�临�Ӷ�С��0��N��

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
		printf("�ҵ���\n");
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}