#include "GCD.h"

int gcd(int m, int n)
{
	int reminder;
	while (n != 0)
	{
		reminder = m % n;
		m = n;
		n = reminder;
	}
	return m;
}