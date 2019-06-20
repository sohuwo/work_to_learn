#include "p49t4.h"
#include <stdio.h>

void p49t4(void)
{
	unsigned num;
	printf("Enter a number between 0 and 32767:");
	scanf("%d", &num);
	printf("In octal, your number is: %05o\n", num);
}