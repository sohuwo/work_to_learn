#include "chap8t17.h"
#include <stdio.h>

void chap8t17(void)
{
	int matrix[99][99] = {0};
	int n = 0;
	int x, y;
	printf("This program creates a magic square of a specified size.\n"\
		"This size must be an odd number between 1 and 99\n"\
	"Enter size of magic square:");

	scanf("%d", &n);

	x = 0;
	y = n / 2;
	matrix[x][y] = 1;


	for (int i = 2; i <= n * n; i++)
	{
		int x_t = (x - 1 + n) % n;
		int y_t = (y + 1 + n) % n;
		if (matrix[x_t][y_t] != 0)
		{
			x_t = (x + 1 + n) % n;
			y_t = y;
		}
		matrix[x_t][y_t] = i;
		x = x_t;
		y = y_t;
	}

	for (int i = 0; i < n; i++)
	{
		puts("");
		for (int j = 0; j < n; j++)
			printf("%4d ", matrix[i][j]);
	}
}