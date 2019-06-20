#include "p67t2.h"
#include <stdio.h>

void p67t2(void)
{
	short hour, minute;
	printf("Enter a 24-hour time: ");
	scanf("%2hd:%2hd", &hour, &minute);

	printf("Equivalent 12-hour time: ");
	if (hour == 0)
		printf("12:%2hd AM", minute);
	else if (hour > 0 && hour < 12)
		printf("%2hd:%2hd AM", hour, minute);
	else if (hour == 12)
		printf("12:%2hd PM", minute);
	else if (hour < 24)
		printf("%2hd:%2hd PM", hour - 12, minute);
	else
		printf("Error!");

	puts("");
}