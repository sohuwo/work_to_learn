#include "p24t6.h"
#include <math.h>
#include <stdio.h>

void p24t6(void)
{
	double x = 0;
	pow(x, 0);
	printf("Enter x: ");
	scanf("%lf", &x);
	printf("3x^5+2x^4-5x^3-x^2+7x-6 = %.2lf", \
		x * ((((3 * x + 2)*x - 5)*x -1) * x + 7) - 6);
}