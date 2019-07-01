#include "p34e3.h"
#include <stdio.h>

void p34e3(void)
{
	int i,j = 99,k= 99;
	//float f;
	scanf("%d", &i);
	printf("%d\n", i);
	while(getchar()!='\n');
	scanf(" %d", &i);
	printf("%d\n", i);
	while (getchar() != '\n');

	scanf("%d-%d-%d", &i, &j, &k);
	printf("%d %d %d\n", i,j,k);
	while (getchar() != '\n');
	scanf("%d - %d - %d", &i, &j, &k);
	printf("%d %d %d\n", i, j, k);
	while (getchar() != '\n');
}