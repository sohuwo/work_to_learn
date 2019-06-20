#include "p67t7.h"
#include <stdio.h>

void p67t7(void)
{
	int max, min,temp;
	printf("Enter four integers:");
	scanf("%d", &temp);
	max = min = temp;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &temp);
		if (temp >= max)
			max = temp;
		if (temp <= min)
			min = temp;
	}
	printf("Largest: %d\n""Smallest: %d\n", max,min);
}