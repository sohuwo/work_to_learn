#include "baiduTieba.h"
#include <math.h>
#include <stdio.h>

int a[5][2] = { 5,1,8,1,12,1,7,1,9,1 };

void baiduTieba(void) 
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5-i-1; j++)
		{
			if (a[j][0] > a[j + 1][0])
			{
				int temp = a[j][0];
				a[j][0] = a[j + 1][0];
				a[j + 1][0] = temp;
			}
		}
	}

	for (int i=0;i<5; i++)
	{
		for (int j = 0; j < 2; j++)
			printf("%d ", a[i][j]);
		printf(" ");
	}
}