#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
//ָ�����������
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";

	printf("%d\n", strlen(arr));// 6- ����ʼλ�ã�������/0��++��ֻ��/0Ϊֹ
	printf("%d\n", strlen(arr + 0));// 6- arr��������������Ԫ�ص�ַ������ʼλ�ã�������/0��++��ֻ��/0Ϊֹ
	printf("%d\n", strlen(*arr)); // error- strlen���ܵ��Ǹ���ַ��arr����Ԫ�ص�ַ��*arr�����ַ�'a'��ֻ�ܰ�ASCLL97������ַ
	printf("%d\n", strlen(arr[1]));// error- ����һ��'b'������
	printf("%d\n", strlen(&arr)); //6- &arr��Ȼ�Ǵ���ʼλ�ÿ�ʼ������� - ����ĵ�ַ-����ָ�� char(*)[7]=&arr
	printf("%d\n", strlen(&arr + 1));// ���ֵ
	printf("%d\n", strlen(&arr[0] + 1));// 5- &arr[0]����a�ĵ�ַ��+1����b�ĵ�ַ����b��ʼ�����������/0֮ǰ��ֹ

	printf("%d\n", sizeof(arr));// 7- sizeof(arr)���������Ĵ�С����/0����Ϊֹ����λ�ֽ���7
	printf("%d\n", sizeof(arr+0));// 4- ������ǵ�ַ�Ĵ�С-arr +0����Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*arr)); // 1- *arr����Ԫ��,sizeof(*arr)������Ԫ�صĴ�С
	printf("%d\n", sizeof(arr[1]));// 1- arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&arr)); // 4- &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4��8���ֽڣ���ƽ̨
	printf("%d\n", sizeof(&arr+1));// 4- &arr+1��������������ĵ�ַ
	printf("%d\n", sizeof(&arr[0]+1));// 4- &arr[0]+1 �ǵڶ���Ԫ�صĵ�ַ

	char* p = "abcdef";

	printf("%d\n", sizeof(p));// 4- ����ָ�����p�Ĵ�С
	printf("%d\n", sizeof(p+1));// 4- p+1�õ������ַ�b�ĵ�ַ
	printf("%d\n", sizeof(*p)); // 1- *p�����ַ����ĵ�һ���ַ�'a'
	printf("%d\n", sizeof(p[0]));// 1- int arr[10]; arr[0]==*(arr+0) p[0]==*(p+0)=='a'
	printf("%d\n", sizeof(&p));//  4- p�ĵ�ַ
	printf("%d\n", sizeof(&p+1));// 4- ���ǵ�ַ
	printf("%d\n", sizeof(&p[0]+1)); // 4- ��ַ

	printf("%d\n", strlen(p));// 6- strlen��a��ʼ��������/0֮ǰ
	printf("%d\n", strlen(p + 1));// 5- strlen��b��ʼ��������/0֮ǰ 
	printf("%d\n", strlen(*p)); // error- ���ַ�
	printf("%d\n", strlen(p[0]));// error- ���ַ�
	printf("%d\n", strlen(&p));// ���ֵ- p�ŵ���'a'�ĵ�ַʲôʱ������/0��ȷ��
	printf("%d\n", strlen(&p + 1));// ���ֵ- ����Ԥ֪
	printf("%d\n", strlen(&p[0] + 1)); // 5- ��b��λ�������

	//��ά����
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0]+1));
	printf("%d\n", sizeof(*(a[0]+1)));
	printf("%d\n", sizeof(a+1));
	printf("%d\n", sizeof(*(a+1)));
	printf("%d\n", sizeof(&a[0]+1));
	printf("%d\n", sizeof(*(&a[0]+1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	return 0;
}