#define _CRT_SECURE_NO_WORINGS

#include <stdio.h>
#include<string.h>
//int main() {	
//	char arr1[] = "abc";
//	//字符串末尾默认放置\0，是字符串的结束标志
//	char arr2[] = { 'a','b','c' ,'\0'};
//	char arr3[] = { 'a','b','c'  };//无结束符，后续全为乱码
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//	return 0;
//}
//#define 定义的标识符常量


//int main()
//{
//	//int num1 = 0;
//	//int num2 = 0;
//	//int sum = 0;
//	//scanf("%d%d", &num1, &num2);
//	////scanf_s无法跨平台具有局限性,只需要在源文件第一行添加#define _CRT_SECURE_NO_WORINGS
//	////或者
//	//
//	//sum = num1 + num2;
//	//printf("sum=%d\n", sum);
//	//return;


//int main() {
//	//const修饰的常变量无法再被重新赋值
//	//const-常属性
//	/*const int num = 4;
//	//printf("%d\n", num);*/
//	// int  num = 8;
//	//   printf("%d\n", num);
//	   //const int n = 10;
//	   //int arr[n] = { 10 };//表达式必须含有常变量的值
//}
//#define MAX 10//define 定义的标识符常量
//int main(){
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//
//	return;
//}

////枚举关键-enum
//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//     int main() {
//		 //printf("sex= %d\n", MALE);//0
//		 //printf("sex= %d\n", FEMALE);//1
//		 //printf("sex= %d\n", SECRET);//2
//		 //int sum = 0;//小验证
//		 //sum = FEMALE + SECRET;
//		 //printf("sum=%d\n", sum);
//
//		 enum Color color = BLUE;
//		 color = YELLOW;
//		 printf("color = %d\n", RED);
//		 printf("color = %d\n", YELLOW);
//		 printf("color = %d\n", BLUE);
//		 printf("color = %d\n", color);
//
//
//
//		 return;
//
//}

//转义字符
//    \n
//\ddd 一到三个八进制字符转十进制对应的ASCII表字符
//\x dd  一到三个十六进制字符转十进制对应的ASCII表字符
//\r 回车
//\v 垂直制表符
//\t 水平制表符
//\a 警告蜂鸣
//\\ 反斜杠放置字符被解释为一个转义序列符
//\b 退格
//\f 进纸符

//int main() {
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,"\0" };//\0不计入字符串长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return;
//
//}
//int main()
//{
//	int line = 0;
//	printf("好好学代码\n");
//	while(line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	printf("可以好好照顾觉觉\n");
//	return 0;
//
//	
//
//}
// int Add(int x, int y) 
// {
//	 int z = x + y;
//	 return z;
//}
//
// int main() 
// {
//	 int num1 = 10;
//	 int num2 = 20;
//	 int sum = 0;
//	 sum = Add(num1, num2);
//	 printf("sum=%d\n", sum);
//	
//	 int a =0;
//	 int b =0;
//	 scanf("%d%d", &a, &b);
//	 int sum1 = 0;
//	 sum1 = Add(a, b);
//	 printf("sum1=%d\n", sum1);
//
//	 return 0;
// }
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", arr[4]);//用下标的方式访问元素
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}
//

#include <stdio.h>
int main() {
	//int a = 5 % 2;//取余
	//printf("%d\n", a);
	int a = 10;
	a = a + 10;
	printf("%d\n", a);

	int b = 10;
	b += 10;
	printf("%d\n", b);

	return;
}
