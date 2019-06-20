#include "p24t5.h"
#include <math.h>
#include <stdio.h>

void p24t5(void)
{
	double x = 0;
	pow(x, 0);
	printf("Enter x: ");
	scanf("%lf", &x);
	printf("3x^5+2x^4-5x^3-x^2+7x-6 = %.2lf", \
		3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x,3)\
		- pow(x,2) + 7 * x - 6);
}