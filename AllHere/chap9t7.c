#include "chap9t7.h"
#include <stdio.h>


int power(int x,int n);

void chap9t7(void)
{
	int x = 1;
	while (x != 0)
	{
		int n = 0;
		scanf("%d %d", &x, &n);
		printf("%d^%d = %d\n", x, n, power(x, n));
	}
}

int power(int x,int n)
{
	if (n == 0)
		return 1;
	else if (n % 2 == 0)
		return power(x, n / 2)*power(x, n / 2);
	else
		return x * power(x, n - 1);
}