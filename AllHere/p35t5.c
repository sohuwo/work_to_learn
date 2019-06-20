#include "p35t5.h"
#include <stdio.h>

void p35t5(void)
{
	short matrix[4][4];
	printf("Enter the numbers from 1 to 16 in any order:\n");
	
	for (char x = 0; x < 4; x++)
	{
		puts("");
		for (char y = 0; y < 4; y++)
		{
			scanf("%hd", &matrix[x][y]);
			printf("%2hd ", matrix[x][y]);
		}	
	}

	printf("\nRow sums:\t");
	for (short x = 0, sum = 0; x < 4; x++)
	{
		putchar(' ');
		for (short y = 0; y < 4; y++)
		{
			sum += matrix[x][y];
		}
		printf("%2hd", sum);
		sum = 0;
	}

	printf("\nColumn sums:\t");
	for (short y = 0, sum = 0; y < 4; y++)
	{
		putchar(' ');
		for (short x = 0; x < 4; x++)
		{
			sum += matrix[x][y];
		}
		printf("%2hd", sum);
		sum = 0;
	}

	printf("\nDiagonal sums:\t");
	short sum_diagonal_1 = 0, sum_diagonal_2 = 0;
	for (short y = 0 ; y < 4; y++)
	{
		for (short x = 0; x < 4; x++)
		{
			if (x == y)
				sum_diagonal_1 += matrix[x][y];
			if (3 == (x + y))
				sum_diagonal_2 += matrix[x][y];
		}
	}
	printf(" %2hd %2hd", sum_diagonal_1, sum_diagonal_2);
}