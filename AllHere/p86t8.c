#include "p86t8.h"
#include <stdio.h>

void p86t8(void)
{
	int daysMonth = 28,startDay =1;

	printf("Enter number of days in month:");
	scanf("%d", &daysMonth);

	printf("Enter starting day of the week (1=Sun, 7=Sat):");
	scanf("%d", &startDay);

	for (int i = 1; i < startDay; i++)
	{
		printf("%c%c%c", 32,32,32);
	}

	for (int i = startDay, j = 1; j <= daysMonth; i++, j++)
	{
		printf("%2d ", j);
		if (i == 7)
			puts(""), i = 0;
	}
}