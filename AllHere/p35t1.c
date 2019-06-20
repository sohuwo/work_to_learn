#include "p35t1.h"
#include <stdio.h>

void p35t1(void)
{
	short year;
	char month, day;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%hhd / %hhd / %hd", &month, &day, &year);
	printf("You entered the date %d%02d%02d",year,month,day);
}