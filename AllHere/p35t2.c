#include "p35t2.h"
#include <stdio.h>

void p35t2(void)
{
	short item;
	float price;
	struct date
	{
		char day;
		char month;
		short year;
	}purchase_date;

	printf("Enter item number: ");
	scanf("%hd", &item);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%hhd / %hhd / %hd", &purchase_date.month,&purchase_date.day,&purchase_date.year);
	
	printf("Item\tUnit\t\tPurchase\n");
	printf("    \tPrice\t\tDate\n");
	printf("%hd\t$%7.2f\t%hhd/%hhd/%hd", \
		item, price, \
		purchase_date.month, \
		purchase_date.day, \
		purchase_date.year);
}