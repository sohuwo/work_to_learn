#include "p86t2.h"
#include <stdio.h>

void p86t2(void)
{
	int m, n;

	printf("Enter two integers:");
	scanf("%d %d", &m, &n);

	printf("Greatest common divisor:");

	while (n != 0)
	{
		int reminder;
		reminder = m % n;
		m = n;
		n = reminder;
	}

	printf("%d", m);
}