#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//�������
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�a��һ������
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum +=ret ;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

////ˮ�ɻ�������λ��������
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//       //�ж�i�Ƿ�Ϊˮ�ɻ�������������
//	   //1. ����i��λ�� - nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /=10)
//		{
//			n++;
//				 
//		}
//		//123/10!=0 n++
//		//12/10!=0 n++
//		//1/10=0 
//
//		//2.����i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//				tmp /= 10;
//		}
//		//3.�Ƚ�i == sum;
//		if (i == sum)
//		{
//			printf("%d  ", i);
//		}
//	}
//}

////��ӡ����ͼ��
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	struct student
//	{
//
//		int num;
//		char name[32];
//		float score;
//	}stu;//stu���û�����Ľṹ�������
//	return 0;
//}


////����⣬����ˮ��һƿ��ˮһԪ��������ƿ���Ի�һƿ��ˮ��20Ԫ���Ի�������ˮ
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;//��ƿ
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total+=empty / 2;
//		empty=empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}

//����һ�����֣���ż����ǰ�������ں�

void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		//�������ż��
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//���ұ�������
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}