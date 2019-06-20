#include "p65e3.h"
#include <stdio.h>

void p65e3(void)
{
	int i, j, k;

	i = 3, j = 4, k = 5;
	printf("%d==1\n", i < j || ++j < k);
	printf("i=%d 3 j=%d 4 k=%d 5\n", i, j, k);

	i = 7, j = 8, k = 9;
	printf("%d\n", i-7 && j++ < k);
	printf("i=%d 7 j=%d 8 k=%d 9\n", i, j, k);

	i = 7, j = 8, k = 9;
	printf("%d\n", (i = j) || (j = k));
	printf("i=%d 8 j=%d 8 k=%d 9\n", i, j, k);

	i = 1, j = 1, k = 1;
	printf("%d\n", ++i || ++j && ++k);
	printf("i=%d 2 j=%d 2 k=%d 2\n", i, j, k);

	i = 1, j = 1;
	printf("%d\n", (i >= j) - (i <= j));
}