#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//计算求和
//求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，a是一个数字
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum +=ret ;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

////水仙花数，三位的自幂数
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//       //判断i是否为水仙花数（自幂数）
//	   //1. 计算i的位数 - n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /=10)
//		{
//			n++;
//				 
//		}
//		//123/10!=0 n++
//		//12/10!=0 n++
//		//1/10=0 
//
//		//2.计算i的每一位的n次方之和 sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//				tmp /= 10;
//		}
//		//3.比较i == sum;
//		if (i == sum)
//		{
//			printf("%d  ", i);
//		}
//	}
//}

////打印菱形图案
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	struct student
//	{
//
//		int num;
//		char name[32];
//		float score;
//	}stu;//stu是用户定义的结构体变量名
//	return 0;
//}


////编程题，喝汽水，一瓶汽水一元，两个空瓶可以换一瓶汽水，20元可以换多少汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;//空瓶
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total+=empty / 2;
//		empty=empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}

//排列一串数字，让偶数在前，奇数在后

void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		//从左边找偶数
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//从右边找奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}