#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//	//EOF=end of file文件结束标志
//	//{
//	//	putchar(ch);
//	//}
//
//	//int ret = 0;
//	//int ch = 0;
//	//char password[20] = { 0 };
//	//printf("请输入密码：\n");
//	//scanf("%s", password);
//	////缓冲区还剩余一个\n
//	////读走\n
//	//while ((ch = getchar()) != '\n')
//	//{
//
//	//}
//	//printf("请输入(Y/N):>\n");
//	//ret = getchar();
//	//if (ret == 'Y')
//	//{
//	//	printf("确认成功\n\a");
//	//}
//	//else
//	//{
//	//	printf("放弃确认\n\a");
//	//}
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0'||ch>'9')
//		{
//			continue;
//		}
//		else
//		{
//			putchar(ch);
//		}
//		
//	}
//	return 0;
//}

// int main() {
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//
//
//	return 0;
//}

//int main()
//{
//	//for (;;)//for循环可以省略
//	//{
//	//	printf("hehehe\n");
//	//}
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	for (int j = 0; j < 10; j++)
//	//	{
//	//		printf("hahahaha\n");
//	//	}
//	//}
//	//10*10=100;
//
//	//int a = 0;
//	//int b = 0;
//	//for (; a < 10; a++)
//	//{
//	//	for (; b < 10; b++)
//	//	{
//	//		printf("xixixi\n");
//	//	}
//	//}
//
//	//
//	return 0;
//}

//int main() {
//	//int x, y;
//	//for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
//	//{
//	//	printf("hehehe\n");
//	//}
//
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		//条件为真才可以循环
//		//0为假，k=0一次都不循环
//		k++;
//	return 0;
//}

//int main() {
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	}
//	while (i <= 10);
//
//	return 0;
//
//}

//int main() {
//	//n的阶乘
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//
//	return 0;
//}
//int main() {
	////1!+2!+3!...+10! 方法一
	//int sum = 0;
	//double ret[10] = { 1 };
	//for ( int  a = 1; a <= 10; a++) {
	//	    
	//		ret[a] = ret[a-1] * a;
	//		printf("ret=%lf\n", ret[a]);

	//	}
	//sum = sum + ret;
	//printf("1!+2!+3!...+10!=%d\n", sum);
	//int main() {
	////1!+2!+3!...+10!  方法二
	//int ret = 1;
	//int sum = 0;
	//int a = 0;
	//for ( a = 1; a <= 10; a++) {
	//	for (int i = 1; i <= a; i++)
	//	{
	//		ret = ret * i;
	//	}
	//	printf("ret=%d\n", ret);
	//	sum = sum + ret;
	//	ret = 1;
	//}
	//printf("1!+ 2!+ 3!... + 10 != %d\n", sum);
	//
	//return 0;
	//}

//int main() {
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("1!+ 2!+ 3!... + 10 !=%d\n", sum);
//
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (k == sz)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//int main() {
//
//	int k = 0;
//	scanf("%d", &k);
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//
//
//		int mid = (left + right) / 2;
//		
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	
//	return 0;
//}

