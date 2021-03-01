#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	//strlen -- 找 /0
//	int len = strlen("abcdef");
//	char arr[] = { 'a','b','c','d','e','f' };//'f'后面是什么不知道，一直找找到\0，数值为随机
//	int len1 = strlen(arr);
//	printf("%d,%d\n", len,len1);
//	return 0;
//}\



////计数器定义自己的strlen函数
//int my_strlen(const char* str)//str指向内容不可改变
//{
//	assert(str != 0);
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hahah\n");//strlen的返回类型为size_t == unsigned int
//		//不会返回负数
//	}
//	else
//	{
//		printf("heheh\n");
//	}
//	return 0;
//}

//不创建临时变量求字符串长度


 char* my_strcpy(char* dest,const char*src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//拷贝src指向昂的字符串到dest指向的空间，包含'\0'
	while (*dest++=*src++)
	{
		;
	}
	//返回目的空间的起始位置
	return ret;
}
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "bit";
	//strcpy(arr1, arr2);//arr1是目的地址，arr2是拷贝源头,/0也拷贝进去了

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}