#include "chap9t1.h"
#include <stdio.h>

#define N 5

void selection_sort(int a[], int n);

void chap9t1(void)
{
	int num[N];

	printf("Enter %d numbers to be sorted:",N);

	for (int i = 0; i < N; i++)
		scanf("%d", num + i);

	selection_sort(num, N);

	for (int i = 0; i < N; i++)
		printf("%d ", *(num + i));
}

void selection_sort(int a[], int n)
{
	if (n == 1)
		return;

	int max = a[0];
	int i_max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			i_max = i;
		}
	}
	int temp = a[i_max];
	a[i_max] = a[n - 1];
	a[n - 1] = temp;

	selection_sort(a, n - 1);
}