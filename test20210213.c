#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//数组名是首元素地址，但是有两个例外
	//1.sizeof(数组名) - 数组名表示整个数组
	//2.&数组名 - 数组名表示整个数组
	//
	//一堆数组
	int a[] = { 1,2,3,4 };
	printf("%d\n,sizeof(a)");// 16 -sizeof(数组名)-计算的是数组的总大小-单位是字节- 16
	printf("%d\n,sizeof(a+0)");//4 - 数组名这里表示首元素地址，a+0还是首元素地址，地址的大小就是4或8个字节
	printf("%d\n,sizeof(*a)");// 4 -数组名表示首元素地址，*a就是首元素，首元素的大小是4个字节为整形
	printf("%d\n,sizeof(a+1)");// 4 -数组名这里表示首元素地址，a+1是第二个元素地址，地址的大小就是4或8个字节
	printf("%d\n,sizeof(a[1])");// 4 -第二个元素大小
	printf("%d\n,sizeof(&a)");//  4 -&a取出的就是数组的地址，但是数组的地址也是地址，地址的大小就是4或8个字节，按平台分
	printf("%d\n,sizeof(*&a)");// 16 -&a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小，单位是字节
	printf("%d\n,sizeof(&a+1)");// 4 -&a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以还是4/8个字节
	printf("%d\n,sizeof(&a[0])");// 4- 第一个元素的地址
	printf("%d\n,sizeof(&a[0]+1)");// 4- &a[0]+1,是第二个元素的地址

	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };

	printf("%d\n", strlen(arr));//随机值 - 只知道放了abcdef长度暂且是6，一直向后找，找到/0为止，但是/0的位置不确定，所以随机
	printf("%d\n", strlen(arr + 0));//首元素地址，随机值
	//printf("%d\n", strlen(*arr));//数组名就是首元素地址，首元素地址解引用就是首元素，就是字符'a'-97，程序错误
	//printf("%d\n", strlen(arr[1]));//传了一个字符'b',也是错误
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//取地址+1就是跳过整个数组，随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//从'b'开始往后数长度，比之前的随机值-1

	printf("%d\n", sizeof(arr));// 6 - sizeof计算的是数组的大小，6*1 =6字节
	printf("%d\n", sizeof(arr+0));// 4 - arr是首元素的地址，arr+0还是首元素的地址，地址的大小是4或8个字节
	printf("%d\n", sizeof(*arr));// 1 - arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节
	printf("%d\n", sizeof(arr[1]));// 1 
	printf("%d\n", sizeof(&arr));// 4- &arr是数组地址，地址大小是4或8个字节
	printf("%d\n", sizeof(&arr+1));// 4 - &arr+1是跳过整个数组后的地址，地址大小是4个或者8个字节
	printf("%d\n", sizeof(&arr[0] + 1));// 4- 第二个元素的地址
	return 0;
}