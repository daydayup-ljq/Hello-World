#define _CRT_SECURE_NO_WORINGS

#include <stdio.h>
#include<string.h>
//int main() {	
//	char arr1[] = "abc";
//	//�ַ���ĩβĬ�Ϸ���\0�����ַ����Ľ�����־
//	char arr2[] = { 'a','b','c' ,'\0'};
//	char arr3[] = { 'a','b','c'  };//�޽�����������ȫΪ����
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//	return 0;
//}
//#define ����ı�ʶ������


//int main()
//{
//	//int num1 = 0;
//	//int num2 = 0;
//	//int sum = 0;
//	//scanf("%d%d", &num1, &num2);
//	////scanf_s�޷���ƽ̨���о�����,ֻ��Ҫ��Դ�ļ���һ�����#define _CRT_SECURE_NO_WORINGS
//	////����
//	//
//	//sum = num1 + num2;
//	//printf("sum=%d\n", sum);
//	//return;


//int main() {
//	//const���εĳ������޷��ٱ����¸�ֵ
//	//const-������
//	/*const int num = 4;
//	//printf("%d\n", num);*/
//	// int  num = 8;
//	//   printf("%d\n", num);
//	   //const int n = 10;
//	   //int arr[n] = { 10 };//���ʽ���뺬�г�������ֵ
//}
//#define MAX 10//define ����ı�ʶ������
//int main(){
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//
//	return;
//}

////ö�ٹؼ�-enum
//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//     int main() {
//		 //printf("sex= %d\n", MALE);//0
//		 //printf("sex= %d\n", FEMALE);//1
//		 //printf("sex= %d\n", SECRET);//2
//		 //int sum = 0;//С��֤
//		 //sum = FEMALE + SECRET;
//		 //printf("sum=%d\n", sum);
//
//		 enum Color color = BLUE;
//		 color = YELLOW;
//		 printf("color = %d\n", RED);
//		 printf("color = %d\n", YELLOW);
//		 printf("color = %d\n", BLUE);
//		 printf("color = %d\n", color);
//
//
//
//		 return;
//
//}

//ת���ַ�
//    \n
//\ddd һ�������˽����ַ�תʮ���ƶ�Ӧ��ASCII���ַ�
//\x dd  һ������ʮ�������ַ�תʮ���ƶ�Ӧ��ASCII���ַ�
//\r �س�
//\v ��ֱ�Ʊ��
//\t ˮƽ�Ʊ��
//\a �������
//\\ ��б�ܷ����ַ�������Ϊһ��ת�����з�
//\b �˸�
//\f ��ֽ��

//int main() {
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,"\0" };//\0�������ַ�������
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return;
//
//}
//int main()
//{
//	int line = 0;
//	printf("�ú�ѧ����\n");
//	while(line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	printf("���Ժú��չ˾���\n");
//	return 0;
//
//	
//
//}
// int Add(int x, int y) 
// {
//	 int z = x + y;
//	 return z;
//}
//
// int main() 
// {
//	 int num1 = 10;
//	 int num2 = 20;
//	 int sum = 0;
//	 sum = Add(num1, num2);
//	 printf("sum=%d\n", sum);
//	
//	 int a =0;
//	 int b =0;
//	 scanf("%d%d", &a, &b);
//	 int sum1 = 0;
//	 sum1 = Add(a, b);
//	 printf("sum1=%d\n", sum1);
//
//	 return 0;
// }
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", arr[4]);//���±�ķ�ʽ����Ԫ��
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}
//

#include <stdio.h>
int main() {
	//int a = 5 % 2;//ȡ��
	//printf("%d\n", a);
	int a = 10;
	a = a + 10;
	printf("%d\n", a);

	int b = 10;
	b += 10;
	printf("%d\n", b);

	return;
}
