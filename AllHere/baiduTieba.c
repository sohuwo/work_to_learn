#include "baiduTieba.h"
#include <math.h>
#include <stdio.h>

void baiduTieba(void) 
{
	unsigned int addr[1024*250];
	for (int i = 0; i < 1024; i++)
	{
		printf("%x%c", &addr[i], i % 10 ? ' ' : '\n');
	}

}