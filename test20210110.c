#define _CRT_SECURE_NO_WORINGS
#include<stdio.h>
//int main() 
//{
//	//����һ������-���ʮ������
//	int arr[10] = {"abcd"};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5];
//	char ch4[] = "abcdef";
//	printf("%d\n", sizeof(ch4));
//	//sizeof����ch4��ռ�ռ�Ĵ�С
//	//�߸�Ԫ��-char 7*1=7
//
//	printf("%d\n", strlen(ch4));
//	//strlen ���ַ������ȣ���/0֮ǰ���ַ�����
//
//	char arr3[] = "abc";
//	char arr4[] = {'a','b','c'};
//	printf("%d\n", sizeof(arr3));
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", strlen(arr4));//c����û��\0,,һֱ�����ң��ҵ�\0Ϊֹ
//	return 0;
//}

//��ά����
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

//ð������
//1.Ч�ʽϵ�
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//ÿһ��ð������
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
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�������д��Σ�ʵ���ϴ��ݹ�ȥ����arr����Ԫ�صĵ�ַ
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//��Ϊ��Ч
void bubble_sort(int arr[], int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ�����
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//������������ݲ���ȫ����
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
	//��arr���������ų�����
	//arr�����飬���Ƕ�������д��Σ�ʵ���ϴ��ݹ�ȥ����arr����Ԫ�صĵ�ַ
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}