#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
//�����ܵ�ѧϰ����һ����ŵĸ�ϰ

#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<stdio.h>
#define MAX(X,Y)(X>Y?X:Y)//��Ķ���
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
void test() {
	static int a = 0;
	a++;
	printf("%d\n", a);
}
//int main() {

	/*int i = 5;
	int p = 3;
	int max = MAX(i, p);
	int add = Add(i, p);
	printf("add=%d\n", add);
	printf("max=%d\n", max);*/

	//int i = 0;
	//int* p = &i;
	//*p = 10;
	//printf("i=%d\n", i);
	//char ch[] = "ab cd\0";
	//printf("�޸�ǰch=%s\n", ch);
	//printf("%d\n",strlen(ch));
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(double));//8	
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(long));//4
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(char));//1
		/*char a[12] = { "good morning" };*/
		//a���������壬һ��a��������һ��λ�õĵ�ַҲ����a[0]�ĵ�ַ
		//Ҳ����a�ȼ���&a[0]
		//����һ��������ָ��a�������顣&a��������������׵�ַ
		//����a��&aȡ�õĵ�ַ����ͬ��
		//��ͬ�ĵط����ڣ�a+1��ʾ��������ĵڶ���Ԫ�صĵ�ַ
		//&a+1��ʾ���������������һ��a���׵�ַ
		//��&a[]��һ���µ�a������׵�ַ
	/*	printf("a=%p\n", a);
		printf("a=%p\n", &a);
		printf("a=%p\n", a + 1);
		printf("a=%p\n", &a + 1);
		printf("a=%p\n", &a[12]);
		printf("%d\n",strlen(a));*/


	
	//const���εĳ�����
//#define MAX 2
//	const int num = 2;
//	int i = 2;
//	char ch2[] = { 'a','b','c','d' };
//	printf("%c\n", ch2[2]);
//	printf("%c\n", ch2[MAX]);
//	printf("%c\n", ch2[num]);
	//����ı��ʽ���뺬�г�������ֵ

	//ö��
	//enum sex {
	//	male,
	//	female
	//};
	//printf("sex=%d\n", female);
	//printf("sex=%d\n", male);
	//char arr1[] = "abc";
	// printf("%d\n", strlen(arr1));
	// char arr2[] = { 'a','b','c','d' ,"\0" };//\0�������ַ�������
	// printf("%d\n", strlen(arr2));
		
		//int const a = 10;
		// int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		// printf("%d\n", sizeof(arr[0]));
		// printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
		// printf("%d\n", sizeof(arr) / sizeof(arr[0]));
		// //�����С���Ե���Ԫ�ش�СΪԪ������

	/*int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d%d", &a,& b);
	max = (a > b ? a : b);
	if (a > b)
		max = a;
	if (a < b)
		max = b;
	printf("max=%d\n", max);*/

	/*int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}*/
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'a';
//	printf("ch=%c\n", ch);
//	return 0;
//
//}

//struct Lover
//{
//	char name[20];//����
//	short age;//20
//	char location[20];//����
//	char love[20];//����
//};
//int main() {
//	struct Lover jj = { "����",20,"����","����" };
//	printf("�޸�ǰ������%s\n", jj.name);
//	strcpy(jj.name, "С����");
//	printf("�޸ĺ������%s\n", jj.name);
//	struct Lover* pj = &jj;
//	printf("ָ��ָ����������=%s\n", pj->name);
//	printf("%s\n", (*pj).name);
//}

int main() {
	//int age = 10;
	//scanf("%d", &age);
	//if (age < 18)
	//	printf("δ����");
	//else if (age <= 25 && age >= 18)
	//{
	//	printf("������\n");
	//}

	//else if (age > 25 && age < 60)
	//{
	//	printf("������");
	//}
	//else if (age >= 60)
	//{
	//	printf("������");
	//}	
	//
	// int ch = 0;
 //while ((ch = getchar()) != EOF)
 // //EOF=end of file�ļ�������־
 //{
 // putchar(ch);
 //}

 //int ret = 0;
 //int ch = 0;
 //char password[20] = { 0 };
 //printf("���������룺\n");
 //scanf("%s", password);
 ////��������ʣ��һ��\n
 ////����\n
 //while ((ch = getchar()) != '\n')
 //{

 //}
 //printf("������(Y/N):>\n");
 //ret = getchar();
 //if (ret == 'Y')
 //{
 // printf("ȷ�ϳɹ�,����Ϊ%s\n\a",password);
 // 
 //}
 //else
 //{
 // printf("����ȷ��\n\a");
 //}
	// int a = 0;
 //    int b = 0;
 //for (; a < 10; a++)
 //{
 // for (; b < 10; b++)
	//  //��Ϊbû����forѭ���ﶨ���ʼֵ
	//  //����bѭ��ֻ�ܽ�һ��
 // {
 // printf("xixixi\n");
 // //ֻ��ӡʮ��xixixi
 // }
// }
	// int i = 1;
 //do
 //{
 //printf("%d", i);
 //i++;
 //}
 //while (i <= 10);
 ////do-whileѭ������ѭ�������ж�


	////��׳�
	//int i = 0;
	//int ret = 1;
	//int n = 0;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	ret=ret*i;
	//}
	//printf("%d\n", ret);

	//int i = 0;
	//int r = 0;
	//int sum = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	int tmp = 1;
	//	for (r = 1; r <= i; r++)
	//	{
	//		tmp = tmp * r;
	//	}
	//	printf("�׳�Ϊ%d\n", tmp);
	//	sum = sum +tmp;
	//}
	//printf("%d\n", sum);
	//
	
	/*int arr[] = { 14,20,32,41,8,6,17,82,9,10 };
	int k = 6;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <= sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ����±�Ϊ%d\n", i);
			break;
		}
		if (k==sz)
		{
			printf("�Ҳ���");
			break;
		}
	}
	*/

//ֻ���ð���С˳�����е�
 //int k = 0;
 //scanf("%d", &k);
 //int arr[] = { 14,20,32,41,8,6,17,82,9,10 };
 //int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
 //int left = 0;//���±�
 //int right = sz - 1;

 //while (left <= right)
 //{
 //int mid = (left + right) / 2;

 //if (arr[mid] > k)
 //{
 //right = mid - 1;

 //}
 //else if (arr[mid] < k)
 //{
 //left = mid - 1;
 //}
 //else
 //{
 //printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
 //break;
 //}
 //}
 //if (left > right)
 //{
 //printf("�Ҳ���\n");
 //}

//int ch = 0;
//while ((ch = getchar())!=EOF)
//{
//	putchar(ch);
//}

//char ch1[] = { "Hello world" };
//char ch2[] = { "***********" };
//int left = 0;
//int right = strlen(ch1) - 1;
//while (left <= right)
//{
//	ch2[left] = ch1[left];
//	ch2[right] = ch1[right];
//	printf("%s\n", ch2);
//	system("cls");
//	Sleep(1000);
//	left++;
//	right--;
//}
//printf("%s\n", ch2);

//��¼���룬���δ�����˳���¼
//int i = 0;
//char password[20] = { 0 };
//for (i = 1; i <= 3; i++)
//{
//	printf("���������룺\n");
//	scanf("%s", password);
//	if (strcmp(password, "517828") == 0)
//	{
//		printf("��¼�ɹ�\n");
//		break;
//	}
//	else {
//		printf("�����������������\n");
//	}
//}
//if (i == 4)
//{
//	printf("��������������˳���¼\n");
//}

//д�����뽫�������Ӵ�С���
//int a = 0;
//int b = 0;
//int c = 0;
//scanf("%d,%d,%d",&a,&b,&c);
//if (a < b)
//{
//	
//	int temp = a;
//	a = b;
//	b = temp;
//}
//if (a < c)
//{
//	
//	int temp = a;
//	a = c;
//	c = temp;
//}
//if (b < c)
//{
//	
//	int temp = b;
//	b = c;
//	c = temp;
//}
//printf("%d,%d,%d\n", a,b,c);


	return 0;
}