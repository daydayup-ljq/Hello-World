#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//int main() {
//	char ch1[] = { "Love you more than good morning and good night" };
//	char ch2[] = { "**********************************************" };
//	int left = 0;
//	int right = strlen(ch1) - 1;//不包含\0
//	printf("最后一个元素的下标为:%d\n", right);
//
//	while (left <= right)
//	{
//		ch2[left] = ch1[left];
//		ch2[right] = ch1[right];
//		printf("%s\n", ch2);
//		//休息一秒
//		Sleep(750);
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//
//	}
//	return 0;
//	
//}

//模拟登录密码，输入三次错误退出登录
//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password ,"517828LJJ")== 0)//等号不能用来比较两个字符串是否想等
//			//应该使用一个库函数-strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误,请重新输入\n");
//		}
//	}
//	if (i = 3)
//	{
//		printf("三次密码均错误，退出登录！！！");
//	}
//
//}

//写代码，将三个数从大到小输出
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d,%d,%d", &a,&b,&c);// 2 1 3
//	//a放最大值，b次之，c最小
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//写一个代码打印出一到一百之间三的倍数

//int main() {
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//求m和n的最大公约数,辗转相除法
//int main() {
//	int m = 0;
//	int n = 0;
//	int tmp = 0;
//	scanf("%d,%d", &m, &n);
//		while (tmp=m%n)
//		{
//			/*tmp = m % n;*/
//			m = n;
//			n = tmp;
//		}
//		printf("最大公约数为%d\n", n);
//		return 0;
//}

////打印2000到3000年间的闰年
//int main() {
//	int year = 0;
//	int count = 0;
//	for (year = 2000; year <= 3000; year++)
//	{
//		//判断year是否为闰年
//		//能被4整除并且不能被100整除，是闰年
//		//或能被400整除是闰年
//		
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d  ", year);
//			count++;
//		}
//
//		else if (year % 400 == 0)
//		{
//			printf("%d  ", year);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//写个代码打印100-200之间的素数
//素数求解的N种办法
//int main() {
//	int i = 0;
//	int count = 0;
//	// sqrt-开平方的数学库函数
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2-i-1的数字去测试13能不能被整除
//
//		int j = 0;
//		for(j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("素数=%d ", i);
//			count++;
//			
//		}
//	}
//	printf("一共有%d 个素数", count);
//
//
//	int a = 0;
//	int c = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int b = 0;
//		for (b = 2; b <= sqrt(a); b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (b > sqrt(a))
//		{
//			c++;
//			printf("%d \n", a);
//		}
//	}
//
//	printf("素数一共有%d \n ", c);
//
//
//	return 0;
//}

////编写一个代码，一到一百的整数中一共有多少个9
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count ++;
//		}
//	    if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("一共有%d\n 个九", count);
//}


////计算1/1-1/2+1/3-1/4....-1/100的值
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=flag* 1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

////求十个数最大值
//int main() {
//	int arr[] = { 1,2,3,11,5,6,7,8,-9,10};
//	int max = arr[0];//最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//int main() {
//	int b = 0;
//	int c = 0;
//	
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		
//		for (b = 1; b <= i; b++)
//		{
//			c = i * b;
//			printf("%d*%d=%-2d ",i,b,c);//%2d两位右对齐，%-2d两位左对齐
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

////猜数字游戏
////1.电脑生成随机数
////2.猜数字
//void menu()
//{
//	printf("**********************************\n");
//	printf("******   1.play    0.exit   ******\n");
//	printf("**********************************\n");
//}
//
////RAND_MAX
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	//1.拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//时间戳
//	 ret = rand()%100+1;
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//	
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int) time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0  ;
//}

int main() {
	char input[20] = { 0 };
	//shutdown-s-t 60
	system("shutdown -s -t 30");
	again:
	printf("请注意，你的电脑将在半分钟内关机，如果输入：我是猪，就取消关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}