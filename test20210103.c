#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//int main() {
//	char ch1[] = { "Love you more than good morning and good night" };
//	char ch2[] = { "**********************************************" };
//	int left = 0;
//	int right = strlen(ch1) - 1;//������\0
//	printf("���һ��Ԫ�ص��±�Ϊ:%d\n", right);
//
//	while (left <= right)
//	{
//		ch2[left] = ch1[left];
//		ch2[right] = ch1[right];
//		printf("%s\n", ch2);
//		//��Ϣһ��
//		Sleep(750);
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		left++;
//		right--;
//
//	}
//	return 0;
//	
//}

//ģ���¼���룬�������δ����˳���¼
//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password ,"517828LJJ")== 0)//�ȺŲ��������Ƚ������ַ����Ƿ����
//			//Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������,����������\n");
//		}
//	}
//	if (i = 3)
//	{
//		printf("��������������˳���¼������");
//	}
//
//}

//д���룬���������Ӵ�С���
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d,%d,%d", &a,&b,&c);// 2 1 3
//	//a�����ֵ��b��֮��c��С
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//дһ�������ӡ��һ��һ��֮�����ı���

//int main() {
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//��m��n�����Լ��,շת�����
//int main() {
//	int m = 0;
//	int n = 0;
//	int tmp = 0;
//	scanf("%d,%d", &m, &n);
//		while (tmp=m%n)
//		{
//			/*tmp = m % n;*/
//			m = n;
//			n = tmp;
//		}
//		printf("���Լ��Ϊ%d\n", n);
//		return 0;
//}

////��ӡ2000��3000��������
//int main() {
//	int year = 0;
//	int count = 0;
//	for (year = 2000; year <= 3000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//�ܱ�4�������Ҳ��ܱ�100������������
//		//���ܱ�400����������
//		
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d  ", year);
//			count++;
//		}
//
//		else if (year % 400 == 0)
//		{
//			printf("%d  ", year);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//д�������ӡ100-200֮�������
//��������N�ְ취
//int main() {
//	int i = 0;
//	int count = 0;
//	// sqrt-��ƽ������ѧ�⺯��
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2-i-1������ȥ����13�ܲ��ܱ�����
//
//		int j = 0;
//		for(j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("����=%d ", i);
//			count++;
//			
//		}
//	}
//	printf("һ����%d ������", count);
//
//
//	int a = 0;
//	int c = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int b = 0;
//		for (b = 2; b <= sqrt(a); b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (b > sqrt(a))
//		{
//			c++;
//			printf("%d \n", a);
//		}
//	}
//
//	printf("����һ����%d \n ", c);
//
//
//	return 0;
//}

////��дһ�����룬һ��һ�ٵ�������һ���ж��ٸ�9
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count ++;
//		}
//	    if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("һ����%d\n ����", count);
//}


////����1/1-1/2+1/3-1/4....-1/100��ֵ
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=flag* 1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

////��ʮ�������ֵ
//int main() {
//	int arr[] = { 1,2,3,11,5,6,7,8,-9,10};
//	int max = arr[0];//���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main() {
//	int b = 0;
//	int c = 0;
//	
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		
//		for (b = 1; b <= i; b++)
//		{
//			c = i * b;
//			printf("%d*%d=%-2d ",i,b,c);//%2d��λ�Ҷ��룬%-2d��λ�����
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

////��������Ϸ
////1.�������������
////2.������
//void menu()
//{
//	printf("**********************************\n");
//	printf("******   1.play    0.exit   ******\n");
//	printf("**********************************\n");
//}
//
////RAND_MAX
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	//1.��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	//ʱ���
//	 ret = rand()%100+1;
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//	
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int) time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0  ;
//}

int main() {
	char input[20] = { 0 };
	//shutdown-s-t 60
	system("shutdown -s -t 30");
	again:
	printf("��ע�⣬��ĵ��Խ��ڰ�����ڹػ���������룺��������ȡ���ػ�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}