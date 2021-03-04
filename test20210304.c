#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
//int main()
//{
//	char arr[] = "217@749@3804@qq.com";
//	char* p = "@";
//	
//	char buf[1024] = {0};
//	strcpy(buf, arr);
//	//切割buf中的字符串
//
//	//char *ret=strtok(arr, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//char* ret2 = NULL;
//	//for (ret2 = strtok(arr, p); ret2 != NULL; ret2 = strtok(NULL, p))
//	//{
//	//	printf("%s\n", ret2);
//	//}
//
//
//	return 0;
//}

//int main()
//{
	//错误码   错误码
	//0 - No error
	//1 - Operation not permitted
	//2 - No such file or directory
	//....
	//errno 是一个全局的错误码的变量
	//当C语言的库函数在执行的过程中，发生了错误，就会把对应的错误码，赋值到errno中
	//char* str = strerror(errno);
	//printf("%s\n", str);

	//打开文件
//	FILE* pf=fopen("test20210304.c", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file sucess\n");
//	}
//	return 0;
//}

int main()
{
	char ch = '2';
	int ret = islower(ch);
	int ret1 = isdigit(ch);
	printf("%d %d\n", ret,ret1);

	char ch1 = tolower('Q');//大写转小写
	putchar(ch1);

	char ch2 = toupper('q');//小写转大写
	putchar(ch2);

	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i]=tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}