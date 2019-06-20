#include "p85t1.h"
#include <stdio.h>

void p85t1(void)
{
	float max = 0;
	for (float n = 1; n > 0; printf("Enter a number:"), scanf("%f", &n), (n>=max)?max =n:1);
	printf("The largest number entered was %.2f\n", max);
}