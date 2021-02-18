#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//整形指针解引用一口气访问4个字节
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//逗号表达式的结果是最后一个数的结果
//	//二维数组其实是
//	//  1   3
//	//  5   0
//	//  0   0
//	int* p;
//	p = a[0];//a[0]代表首元素的地址，就是'1'的地址
//	printf("%d\n", p[0]);
//
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//指向一个数组，数组元素有四个，每个元素类型是整型，是一个数组指针
//	p = a;//int( * )[4] ------- int( * )[5]
//	//p就是首元素地址
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//p[4][2]等价于*(*(p+4)+2)
//	//p+4,就是跳过4*4个整型字节
//	return 0;
//}

int main()
{

	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };

	int* ptr1 = (int*)(&aa + 1);
	//取出二维数组的地址+1，相当于跳过整个二维数组

	int* ptr2 = (int*)(*(aa + 1));
	//aa[1] - 第二行首元素地址

	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;

}