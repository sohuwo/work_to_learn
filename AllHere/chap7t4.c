#include "chap7t4.h"
#include <stdio.h>
#include <ctype.h>

void chap7t4(void)
{
	char ch;

	printf("Enter phone number:");

	while ((ch = getchar()) != '\n')
	{
		switch(toupper(ch))
		{
			case 'A':case 'B':case 'C':
				putchar('2'); break;
			case 'D':case 'E':case 'F':
				putchar('3'); break;
			case 'H':case 'I':case 'G':
				putchar('4'); break;
			case 'J':case 'K':case 'L':
				putchar('5'); break;
			case 'M':case 'N':case 'O':
				putchar('6'); break;
			case 'P':case 'R':case 'S':
				putchar('7'); break;
			case 'T':case 'U':case 'V':
				putchar('8'); break;
			case 'W':case 'X':case 'Y':
				putchar('9'); break;
			default:putchar(ch); break;
		}
	}
}