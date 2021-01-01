#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	//int age = 10;//空语句
	//if (age < 18)
	//	printf("未成年\n");
	//else if (age >= 18 && age <= 25)
	//	printf("青年\n");
	//else if (age > 25 && age <= 60)
	//	printf("中年");
	//else
	//	printf("老年");

	//int a = 0;
	//int b = 1;
	//if (a == 1)
	//
	//	if (b == 1)
	//		printf("hahaha\n");
	//	else//else和最近的未匹配的if匹配
	//		printf("xixixix\n");
	//

	//int num = 4;
	//if (num = 5);//等号是赋值
	//{
	//	printf("hehe");//打印hehe
	//}
	

	//int i = 1;
	//while (i <= 100)
	//{
	//	if (i % 2 == 0)
	//	
	//		printf("%d ", i);
	//		i++;
	//	
	//}
	//	

	//int day = 0;
	//scanf("%d", &day);
	//if (day == 1)
	//{
	//	printf("weekday1\a");
	//}
	//if (day == 2)
	//{
	//	printf("weekday2\a");
	//}
	//if (day == 3)
	//{
	//	printf("weekday3\a");
	//}


	//
	//int week = 0;
	//scanf("%d", &week);
	//switch (week)
	//{
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;			
	//case 4:	
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期天\n");
	//	break;
	//}

	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{

	//case 1:
	//	if (day == 1) {
	//		printf("hardworking\n");
	//	}
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("工作日\n");
	//	break;
	//case 6:
	//case 7:
	//	printf("休息日\n");
	//	break;
	//default:
	//	printf("无法识别");
	//}

//int n = 1;
//int m = 2;
//switch (n)
//{//switch 允许嵌套使用
//case 1:m++;
//case 2:n++;
//	switch (n)
//	{
//	case 1:n++;
//	case 2:m++; n++; break;	
//	}
//case 4:m++;
//	break;
//
//default :
//	break;
//}
//printf("m=%d,n=%d", m, n);
//int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			i++;
//			/*break;*///永久终止循环
//			continue;//满足条件时跳出本次条件的循环
//		printf("%d\n", i);
		
		int ch = 0;
		while ((ch = getchar()) != EOF)
		{
			putchar(ch);
		}
		return 0;
	}

