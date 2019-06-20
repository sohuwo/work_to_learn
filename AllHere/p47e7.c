#include "p47e7.h"
#include <stdio.h>

void p47e7(void)
{
	int total = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("\ntotal = %d\n", total);
		printf("9 - ((total - 1) %% 10) = %d\n", 9 - ((total - 1) % 10));
		printf("10 - total %% 10 = %d\n", 10 - total % 10);
		total += i;
	}
}