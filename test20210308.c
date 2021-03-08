#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int (*p)[5],int x,int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", (*(p+i))[j]);//*(*(p+i)+j) / *(p[i]+j) / p[i][j]
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };

	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int* p = a;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(a + i));
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	/*print1(arr, 3, 5);
	print2(arr, 3, 5);*/
	return 0;
}