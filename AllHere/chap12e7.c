#include "chap12e7.h"
#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

void chap12e7(void)
{
	int a[] = { 1,2,3,4,5 },key = 6;
	printf("%s\n", search(a, 5, key) ? "True" : "False");
}

bool search(const int a[], int n, int key)
{
	const int* p = a;
	for (; p < a + n; p++)
	{
		if (*p == key)
			return true;
	}
	return false;
}