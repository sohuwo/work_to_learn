#include "p44example.h"
#include <stdio.h>

void p44example(void)
{
	int a = 5, b, c, i = 2,j;
	c = (b = a + 2) - (a = 1);
	printf("c = %d\n", c);
	j = i * i++;
	printf("j = %d\n", j);
}