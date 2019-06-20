#include "chap7t14.h"
#include <stdio.h>
#include <math.h>

void chap7t14(void)
{
	double x, y = 1,average =1;

	printf("Enter a positive number:");
	scanf("%lf", &x);

	do
	{
		y = average;
		average = (y + x / y) / 2; ;
	} while (fabs(average - y) >= (0.000001*y));

	printf("Square root: %f", average);
}