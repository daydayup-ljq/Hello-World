#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	//strlen -- �� /0
//	int len = strlen("abcdef");
//	char arr[] = { 'a','b','c','d','e','f' };//'f'������ʲô��֪����һֱ���ҵ�\0����ֵΪ���
//	int len1 = strlen(arr);
//	printf("%d,%d\n", len,len1);
//	return 0;
//}\



////�����������Լ���strlen����
//int my_strlen(const char* str)//strָ�����ݲ��ɸı�
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
//		printf("hahah\n");//strlen�ķ�������Ϊsize_t == unsigned int
//		//���᷵�ظ���
//	}
//	else
//	{
//		printf("heheh\n");
//	}
//	return 0;
//}

//��������ʱ�������ַ�������


 char* my_strcpy(char* dest,const char*src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//����srcָ�򰺵��ַ�����destָ��Ŀռ䣬����'\0'
	while (*dest++=*src++)
	{
		;
	}
	//����Ŀ�Ŀռ����ʼλ��
	return ret;
}
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "bit";
	//strcpy(arr1, arr2);//arr1��Ŀ�ĵ�ַ��arr2�ǿ���Դͷ,/0Ҳ������ȥ��

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}