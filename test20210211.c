#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
struct Stu
{

	char name[20];
	int age;
};
//
//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void* e1, const void* e2)
//);

int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
}


int cmp_float(const void* e1, const void* e2)
{
	//�Ƚ���������
	return ((int)*(float*)e1 - *(float*)e2);
	
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}

}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ����><=���Ƚ�
	//Ӧ����strcmp����

	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",20},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//��һ���������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С--��λ���ֽ�
	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
	//            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
}

//ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ��������������� - ��֪��
//�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort2(void* base, int sz, int width,int(*cmp)(void*e1,void*e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1 )* width) > 0)
			{
				//����
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
			

			
		}
	}
}


void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ������ʲô����
	//��Ӧ��֪����αȽϴ����������е�Ԫ��
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]));
	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_int);

}

void test5()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",20},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	

	//bubble_sort(f, sz);

	//bubble_sort(arr, sz);//ֻ�������Σ�����ͨ��

	/*test1();
	printf("\n");
	test2();
	printf("\n");
	test3();
	printf("\n");*/
	test4();
	printf("\n");
	return 0;
}
	

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