#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		(*p)++ = i;
//		//����Խ�絼�µ�Ұָ������
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//	//������ʱ�����ĵ�ַ����������ģ����ǵ�ַ������
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
	////����ָ������
	////1.ָ���ʼ��
	//int a = 10;
	//int* pa = &a;
	//int* p = NULL;

	////ָ��ָ��ռ��ͷţ��ȷ���NULL��ָ��
	//int a = 10;
	//int* pa = &a;
	//*pa = 20;
	//pa = NULL;

//	//ʹ��ָ��֮ǰ���ָ�������
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa != NULL)
//	{
//
//	}
//}

	//int main()
	//{
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int i = 0;
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	int* p = arr;
	//	for (i = 0; i < sz; i++)
	//	{
	//		printf("%d ", *p);
	//		p = p + 2;
	//		
	//	}
	//	return 0;
	//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	//printf("%d\n", &arr[9] - &ch[0]);//ear
//
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen -���ַ�������
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//1.&arr- &������������Ԫ�ص�ַ-��������ʾ��������
//	//&������ȡ��������������ĵ�ַ
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
	/*for (i = 0; i < 10; i++)
	{
		printf("%p=====%p\n",p+i, &arr[i]);
	}*/

	//������ȫ����ͨ��ָ����з���
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]/*����*(p+i)*/);
//	}
//	return 0;
//}

	//int main()
	//{
	//	int a = 10;
	//	int* pa = &a;
	//	int** ppa = &pa;//����ָ��
	//	return 0;
	//}

//#define N_VALUES 5
//int main() 
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	//��׼�����ܱ�֤�����������
//	//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚ�
//	//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
//	return 0;
//}
