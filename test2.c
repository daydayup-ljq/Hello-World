#
//����һ����stdio.h���ļ�

//std-��׼ standard input output

//int num2 = 20;//ȫ�ֱ����������ڴ���������
//int main()//int�����ε���˼��������-�������-main��������ֻ��һ��
//{
//	//���������������Ļ��������Ϻþ���
//	//����-print function-��ӡ����
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//���˵Ķ���-���к�
//	//#include
//	//char ch = 'A';
////	printf("%c\n",ch);
//	/*int age = 20;
//	printf("%d\n", age);*/
//	//float f = 5.0;
//	//printf("%f/n", f);
//
//	//printf("%d\n", sizeof(double));8
//	//printf("%d\n", sizeof(short));2
//	//printf("%d\n", sizeof(int));4
//	//printf("%d\n", sizeof(long));4
//	//printf("%d\n", sizeof(long long));8
//	//printf("%d\n", sizeof(float));4
//	/*short age = 20;���ڴ����������ֽ�*/
//	int num = 10;//�ֲ�����-�����ڴ�����ڲ�
//	return 0;//����0��
//}


// char �ַ����� ����''��ס�ַ�������һ���ռ�  char ch='A';
//%d ��ӡ����
//%f ��ӡ�����ͣ��������С��λ��
//%p �Ե�ַ����ʽ��ӡ
//%x ��ӡʮ������
//%c ��ӡ�ַ�
//float  �����ȸ�����
//double ˫���ȸ�����




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()

{

	int num1 = 10;
	int num2 = 20;
	printf("num1= %d\n", num1);
	printf("num2= %d\n", num2);
	int sum = 0;
	sum = num1 + num2;
	/*scanf("%d%d\n", &num1, &num2);*/
	printf("sum = %d\n", sum);
	

	return ;
}