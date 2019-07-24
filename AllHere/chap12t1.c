#include "chap12t1.h"
#include <stdio.h>

#define MAX 30
void chap12t1a(void)
{
	char message[MAX],ch;
	int i = 0;
	printf("Enter a message:");
	while ((ch = getchar()) != '\n')
	{
		if (i == MAX)
			break;
		message[i] = ch;
		i++;
	}
	printf("Reversal is: ");
	for (int j = i - 1; j >= 0; j--)
	{
		putchar(message[j]);
	}
}

void chap12t1(void)
{
	char message[MAX], ch;
	char * p;
	printf("Enter a message:");
	for (p = message; p<message+MAX; p++)
	{
		ch = getchar();
		if (ch == '\n')
			break;
		*p = ch;
	}
	printf("Reversal is: ");
	for (p--; p>= message; p--)
	{
		putchar(*p);
	}
}