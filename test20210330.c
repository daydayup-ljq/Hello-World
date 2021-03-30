#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct person//person-结构体名
{
	char name[20];
	int age;
	char sex;
}Person;

//int main()
//{
//	//变量
//	//int a;
//	//char ch;
//	//相当于在内存中开辟了一个空间供使用
//	//根据类型不同开辟不同空间
//	//每个字节都有地址比较难记所以用变量名代替它
//	//int* p;
//	//char* p;
//	//也在内存里开辟了一个空间
//	//大小只根据计算的平台大小来判断（32/64）
//	//只存放地址
//
//	//p = &a;
//	//a = 4;
//	//printf("%d\n", a);
//	//printf("%d\n", *p);
//
//	/*int* p2;*/
//	//*p2 = 4; error不执行
//
//
//	//结构体
//	char name[20];
//	int age;
//	char sex;
//	//属性太多
//
//	struct person per;//struct person结构体类型名
//	per.age = 18;//用.赋值
//	per.sex = 'f';
//	//per.name = "leilei";error
//	//name 是个数组，数组名本身是常量，不可以放在数值运算符的左侧
//	strcpy(per.name, "leilei");
//	printf("%d\n", sizeof(per));//结构体的大小不可以直接数
//	Person per2;
//	per2.age = 20;
//
//	Person s[3];
//	int a[3];
//	s[0].age = 20;
//	s[1].age = 18;
//	s[2].age = 24;
//
//	Person* p;
//
//	p = &per2;//第一个成员的地址赋值给p
//	//并且可以用*p表示per
//	(*p).age = 20;
//	p->age = 60;
//	strcpy(p->name, "雷宇雯");
//	printf("%s\n", p->name);
//}


//void swap(int m, int n)//传值还是传址？
//{
//	int t;
//	printf("m=%d,n=%d\n", m, n);
//	t = m;
//	m = n;
//	n = t;
//	printf("m=%d,n=%d\n", m, n);
//}

void swap2(int* m, int* n)
{
	int t;
	t = *m;
	*m = *n;
	*n = t;
}

void setAge(Person per1, int n)
{
	per1.age = n;

}

void setAge2(Person *p, int n)
{
	p->age = n;
}
void main()
{
	int a = 3;
	int b = 4;
	//printf("a=%d,b=%d\n", a, b);
	//swap(a, b);
	//printf("a=%d,b=%d\n", a, b);
	swap2(&a, &b);
	printf("a=%d,b=%d\n", a, b);

	Person per2;
	//setAge(per2, 20);

	setAge2(&per2, 200);
	printf("per2.age=%d\n", per2.age);
}