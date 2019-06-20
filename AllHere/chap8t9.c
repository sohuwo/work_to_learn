#include "chap8t9.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COLUMN 10

void chap8t9(void)
{
	char map[ROW][COLUMN];
	char ch='A';
	int r, c, direction[4] = {0};

	srand((unsigned)time(NULL));

	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COLUMN; j++)
			map[i][j] = '.';

	//Start point
	r = rand() % ROW;
	c = rand() % COLUMN;
	map[r][c] = ch++;

	while (1)
	{
		int r_temp = r, c_temp =c;
		int random = 0;

		random = rand() % 4;
		
		if (direction[0] == 1 && direction[1] == 1 && direction[2] == 1 && direction[3] == 1)
			break;
		if (direction[random] == 1)
			continue;
			
		switch (random)
		{
		case 0:
			r_temp--; direction[0]++; break;
		case 1:
			r_temp++; direction[1]++; break;
		case 2:
			c_temp--; direction[2]++; break;
		case 3:
			c_temp++; direction[3]++; break;
		}
		if (r_temp < 0 || r_temp>9 || c_temp < 0 || c_temp>9)
			continue;
		if (map[r_temp][c_temp] != '.')
			continue;

		r = r_temp;
		c = c_temp;
		map[r][c] = ch++;
		direction[0] = 0;
		direction[1] = 0;
		direction[2] = 0;
		direction[3] = 0;
		if (ch == 'Z' + 1)
			break;
	}

	for (int i = 0; i < ROW; i++)
	{
		puts("");
		for (int j = 0; j < COLUMN; j++)
			printf("%c ", map[i][j]);
	}
}