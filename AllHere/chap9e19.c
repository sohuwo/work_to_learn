#include "chap9e19.h"
#include <stdio.h>

void pb(int n)
{
	if (n != 0)
	{
		pb(n / 2);
		putchar('O' + n % 2);
	}
}