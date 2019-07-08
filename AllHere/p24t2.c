#include "p24t2.h"
#include <stdio.h>
#define PI 3.1415926f

void p24t2(void)
{
	float v,r;
	printf("Enter the radius of ball: ");
	scanf("%f", &r);
	v = 4.0f / 3.0f*PI*r*r*r;
	printf("The volume of ball is %.2f\n", v);
	//return v;
}