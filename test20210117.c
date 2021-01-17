#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//不创建变量交换两个数字
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//加减法-可能会溢出
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//
//	//异或法-可读性较差
//	int c = 3;
//	int d = 5;
//	c = c ^ d;
//	d = c ^ d;//c再和d异或可以得到原来的c
//	c = c ^ d;//d再和c异或可以得到原来的d
//	printf("c=%d d=%d\n", c, d);
//
//	return 0;
//}

//编写代码实现，求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//方法一:
//	/*while (num != 0)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	*/
//	//方法二:
//	/*int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);*/
//	return 0;
//}
////这里必须循环32次
//方法三
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数=%d\n", count);
//	return 0;
//}

//int main()
//{
//	//赋值操作符
//	int a = 10;
//	int x = 20;
//	x = a;
//	a = a >> 1;
//	a >>= 1;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n",a);//15
//	a= a & (~(1 << 2));
//	printf("%d\n", a);//11
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//		//1<<2
//
//
//	
//	//~按（2进制）位取反
//	//000000000000000000000000000000000
//	//111111111111111111111111111111111 -补码
//	//111111111111111111111111111111110 -反码
//	//100000000000000000000000000000001 -原码
//	//-1
//	/*printf("%d\n", ~a);*/
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int e = 0;
//	int c = e && b;
//	int d = e || a;//e或a，
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	//程序输出的结果是什么
	return 0;
}