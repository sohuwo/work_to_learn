#include "p86t3.h"
#include "GCD.h"
#include <stdio.h>

void p86t3(void)
{
	int m, n;
	printf("Enter a fraction:");
	scanf("%d / %d", &m, &n);

	printf("In lowest terms: %d/%d\n",m/gcd(m,n),n/gcd(m,n));
}