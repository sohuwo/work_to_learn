#include "chap11e5.h"
#include <stdio.h>

void split_time(long, int *, int*, int*);

void chap11e5(void)
{
	long sec_total = 366600;
	int hr, min, sec;

	split_time(sec_total, &hr, &min, &sec);
	printf("%ld %d %d %d\n",sec_total,hr,min,sec);
}

void split_time(long total_sec, int *hr, int*min, int*sec)
{
	*sec = total_sec % 60;
	*min = total_sec / 60 % 60;
	*hr = total_sec / 60 / 60 %24;
}