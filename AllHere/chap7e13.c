#include "chap7e13.h"
#include <stdio.h>

void chap7e13(void)
{
	char c = '\1';
	short s = 2;
	int i = -3;
	long m = 5;
	float f = 6.5f;
	double d = 7.5;

	printf("c * i =%d -3\n", c*i);
	printf("f * c =%f 6.5\n", f*c);
	printf("f - d =%lf -1.000000\n", f-d);
	printf("s + m =%ld 7\n", s + m);
	printf("d / s =%lf 3.750000\n", d / s);
	printf("(int)f =%d 6\n", (int)f);
}