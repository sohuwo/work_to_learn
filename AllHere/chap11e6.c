#include "chap11e6.h"
#include <stdio.h>

#define MAX 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

void chap11e6(void)
{
	int a[MAX], largest, second_largest;
	printf("Enter %d number:", MAX);
	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &a[i]);
	}
	find_two_largest(a, MAX, &largest, &second_largest);

	printf("The largest is %d and the second largest is %d\n", largest, second_largest);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	*largest = *second_largest = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > *largest)
		{
			*second_largest = *largest;
			*largest = a[i];
		}
		else if (a[i] > *second_largest)
		{
			*second_largest = a[i];
		}
	}
}