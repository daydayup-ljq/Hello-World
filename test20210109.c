#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int  my_strlen(char* str)
//{
//	//int count = 0;
//	//while (*str != 0)
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//	//�����ǲ�������ʱ�����ķ���
//	if (*str != '\0')
//		return  1+my_strlen(str + 1);
//	//str +1��Ϊ�˲��ϵ����°������»�С
//	else
//	{
//		return 0;
//	}
//}
//int main() {
//
//	//char arr[] = "bit";
//	//int len = my_strlen(arr);//arr�����飬����ȥ���ǵ�һ��Ԫ�صĵ�ַ
//
//	//printf("len=%d\n", len);
//
//
//
//	return 0;
//}

//������׳�
//int Facl(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Facl(n - 1);
//}
//int main() {
//	int num = 0;
//	int fce = 0;
//	scanf("%d", &num);
//	 fce = Facl(num);
//	printf("%d\n", fce);
//	return 0;
//}

//������n��쳲�������
//
//int Fib(int n)
//{
//	if (n <= 2)
//	
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//	
//}
//
////�ٶȼ���
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//ִ�����ξ͹���
//	}
//	return c;
//}
//int main() {
//	int n = 0;
//	int ret = 0;
//	int ret2 = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	ret2 = Fib2(n);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//}

