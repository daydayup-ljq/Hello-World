#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char* p  = "abcdef";
//
//	char* p2 = "bbcdef";
//	char* p3 = "abcdef";
//	int ret1 = strcmp(p, p2);
//	int ret2 = strcmp(p, p3);
//	printf("%d %d\n",ret1,ret2);
//
//	return 0;
//}


//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char* p1 = "abcd";
//	char* p2 = "abc";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hey";
//	char arr2[] = "hello world";
//	strncpy(arr2, arr1, 3);
//	printf("%s\n", arr2);
//}


//int main()
//{
//	//strncmp - 字符串比较可以指定大小，返回值和strcmp相同
//	const char* p1 = "abcdef";//后面跟的是常量字符串
//	const char* p2 = "abcqwer";
//	int ret = strcmp(p1, p2);
//	int ret1 = strncmp(p1, p2,3);
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	return 0;
//}


//strstr - 查找字符串

int main()
{
	char* p1 = "abcdeabcde";
	char* p2 = "de";
	char* ret =strstr(p1, p2);//p1字符串中p2第一次出现的地址
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}