#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

//int main()
//{
//	
//	int arr[10] = { 1,2,3,4,5 };
//	//arr是首元素地址
//	int* p = arr;
//	//*(p + 2) == p[2] ==> *(arr+2) == arr[2]
//
//		int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//		int* ptr1 = (int*)(&aa + 1);
//		//取出二维数组的地址+1，相当于跳过整个二维数组
//
//		int* ptr2 = (int*)(*(aa + 1));//aa[1]
//		//aa[1] - 第二行首元素地址
//
//		printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//		return 0;
//
//	
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//a是个字符指针的数组
//	//每个字符串的首元素地址都放进a中，且a的首元素是'w'
//
//	char** pa = a;
//	//char* *pa=a
//	//*pa表示pa是指针，char*表示pa指向的元素是char*
//
//
//	pa++;
//	//表示跳过一个char*，指向第二个元素
//	
//	printf("%s\n", *pa);//以a的地址为开头打印一个字符串'at'
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";//把常量字符串首字符的地址放进p中
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//拿到c+2的内容，c+2又是'P'的地址，打印出'POINT'
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n",*cpp[-2]+3 );
//	printf("%s\n",cpp[-1][-1]+1 );
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) = *(pulPtr + 3)+ 3;
//
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	// 6 ,12
//
//	return 0;
//}


//字符串逆序
void reverse(char* str)
{
	 assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;

	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[256] = { 0 };
	//scanf("%s", arr);//abcdef ---> fedcba
	gets (arr);
	//逆序函数
	reverse(arr);

	printf("逆序后的字符串: %s\n", arr);
	return 0;

}