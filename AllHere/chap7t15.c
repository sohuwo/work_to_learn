#include "chap7t15.h"
#include <stdio.h>
//change the INT_TYPE to short\int\long\long long and the printf parameter %hd\%d\%ld\%lld
#define INT_TYPE long long

INT_TYPE pow(int i)
{
	if (i == 1)
		return 1;
	return i*pow(i-1);
}

void chap7t15(void)
{
	int i = 1;
	INT_TYPE result = 1;

	while (result > 0)
	{
		//printf("Enter a positive integer:");
	    //scanf("%hd", &i);
		printf("Factorial of %d: %lld\n", i, result=pow(i));
		i++;
	}
}