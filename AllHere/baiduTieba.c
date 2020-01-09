#include "baiduTieba.h"
#include <math.h>
#include <stdio.h>

void baiduTieba(void) 
{
	char *str = "flower";
	for (int i = 0;str[i] !='\0';i++)
	{
		if (str[i] == 'w')
			str[i] = '\0';
	}
	printf("%s", str);
}