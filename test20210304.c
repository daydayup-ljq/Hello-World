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
//	//�и�buf�е��ַ���
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
	//������   ������
	//0 - No error
	//1 - Operation not permitted
	//2 - No such file or directory
	//....
	//errno ��һ��ȫ�ֵĴ�����ı���
	//��C���ԵĿ⺯����ִ�еĹ����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
	//char* str = strerror(errno);
	//printf("%s\n", str);

	//���ļ�
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

	char ch1 = tolower('Q');//��дתСд
	putchar(ch1);

	char ch2 = toupper('q');//Сдת��д
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