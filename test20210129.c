#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//ָ������ - ���� - ���ָ�������
//
//	int* arr[10];
//	char* ch[5];
//	//����ָ��
//	//int* p3//����ָ�� - ָ�����ε�ָ��
//
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ,pa����һ������ָ��
//
//		return 0;
//}
//void print(int* p, int sz)
//{
//
//}
////�������ֿ���д�����飬�����С����ʡ��
//void test(int arr[])//ok?��ok
//{}
//void test(int arr[10])//ok?,ok
//{}
//void test(int *arr,int sz)//ok?,ok,����������Ԫ�ص�ַ��int�ĵ�ַ����int*
//{int i = 0;
//for (i = 0; i < sz; i++)
//{
//	printf("%d ", arr[i]);
//}}
//void test2(int *arr[20])//ok?,ok,�����飬��ʮ��Ԫ�أ�����ʡ�ԣ���ÿ��Ԫ����int*
//{
//
//}
//void test2(int **arr)//ok?��ok��һ��ָ��ĵ�ַ�������ŵ�����ָ������
//{}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
////	int* arr2[20] = { 0 };
//	test(arr,sz);
////	test2(arr2);//ÿ��Ԫ�ض���int*��ָ�����飩��������Ƴɶ���ָ��
//	return 0;
//}

//void test(int arr[3][5])//ֻ��ʡ���У�����ʡ����
//{
//
//}
//
//void test5(int(*arr)[5])
//{
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//��ά���鴫��
//	test5(arr);
//	return 0;
//}
//�ܽ��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]������
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ���ж���Ԫ�أ�Ҳ������
//�����ŷ�������

//void test1(int* p)
//{
//
//}
//void test2(char* p)
//{
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//pk
//	return 0;
//}

//����ָ�봫��
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//void test(char ** p)//�βεĲ����Ƕ���ָ��
//{
//
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);//���Դ�һ��һ��ָ�����pc�ĵ�ַ
//	test(ppc);//Ҳ���Դ�һ������ָ���������
//	test(arr);//�����Դ��һ��ָ�����������������������ʾ��Ԫ�صĵ�ַ��Ҳ����һ��ָ��ĵ�ַ
//	return 0;
//}