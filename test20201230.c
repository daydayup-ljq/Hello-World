#define _CRT_SECURE_NO_WORINGS
#include <stdio.h>
#include <string.h>

//#define MAX 3//define ����ĳ���
//int main() {
//	int arr[] = {1,2,3,4,5};
//	printf("%c\n", arr[MAX]);
//	printf("%d\n", MAX);
//	
//}

//MAX(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main() {
//	int num1 = 20;
//	int num2 = 10;
//	int max = MAX(num1, num2);
//	printf("�ϴ�ֵΪ%d\n", max);
//
//	return;
//
//}
//int main() {
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//�����С���Ե���Ԫ�ش�СΪԪ������
//	return 0;
//}
//int main() {
//	int a = 10;
//	int b = ++a;//ǰ��++����++����ʹ��
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	int c = 10;
//	int d = c++;//����++����ʹ�ã���++
//	printf("d=%d\n", d);
//	printf("c=%d\n", c);
//
//	int x = 10;
//	int y = --x;//ǰ��--����--����ʹ��
//	printf("%d\n %d\n", x, y);
//	
//	
//	return 0;
//}
//int main() {
//	int a = (int)3.14;//ǿ������ת�� double->int
//	return 0;
//}

//int main() {
//	//��-��0
//	//��-0
//	int a = 2;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	if (a < b)
//		max = b;
//	printf("max=%d\n", max);
//	return 0;
//}

//int Add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main() {
//	//int arr[10] = { 0 };
//	//arr[4];  //[]-�±����ò�����
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//}

//100000000000000000000000010 - ԭ��
//111111111111111111111111101 - ���� ԭ�����λ���䣬����λȡ��
//111111111111111111111111110 - ���� �����һ

//void test()
//{
//	//static ���ξֲ��������ֲ��������������ڱ䳤
// ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷���ʹ����
//
//	static int a = 1;//��һ����̬�ľֲ�����
//	a++;
//	printf("a=%d\n", a);
//}
//int main() {
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//
//}

//��ͨ�ĺ��������ⲿ���������ԣ������static�����ˣ��ͱ�����ڲ�����������

//extern int  Add(int, int);
//int main() {
//	int a = 4;
//	int b = 5;
//	int sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//��Ķ���
//#define MAX(X,Y)(X>Y?X:Y)
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

int main() {
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("ch=%c\n", ch);




	int a = 10;//44���ֽ�
	int* p = &a;//ȡ��ַ
	//*p:�����ò�����
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;
	printf("a=%d\n", a);
	return 0;
}