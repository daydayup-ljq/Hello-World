#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����������������������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//�Ӽ���-���ܻ����
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//
//	//���-�ɶ��Խϲ�
//	int c = 3;
//	int d = 5;
//	c = c ^ d;
//	d = c ^ d;//c�ٺ�d�����Եõ�ԭ����c
//	c = c ^ d;//d�ٺ�c�����Եõ�ԭ����d
//	printf("c=%d d=%d\n", c, d);
//
//	return 0;
//}

//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//����һ:
//	/*while (num != 0)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	*/
//	//������:
//	/*int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);*/
//	return 0;
//}
////�������ѭ��32��
//������
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("��������1�ĸ���=%d\n", count);
//	return 0;
//}

//int main()
//{
//	//��ֵ������
//	int a = 10;
//	int x = 20;
//	x = a;
//	a = a >> 1;
//	a >>= 1;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n",a);//15
//	a= a & (~(1 << 2));
//	printf("%d\n", a);//11
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//		//1<<2
//
//
//	
//	//~����2���ƣ�λȡ��
//	//000000000000000000000000000000000
//	//111111111111111111111111111111111 -����
//	//111111111111111111111111111111110 -����
//	//100000000000000000000000000000001 -ԭ��
//	//-1
//	/*printf("%d\n", ~a);*/
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int e = 0;
//	int c = e && b;
//	int d = e || a;//e��a��
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	//��������Ľ����ʲô
	return 0;
}