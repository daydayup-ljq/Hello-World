#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	float a = 5 / 2.0;//商2余1,取商
//	int b = 5 % 2;//商2余1,取余
//	printf("a=%lf\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 16;
//	//整数的二进制表示有：原码，反码，补码
//	//内存中存储的是补码
//	int b=a >> 1;
//	//右移操作符
//	//移动的是二进制位
//	//00000000000000000000000000000010000
//	printf("%d\n", b);
//	return 0;
//}

int mian()
{
	int a = 5;
	int b = a << 1;
	//00000000000000000000000000000101
	printf("%d\n", b);
	return 0;
}