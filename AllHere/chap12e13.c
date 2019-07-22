#include "chapter12e13.h"
#include <stdio.h>
#define N 10

static double ident[N][N];

void chap12e13(void)
{
	double *p;
	p = ident[0];
	for (int i = 0; p <= &ident[N - 1][N - 1]; p++, i++)
		if (i % (N + 1) == 0)
			*p = 1.0;
		else
			*p = 0.0;
	p = ident[0];
	for (int i = 0; p <= &ident[N - 1][N - 1]; p++, i++)
				printf("%g %c", *p,i%N==9?'\n':'0');
}