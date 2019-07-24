#include "chap12t2.h"
#include <stdio.h>
#include <ctype.h>

#define MSG_LEN 20

void chap12t2a(void)
{
	char message[MSG_LEN], ch;
	int i, j;
	printf("Enter a message:");
	for (i = 0; i < MSG_LEN; )
	{
		ch = getchar();
		if (ch == '\n')
			break;
		if (isalpha(ch))
			message[i++] = tolower(ch);
	}
	i--;
	for (j = 0; j <= i; j++, i--)
	{
		if (message[j] != message[i])
		{
			printf("Not a palindrome\n");
			return;
		}
	}
	printf("Palindrome\n");
}

void chap12t2(void)
{
	char message[MSG_LEN], ch,*high,*low;
	printf("Enter a message:");
	for (high = message; high < message + MSG_LEN;)
	{
		ch = getchar();
		if (ch == '\n')
			break;
		if (isalpha(ch))
			*high++ = tolower(ch);
	}
	high--;
	for (low = message; low <= high; low++, high--)
	{
		if (*low != *high)
		{
			printf("Not a palindrome\n");
			return;
		}
	}
	printf("Palindrome\n");
}