#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//signal��һ����������
//	//signal�����Ĳ�������������һ����int,�ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int,����������void
//	//signal�����ķ�������Ҳ��һ��ָ�뺯�����ú���ָ��ָ��ĺ����Ĳ�����int������������void
//	void(*signal(int, void(*)(int)))(int);
//	//��
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//
//	typedef unsigned int uint;
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;//Add��pa��һ����
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", (*pa)(2, 3));//*�Ǹ����裬���ں���ָ����˵ǰ���*��û�ж��ļ�ֵ
//	//pa�Ǹ�ֵ�Ļ���*pa����ȥ�����ã��ҵ��Ǹ�������Ȼ��ȥ������
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//
//	int (*pa)(int, int) = Add;//Sub,Mul,Div,
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5,-1,6,0
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
//
////2.дһ������ָ�����飬�ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);

//����ָ������ʹ�ð���
void menu()
{
	printf("****************************\n");
	printf("*******1. add    2. sub*****\n");
	printf("*******3. mul    4. div*****\n");
	printf("************0.exit**********\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��:  \n");
		scanf("%d%d", &x, &y);
		int ret = pfArr[input](x, y);
		printf("%d\n", ret);
		if (input >= 1 && input <= 4)
		{
			printf("������������������ \n");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	

	
}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//
//		menu();
//		printf("��ѡ��  \n");
//		scanf("%d", &input);
//		printf("����������������:  \n");
//		scanf("%d%d", &x, &y);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�������   \n");
//			break;
//		default:
//			printf("ѡ�����      \n");
//			break;
//
//		}
//	} while (input);
//
//}