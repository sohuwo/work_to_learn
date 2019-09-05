#include "chap13e15.h"
#include <stdio.h>
//find the chacter what is not exist in the second pointer
//return the result of what the chacter minus the first chacter
int f(char *s, char *t);

void chap13e15(void)
{
	printf("%d\n", f("abcd", "babc"));
	printf("%d\n", f("abcd", "bcd"));
}

int f(char *s, char *t)
{
	char *p1, *p2;
	for (p1 = s; *p1; p1++)
	{
		for (p2 = t; *p2; p2++)
			if (*p1 == *p2)break;
		if (*p2 == '\0')break;
	}
	return p1 - s;
}