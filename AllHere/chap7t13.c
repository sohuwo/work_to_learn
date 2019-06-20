#include "chap7e13.h"
#include <stdio.h>

void chap7t13(void)
{
	char ch = 0;
	float length = 0,count = 0;

	printf("Enter a sentence:");

	while((ch = getchar())==' ')
		;
	while (ch != '\n')
	{
		if (ch == ' ')
			count++;
		else
			length++;
		ch = getchar();
	}

	printf("Average word length: %.1f",length/(count+1));
}