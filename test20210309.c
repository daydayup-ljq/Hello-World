#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 5
int Search_MAX(int* q)
{
	int max = 0;
	int i = 0;
	for ( i = 0; i < N; i++)
	{
		if (q[i ] > q[max])
		{
			max = i ;
		}
	}
	return max;
}

int Search_MIN(int* q)
{
	int min = 0;
	for (int i = 0; i < N; i++)
	{
		if (q[i] < q[min])
		{
			min = i ;
		}
	}
	return min;
}

void Swap(int* q)
{
	
	int tmp, MAX, MIN;
	MAX = Search_MAX(q);
	tmp = q[MAX];
	q[MAX] = q[0];
	q[0] = tmp;

	MIN = Search_MIN(q);
	tmp = q[MIN];
	q[MIN] = q[N - 1];
	q[N - 1] = tmp;
}

void print(int* q)
{
	int i = 0;
	for ( i = 0; i < N; i++)
	{
		printf("%d ", q[i]);
	}
}
int main()
{
	int arr[N] = {0};
	int i = 0;
	for ( i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	Swap(arr);
	print(arr);
	return 0;

}

