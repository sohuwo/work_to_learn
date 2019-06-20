#include "p68t8.h"
#include <stdio.h>
#include <stdlib.h>

/*
 8:00	480
 9:43	583
11:19	679
12:47	767
14:00	840
15:45	945
19:00	1140
21:45	1305
*/

void p68t8(void)
{
	short hour,min,totalMins;

	printf("Enter a 24-hour time:");
	scanf("%hd:%2hd", &hour,&min);
	printf("Closest departure time is ");

	totalMins = hour * 60 + min;

	if (totalMins <= 480)
		printf("8:00 a.m., arriving at 10:16 a.m.");
	else if (totalMins >= 1305)
		printf("9:45 p.m., arriving at 11:58 p.m.");
	else if (abs(totalMins - 840) >= abs(totalMins - 767))
		if (abs(totalMins - 679) >= abs(totalMins - 583))
			//near 583
			if (abs(totalMins - 583) >= abs(totalMins - 480))
				printf("8:00 a.m., arriving at 10:16 a.m.");
			else
				printf("9.:43 a.m., arriving at 11:52 a.m.");
		else
			//near 679
			if (abs(totalMins - 767) >= abs(totalMins - 679))
				printf("11:19 a.m., arriving at 1:31 p.m.");
			else
				printf("12:47 p.m., arriving at 3:00 p.m.");
	else
		if (abs(totalMins - 1140) >= abs(totalMins - 945))
			//near 945
			if (abs(totalMins - 945) >= abs(totalMins - 840))
				printf("2:00 p.m., arriving at 4:08 p.m.");
			else
				printf("3:45 p.m., arriving at 5:5 p.m.");
		else
			//near 1140
			if (abs(totalMins - 1305) >= abs(totalMins - 1140))
				printf("7:00 p.m., arriving at 9:20 p.m.");
			else
				printf("9:45 p.m., arriving at 11:58 p.m.");
}