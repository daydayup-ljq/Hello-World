#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello";//�ŵ������ǿ����޸ĵ�
//	char str2[] = "hello";//
//	char* str3 = "hello";//��߷ŵ��ǳ����ַ���
//	char* str4 = "hello";
//	if (str1 == str2)
//		printf("1and2same\n");
//	else
//		printf("not same\n");
//
//
//	if (str3 == str4)
//		printf("3and4same\n");
//	else
//		printf("not same\n");

//no,same
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);//����������ά����
//	int* ptr2 = (int*)(*(aa + 1));//*(aa+1)==aa[1]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//1,6
//	return 0;
//}


//ʵ��һ�����������������ַ����е�k���ַ�
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB


//��һ
//void left_move(char* arr, int k)
//{
//	assert(arr��=NULL);//����Ͳ��ᱨ��
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
//		char tmp=*arr;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//
//		*(arr + len - 1) = tmp;
//	}
//}

//����
//������ת��
//abcdef
//bafedc
//cdefab

void reverse(char* left, char* right)
{
	assert(left != NULL);
		assert(right != NULL);
	while(left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;

	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k < len);
	reverse(arr,arr+k-1);//�������
	reverse(arr+k,arr+len-1);//�����ұ�
	reverse(arr,arr+len-1);//��������
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);

	printf("%s\n", arr);
	return 0;

}