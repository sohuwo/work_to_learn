#include "p87t11.h"
#include <stdio.h>

void p87t11(void)
{
	float n = 0, sum = 1;

	printf("Enter a integer (interger > 0):");
	scanf("%f", &n);

	for (float i = 1,next = 1,multiplier = 1; i <= n; i++,multiplier *= i)
		sum += 1 / multiplier;

	printf("The const e is %f\n", sum);
}