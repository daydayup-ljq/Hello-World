#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

//int main()
//{
//	
//	int arr[10] = { 1,2,3,4,5 };
//	//arr����Ԫ�ص�ַ
//	int* p = arr;
//	//*(p + 2) == p[2] ==> *(arr+2) == arr[2]
//
//		int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//		int* ptr1 = (int*)(&aa + 1);
//		//ȡ����ά����ĵ�ַ+1���൱������������ά����
//
//		int* ptr2 = (int*)(*(aa + 1));//aa[1]
//		//aa[1] - �ڶ�����Ԫ�ص�ַ
//
//		printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//		return 0;
//
//	
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//a�Ǹ��ַ�ָ�������
//	//ÿ���ַ�������Ԫ�ص�ַ���Ž�a�У���a����Ԫ����'w'
//
//	char** pa = a;
//	//char* *pa=a
//	//*pa��ʾpa��ָ�룬char*��ʾpaָ���Ԫ����char*
//
//
//	pa++;
//	//��ʾ����һ��char*��ָ��ڶ���Ԫ��
//	
//	printf("%s\n", *pa);//��a�ĵ�ַΪ��ͷ��ӡһ���ַ���'at'
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";//�ѳ����ַ������ַ��ĵ�ַ�Ž�p��
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//�õ�c+2�����ݣ�c+2����'P'�ĵ�ַ����ӡ��'POINT'
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n",*cpp[-2]+3 );
//	printf("%s\n",cpp[-1][-1]+1 );
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) = *(pulPtr + 3)+ 3;
//
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	// 6 ,12
//
//	return 0;
//}


//�ַ�������
void reverse(char* str)
{
	 assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;

	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[256] = { 0 };
	//scanf("%s", arr);//abcdef ---> fedcba
	gets (arr);
	//������
	reverse(arr);

	printf("�������ַ���: %s\n", arr);
	return 0;

}