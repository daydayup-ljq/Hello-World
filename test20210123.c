#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//void test2()
//{
//	printf("hehehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;
//	//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		 ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//ԭʼ����
//void my_strcpy(char* dest,char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//
//}

//�Ż�����1.0
//void my_strcpy(char* dest,char* src)
//{
//	while (*dest++ = *src++)
//	{
//		
//		
//	}
//	
//}
//�Ż�����2.0
//#include<assert.h>
//void my_strcpy(char* dest,char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//	}
//}

//�Ż�����3.0
//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//	}
//}

//�Ż�����4.0
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "good night";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	printf("%s\n", my_strcpy(arr1,arr2));//4.0���
//	return 0;
//}

//���ּ���
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

