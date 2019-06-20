#include "chap7t12.h"
#include <stdio.h>

float calculate(float a, float b,char c)
{
	switch (c)
	{
	case '+':return a + b;
	case '-':return a - b;
	case '*':return a * b;
	case '/':return a / b;
	default:return 0;
	}
}

void chap7t12(void)
{
	float result = 0;
	char operation = '+';
	float temp = 0;

	printf("Enter an expression:");
	while (operation != '\n')
	{
		if (scanf("%f", &temp) != 0)
		{
			result = calculate(result, temp, operation);
		}

		operation = getchar();
	}
	printf("Value of expression: %f", result);
}