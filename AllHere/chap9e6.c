#include "chap9e6.h"
#include <stdio.h>

int digit(int n, int k)
{
	for (int i = 1; i < k; i++)
	{
		n /= 10;
		if (n == 0)
			break;
	}
		
	return n % 10;
}