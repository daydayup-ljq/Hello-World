#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main() {
//	int arr[] = { 1,2,7,3,4,5,4,3,2,1,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//������
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//
//
//		if (count == 1)
//		{
//			printf("�����ǣ�%d \n", arr[i]);
//			
//		}
//	}
//		
//
//	return 0;
//}

//int main() {
//	//3^3=0
//	//011
//	//011
//	//5^5=0
//	//0^5=5
//	//0^a=a
//	//3^5^3=5
//	//3^3^5=5
//	//������㽻����
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("singledog: %d\n", ret);
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ĵ��Խ��������Ӻ�ػ��������룺������������  ����ֹ����\n");
//	
//	scanf("%s", input);
//	if (strcmp(input ,"������������")==0)//�ж�input�зŵ��ǲ��ǡ������������ҡ�
//	{
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	
//
//	return 0;
//}
//

//int main()
//{
//	char ch1[] = { "hello" };
//	char ch2[] = { "******" };
//	strcpy(ch2, ch1);
//	printf("%s\n", ch2);
//
//	char ch[] = "dacongmingyinfeng";
//	memset(ch, '*', 10);
//	printf("%s\n", ch);
//
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//
//int main() {
//	/*printf("heheh\n");
//	main();
//	return 0;*/
//
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//�ݹ������ÿһλ�ϵ�����
//	print(num);
//	return 0;
//}