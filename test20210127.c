#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%lf\n", *pFloat);
//	return 0;
//}

//void test(int arr[])//���鴫��Ԫ�ص�ַ
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
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���,���������ַ���ָ��
//	//p�����ŵ���a�ĵ�ַ
//	//*p = 'w';//�����޷����ı�
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";//��������ʾ��Ԫ�صĵ�ַ
//	char arr2[] = "abcdef";//arr1��arr2��Ԫ�ص�ַ��ͬ
//	char* p1 = "abcdef";//p1��p2�����ĵ�ַ��ͬ
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
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� -ָ������
//	char* pch[5];//����ַ�ָ������� -ָ������
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
//	int* parr[] = { arr1,arr2,arr3 };//һ��һά����ά������һά����
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 1; j++)
//		{
//			printf("%d ", *(parr[i] + j));//parr[i]����Ԫ�ص�ַ��Ȼ��+j�������ҵ������ĵ�ַ
//		}
//		printf("\n");
//	}
//	return 0;
//}