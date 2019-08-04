#include "baiduTieba.h"
#include <math.h>
#include <stdio.h>

void baiduTieba(void) 
{
	int a, b;
	scanf("%d %d", &a, &b);
	//while (getchar() != '\n');
	a% b == 1 ? a++ : b--;
	printf("a&&b = %d\n", a && b);
}