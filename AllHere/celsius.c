//p18
//Converts a Fahrenheit temperature to Celsius
#include <stdio.h>
#include "celsius.h"
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

void celsius(void)
{
	float fahrenheit, celsius;

	printf("Enter Fahrenheit tempreture: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius equivalent: %.1f\n", celsius);
}