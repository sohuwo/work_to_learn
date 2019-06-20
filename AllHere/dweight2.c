//Computes the dimensional weight of a box from input provided by the user

#define INCHES_PER_POUND 166
#include "dweight2.h"
#include <stdio.h>

void dweight2(void)
{
	int height, length, width, volume, weight;
	
	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length of box: ");
	scanf("%d", &length);
	printf("Enter width of box: ");
	scanf("%d", &width);
	volume = height * length *width;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);
}