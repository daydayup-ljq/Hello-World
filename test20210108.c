#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ӡһ�ٵ�����֮�������
//is_prime(int n)
//{//����������һ����������������
//	//����2��n-1������ȥ�Գ�
//	int j = 0;
//	for (j = 2; j < n; j++)//����j<sprt(n)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	        return 1;
//}
//int main() {
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�ǲ�������
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//}

//��ӡ��ǧ����ǧ��֮�������
//is_leap_year(int Y)
//{
//	if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main() {
//	int year = 0;
//	for (year = 2000; year <= 3000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d  ", year);
//		}
//	}
//	return 0;
//}

//ͨ���±�������,���ֲ���ֻ��Ѱ����������
//binary_search(int arr[], int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	return -1;
//	
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 2;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if(ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("i can find it:%d\n", ret);
//	}
//	
//}


//ADD(int* p)
//{
//	(*p)++;
//}
//
//int main() {
//	int num = 0;
//	ADD(&num);
//	printf("%d\n", num);
//	return 0;
//
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 543)));//543321
//	return 0;
//}

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}

int main() {
	/*printf("heheh\n");
	main();
	return 0;*/

	unsigned int num = 0;
	scanf("%d\n", &num);//1234
	//�ݹ�
	print(num);
	return 0;
}