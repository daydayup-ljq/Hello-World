#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int count_bit_one(unsigned int n)//�޷�������
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int count_bit_one(int n)//��λ�뷽��
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit_one(int n)//�ȸ辭�������
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//
//	}
//	return count;
//}
//n=n&(n-1)
//n
//int main()
//{
//	//ͳ�ƶ����������м���1
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������a�ö����ƣ����룩��ʾ���м���1
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//	system("pause");//�⺯��ִ������-pause(��ͣ)
//	return 0;
//}

//����������в�ͬ�ĸ���
//int get_diff_bit(int m, int  n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	get_diff_bit(m, n);
//	printf("count = %d\n", count);
//	return 0;
//}

//��ӡ�����Ƶ�����λ��ż��λ
//void print(int m)
//{
//	int i = 0;
//	printf("����λ�� \n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ: \n");
//	for (i = 31; i >=1 ; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print( m);
//	return 0;
//}
//��ָ���ӡ��������
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}

//�˷��ھ���
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//	
//}

//��Ŀ���ƣ�
//�ַ������򣨵ݹ�ʵ�֣�
//��Ŀ���ݣ�
//��дһ������reverse_string(char*string)(�ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ���������
//Ҫ�󣺲���ʹ��c�������е��ַ���������

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

