#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS


//int main() {
//
//	double d = 3.14;
//	printf("%p\n", &d);
//	double* pd = &d;
//	printf("%p\n", pd);
//	*pd = 3.15;
//	printf("d=%lf\n", d);
//
//	//int a = 10;//�����ĸ��ֽ�
//	//int* p = &a;//ָ�����p,����Ϊint *
//	//*p = 20;//*--�����ò�����/��ӷ��ʲ�����
//	//printf("a=%d\n", a);
//	return 0;
//}
//

struct Book
{
	char name[20];//c���Գ������
	short price;//55


};//����ȱ�ٵķ��
#include<string.h>
#include<stdio.h>
int main() {
	//���ýṹ�����ʹ���һ�������͵Ľṹ���������
	struct Book b1 = { "c���Գ������",55 };
	strcpy(b1.name, "C++");//strcpy-string copy 
	//�ַ�������-�⺯��-string.h
	printf("%s\n", b1.name);

	//struct Book* pb = &b1;
	////����pb��ӡ�������ͼ۸�
	////.������  �ṹ�����.��Ա
	////->       �ṹָ��->��Ա 
	//printf("��%s��\n", (*pb).name);
	//printf("��%s��\n", pb->name);
	//printf("�۸�%dԪ\n", (*pb).price);
	//printf("�۸�%dԪ\n", pb->price);
	//printf("��������%s��\n ", b1.name);
	//printf("�۸�%dԪ\n", b1.price);

	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�:%dԪ\n ", b1.price);
}