#include "p86t5.h"
#include <stdio.h>

void p86t5(void)
{
	int n;

	printf("Enter a integer:");
	scanf("%d", &n);

	printf("The reversal is ");
	while (n != 0)
	{
		printf("%d", n % 10);
		n /= 10;
	}
	puts("");
}