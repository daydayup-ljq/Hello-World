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
		//一趟冒泡排序
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
	//比较两个整形
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
	//比较两个浮点
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
	//比较名字就是比较字符串
	//字符串比较不能直接用><=来比较
	//应该用strcmp函数

	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",20},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//第一个参数：待排序数组的首元素地址
	//第二个参数，待排序数组的元素个数
	//第三个参数，待排序数组的每个元素的大小--单位是字节
	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
	//            函数指针的两个参数是：待比较的两个元素的地址
}

//实现bubble_sort函数的程序员，他是否知道未来排序的数据类型 - 不知道
//那程序员也不知道，待比较的两个元素的类型

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
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1 )* width) > 0)
			{
				//交换
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
			

			
		}
	}
}


void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	//使用bubble_sort的程序员一定知道自己排序的什么数据
	//就应该知道如何比较待排序数组中的元素
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

	//bubble_sort(arr, sz);//只能排整形，不够通用

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
	

//qsort - 库函数 -快速排序
//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pa = &a;
//	//char ch = 'w';
//	void* p = &a;//无类型的指针
//	//void* 类型的指针  可以接收任意类型的地址
//	//void* 类型的指针  不能进行解引用操作
//	//void* 类型的指针  不能进行+-整数的操作
//	return 0;
//}