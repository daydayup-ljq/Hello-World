#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
//指针面试题详解
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";

	printf("%d\n", strlen(arr));// 6- 从起始位置，遇到非/0就++，只到/0为止
	printf("%d\n", strlen(arr + 0));// 6- arr是数组名，是首元素地址，从起始位置，遇到非/0就++，只到/0为止
	printf("%d\n", strlen(*arr)); // error- strlen接受的是个地址，arr是首元素地址，*arr就是字符'a'，只能把ASCLL97当做地址
	printf("%d\n", strlen(arr[1]));// error- 传了一个'b'，错误
	printf("%d\n", strlen(&arr)); //6- &arr依然是从起始位置开始，向后找 - 数组的地址-数组指针 char(*)[7]=&arr
	printf("%d\n", strlen(&arr + 1));// 随机值
	printf("%d\n", strlen(&arr[0] + 1));// 5- &arr[0]就是a的地址，+1就是b的地址，从b开始向后数，数到/0之前截止

	printf("%d\n", sizeof(arr));// 7- sizeof(arr)计算的数组的大小，到/0数完为止，单位字节是7
	printf("%d\n", sizeof(arr+0));// 4- 计算的是地址的大小-arr +0是首元素的地址
	printf("%d\n", sizeof(*arr)); // 1- *arr是首元素,sizeof(*arr)计算首元素的大小
	printf("%d\n", sizeof(arr[1]));// 1- arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
	printf("%d\n", sizeof(&arr)); // 4- &arr虽然是数组的地址，但也是地址，所以是4或8个字节，看平台
	printf("%d\n", sizeof(&arr+1));// 4- &arr+1是跳过真个数组后的地址
	printf("%d\n", sizeof(&arr[0]+1));// 4- &arr[0]+1 是第二个元素的地址

	char* p = "abcdef";

	printf("%d\n", sizeof(p));// 4- 计算指针变量p的大小
	printf("%d\n", sizeof(p+1));// 4- p+1得到的是字符b的地址
	printf("%d\n", sizeof(*p)); // 1- *p就是字符串的第一个字符'a'
	printf("%d\n", sizeof(p[0]));// 1- int arr[10]; arr[0]==*(arr+0) p[0]==*(p+0)=='a'
	printf("%d\n", sizeof(&p));//  4- p的地址
	printf("%d\n", sizeof(&p+1));// 4- 还是地址
	printf("%d\n", sizeof(&p[0]+1)); // 4- 地址

	printf("%d\n", strlen(p));// 6- strlen从a开始数，数到/0之前
	printf("%d\n", strlen(p + 1));// 5- strlen从b开始数，数到/0之前 
	printf("%d\n", strlen(*p)); // error- 是字符
	printf("%d\n", strlen(p[0]));// error- 是字符
	printf("%d\n", strlen(&p));// 随机值- p放的是'a'的地址什么时候遇到/0不确定
	printf("%d\n", strlen(&p + 1));// 随机值- 不可预知
	printf("%d\n", strlen(&p[0] + 1)); // 5- 从b的位置向后数

	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0]+1));
	printf("%d\n", sizeof(*(a[0]+1)));
	printf("%d\n", sizeof(a+1));
	printf("%d\n", sizeof(*(a+1)));
	printf("%d\n", sizeof(&a[0]+1));
	printf("%d\n", sizeof(*(&a[0]+1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	return 0;
}