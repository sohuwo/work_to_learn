#include "chap7t6.h"
#include <stdio.h>

#define PRINT_SIZEOF(x) printf(#x "\t= %d\n",sizeof(x))

void chap7t6(void)
{
	PRINT_SIZEOF(int);
	PRINT_SIZEOF(short);
	PRINT_SIZEOF(long);
	PRINT_SIZEOF(long long);
	PRINT_SIZEOF(float);
	PRINT_SIZEOF(double);
	PRINT_SIZEOF(long double);
}