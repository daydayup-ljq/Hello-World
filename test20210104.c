#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
//对上周的学习进行一个大概的复习

#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<stdio.h>
#define MAX(X,Y)(X>Y?X:Y)//宏的定义
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
void test() {
	static int a = 0;
	a++;
	printf("%d\n", a);
}
//int main() {

	/*int i = 5;
	int p = 3;
	int max = MAX(i, p);
	int add = Add(i, p);
	printf("add=%d\n", add);
	printf("max=%d\n", max);*/

	//int i = 0;
	//int* p = &i;
	//*p = 10;
	//printf("i=%d\n", i);
	//char ch[] = "ab cd\0";
	//printf("修改前ch=%s\n", ch);
	//printf("%d\n",strlen(ch));
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(double));//8	
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(long));//4
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(char));//1
		/*char a[12] = { "good morning" };*/
		//a有两个含义，一是a这个数组第一个位置的地址也就是a[0]的地址
		//也就是a等价于&a[0]
		//还有一个含义是指代a整个数组。&a就是整个数组的首地址
		//所以a和&a取得的地址是相同的
		//不同的地方在于：a+1表示的是数组的第二个元素的地址
		//&a+1表示的是整个数组后又一个a的首地址
		//即&a[]后一个新的a数组的首地址
	/*	printf("a=%p\n", a);
		printf("a=%p\n", &a);
		printf("a=%p\n", a + 1);
		printf("a=%p\n", &a + 1);
		printf("a=%p\n", &a[12]);
		printf("%d\n",strlen(a));*/


	
	//const修饰的常变量
//#define MAX 2
//	const int num = 2;
//	int i = 2;
//	char ch2[] = { 'a','b','c','d' };
//	printf("%c\n", ch2[2]);
//	printf("%c\n", ch2[MAX]);
//	printf("%c\n", ch2[num]);
	//数组的表达式必须含有常变量的值

	//枚举
	//enum sex {
	//	male,
	//	female
	//};
	//printf("sex=%d\n", female);
	//printf("sex=%d\n", male);
	//char arr1[] = "abc";
	// printf("%d\n", strlen(arr1));
	// char arr2[] = { 'a','b','c','d' ,"\0" };//\0不计入字符串长度
	// printf("%d\n", strlen(arr2));
		
		//int const a = 10;
		// int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		// printf("%d\n", sizeof(arr[0]));
		// printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
		// printf("%d\n", sizeof(arr) / sizeof(arr[0]));
		// //数组大小除以单个元素大小为元素数量

	/*int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d%d", &a,& b);
	max = (a > b ? a : b);
	if (a > b)
		max = a;
	if (a < b)
		max = b;
	printf("max=%d\n", max);*/

	/*int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}*/
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'a';
//	printf("ch=%c\n", ch);
//	return 0;
//
//}

//struct Lover
//{
//	char name[20];//觉觉
//	short age;//20
//	char location[20];//湖北
//	char love[20];//贱贱
//};
//int main() {
//	struct Lover jj = { "觉觉",20,"湖北","贱贱" };
//	printf("修改前的名字%s\n", jj.name);
//	strcpy(jj.name, "小祖宗");
//	printf("修改后的名字%s\n", jj.name);
//	struct Lover* pj = &jj;
//	printf("指针指出来的名字=%s\n", pj->name);
//	printf("%s\n", (*pj).name);
//}

int main() {
	//int age = 10;
	//scanf("%d", &age);
	//if (age < 18)
	//	printf("未成年");
	//else if (age <= 25 && age >= 18)
	//{
	//	printf("青年人\n");
	//}

	//else if (age > 25 && age < 60)
	//{
	//	printf("中年人");
	//}
	//else if (age >= 60)
	//{
	//	printf("老年人");
	//}	
	//
	// int ch = 0;
 //while ((ch = getchar()) != EOF)
 // //EOF=end of file文件结束标志
 //{
 // putchar(ch);
 //}

 //int ret = 0;
 //int ch = 0;
 //char password[20] = { 0 };
 //printf("请输入密码：\n");
 //scanf("%s", password);
 ////缓冲区还剩余一个\n
 ////读走\n
 //while ((ch = getchar()) != '\n')
 //{

 //}
 //printf("请输入(Y/N):>\n");
 //ret = getchar();
 //if (ret == 'Y')
 //{
 // printf("确认成功,密码为%s\n\a",password);
 // 
 //}
 //else
 //{
 // printf("放弃确认\n\a");
 //}
	// int a = 0;
 //    int b = 0;
 //for (; a < 10; a++)
 //{
 // for (; b < 10; b++)
	//  //因为b没有在for循环里定义初始值
	//  //所以b循环只能进一次
 // {
 // printf("xixixi\n");
 // //只打印十个xixixi
 // }
// }
	// int i = 1;
 //do
 //{
 //printf("%d", i);
 //i++;
 //}
 //while (i <= 10);
 ////do-while循环，先循环再做判断


	////求阶乘
	//int i = 0;
	//int ret = 1;
	//int n = 0;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	ret=ret*i;
	//}
	//printf("%d\n", ret);

	//int i = 0;
	//int r = 0;
	//int sum = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	int tmp = 1;
	//	for (r = 1; r <= i; r++)
	//	{
	//		tmp = tmp * r;
	//	}
	//	printf("阶乘为%d\n", tmp);
	//	sum = sum +tmp;
	//}
	//printf("%d\n", sum);
	//
	
	/*int arr[] = { 14,20,32,41,8,6,17,82,9,10 };
	int k = 6;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <= sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了下标为%d\n", i);
			break;
		}
		if (k==sz)
		{
			printf("找不到");
			break;
		}
	}
	*/

//只适用按大小顺序排列的
 //int k = 0;
 //scanf("%d", &k);
 //int arr[] = { 14,20,32,41,8,6,17,82,9,10 };
 //int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
 //int left = 0;//左下标
 //int right = sz - 1;

 //while (left <= right)
 //{
 //int mid = (left + right) / 2;

 //if (arr[mid] > k)
 //{
 //right = mid - 1;

 //}
 //else if (arr[mid] < k)
 //{
 //left = mid - 1;
 //}
 //else
 //{
 //printf("找到了，下标是：%d\n", mid);
 //break;
 //}
 //}
 //if (left > right)
 //{
 //printf("找不到\n");
 //}

//int ch = 0;
//while ((ch = getchar())!=EOF)
//{
//	putchar(ch);
//}

//char ch1[] = { "Hello world" };
//char ch2[] = { "***********" };
//int left = 0;
//int right = strlen(ch1) - 1;
//while (left <= right)
//{
//	ch2[left] = ch1[left];
//	ch2[right] = ch1[right];
//	printf("%s\n", ch2);
//	system("cls");
//	Sleep(1000);
//	left++;
//	right--;
//}
//printf("%s\n", ch2);

//登录密码，三次错误后退出登录
//int i = 0;
//char password[20] = { 0 };
//for (i = 1; i <= 3; i++)
//{
//	printf("请输入密码：\n");
//	scanf("%s", password);
//	if (strcmp(password, "517828") == 0)
//	{
//		printf("登录成功\n");
//		break;
//	}
//	else {
//		printf("密码错误请重新输入\n");
//	}
//}
//if (i == 4)
//{
//	printf("三次密码均错误，退出登录\n");
//}

//写个代码将三个数从大到小输出
//int a = 0;
//int b = 0;
//int c = 0;
//scanf("%d,%d,%d",&a,&b,&c);
//if (a < b)
//{
//	
//	int temp = a;
//	a = b;
//	b = temp;
//}
//if (a < c)
//{
//	
//	int temp = a;
//	a = c;
//	c = temp;
//}
//if (b < c)
//{
//	
//	int temp = b;
//	b = c;
//	c = temp;
//}
//printf("%d,%d,%d\n", a,b,c);


	return 0;
}