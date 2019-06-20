#include "p47e2.h"
#include <stdio.h>
/*
Not in C89. Suppose that i is 9 and j is 7. The value of (-i)/j could be either ¨C1 or ¨C2, 
depending on the implementation. On the other hand, the value of -(i/j) is always ¨C1, 
regardless of the implementation. In C99, on the other hand, the value of (-i)/j must be equal to the value of -(i/j).
*/

void p47e2(void)
{
	int i, j;
	while (1)
	{
		printf("Enter i,j: ");
		scanf("%d,%d", &i,&j);
		printf("(-i)/j = %d\n-(i/j)=%d\n", (-i) / j, -(i / j));
		printf("i/j = %d\n", i / j);
	}
}