#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

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
//}
#define MAX(X,Y)(X>Y?X:Y)

int get_max(int x, int y)
{
	return (x > y ? x : y);
}

void Swap(int* f, int* g)
{
	int temp;
	temp = *f;
	*f = *g;
	*g = temp;
	printf("%d,%d\n", *g, *f);
}
int main() {
	

	int a = 10;
	int b = 20;
	
	int max = get_max(a, b);
	int max2 = MAX(300, 30);
	printf("%d\n", max);
	printf("%d\n", max2);
	Swap(&a, &b);
		printf("%d,%d\n", a, b);

	return 0;
}
