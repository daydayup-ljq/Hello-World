#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	float a = 5 / 2.0;//��2��1,ȡ��
//	int b = 5 % 2;//��2��1,ȡ��
//	printf("a=%lf\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 16;
//	//�����Ķ����Ʊ�ʾ�У�ԭ�룬���룬����
//	//�ڴ��д洢���ǲ���
//	int b=a >> 1;
//	//���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	//00000000000000000000000000000010000
//	printf("%d\n", b);
//	return 0;
//}

int mian()
{
	int a = 5;
	int b = a << 1;
	//00000000000000000000000000000101
	printf("%d\n", b);
	return 0;
}