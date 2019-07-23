#include "chap12e17.h"
#include <stdio.h>

#define LEN 5

int sum_2_dimensional_array(const int a[][LEN], int n);

void chap12e17(void)
{
	int a[][LEN] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("sum = %d\n", sum_2_dimensional_array(a, 2));
}

int sum_2_dimensional_array(const int a[][LEN], int n)
{
	const int *p;
	int sum = 0;

	for (p = *a; p < *a + n * LEN; p++)
		sum += *p;
	return sum;
}