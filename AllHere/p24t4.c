#include "p24t4.h"
#include <stdio.h>

void p24t4(void)
{
	float money = 0;
	printf("Enter an amount: ");
	scanf("%f", &money);
	printf("With tax added: $%.2f", money*(1.0+0.05));
}