#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ص�����
	//�ص���������һ��ͨ������ָ����õĺ����� 
	//�����Ѻ�����ָ��(��ַ)��Ϊ�������ݸ���һ������, �����ָ�뱻������������ָ��ĺ���ʱ, ���Ǿ�˵���ǻص�������
	//�ص����������ɸú�����ʵ�ַ�ֱ�ӵ���, �������ض����¼�����������ʱ�������һ�����õ�, ���ڶԸ��¼�������������Ӧ��

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	
//	test(print);
//
//	return 0;
//}


////qsort - ���������������͵�����
//int main()
//{
//	//ð��������
//	//ð��������ֻ��������������
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//}

//int Add(int x, int y)
//{
//	return  x + y;
//}
//int main()
//{
//	//ָ�뺯��
//	//arr�����[]���˵�������飬����Ԫ����10����������int*
//	int* arr[10];
//
//	//����ָ��
//	//*pa˵��pa�Ǹ�ָ�룬[10]˵��������ʮ��Ԫ��
//	//paָ����Ǹ�����arr��������int*
//	int* (*pa)[10] = &arr;
//
//	//����ָ��
//	//*paAdd����һ��ָ��
//	//��int��int��˵��������һ��������int���ڶ���������int
//	//int(*pAdd)˵������������int
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	int sum = pAdd(1, 2);
//	         //Add(1, 2);
//	printf("sum=%d\n", sum);
//
//	//����ָ������
//	//�Ⱥ�[]��ϣ�[5]��ʾ��5��Ԫ�أ�int(*)(int,int)������ָ��
//	int(*pArr[5])(int, int);
//
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[5])(int,int)=&pArr;
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
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
//}
//struct Stu
//{
//
//	char name[20];
//	int age;
//};
//
//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void* e1, const void* e2)
//);
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"����",20},{"����",20},{"����",10} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	qsort(arr, sz,sizeof(arr[0]),);
//
//	bubble_sort(f, sz);
//
//	//bubble_sort(arr, sz);//ֻ�������Σ�����ͨ��
//
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//qsort - �⺯�� -��������
//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pa = &a;
//	//char ch = 'w';
//	void* p = &a;//�����͵�ָ��
//	//void* ���͵�ָ��  ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ��  ���ܽ��н����ò���
//	//void* ���͵�ָ��  ���ܽ���+-�����Ĳ���
//	return 0;
//}