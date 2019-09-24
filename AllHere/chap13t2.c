#include "chap13t2.h"
#include <stdio.h>
#include <string.h>
//Prints a one-month reminder list
#define MAX_REMIND 50 //maximum number of reminders
#define MSG_LEN 60 //max length of reminder message

static int read_line(char str[], int n);

void chap13t2(void)
{
	char reminders[MAX_REMIND][MSG_LEN + 12];
	char day_str[3], month_str[3], hour_str[3], minute_str[3], msg_str[MSG_LEN + 1];
	int month,day,hour,minute, i, j, num_remind = 0;

	for (;;)
	{
		if (num_remind == MAX_REMIND)
		{
			printf("--No space left--\n");
			break;
		}

		printf("Enter date(MM/DD), time(24-hour,XX:XX) and reminder: ");
		scanf("%2d/%2d", &month,&day);
		if (month == 0)
			break;
		if (month < 0 || month >= 13)
		{
			printf("Error, month is wrong.\n");
			continue;
		}
		if (day == 0)
			break;
		if (day < 0 || day >= 31)
		{
			printf("Error, day is wrong.\n");
			continue;
		}
		sprintf(day_str, "%02d", day);
		sprintf(month_str, "%02d", month);
		scanf("%2d:%2d", &hour, &minute);
		sprintf(hour_str, "%02d", hour);
		sprintf(minute_str, "%02d", minute);
		read_line(msg_str, MSG_LEN);

		for (i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]) < 0)
				break;
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j - 1]);

		strcpy(reminders[i], month_str);
		strcat(reminders[i], day_str);
		strcat(reminders[i], hour_str);
		strcat(reminders[i], minute_str);
		strcat(reminders[i], msg_str);

		num_remind++;
	}

	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);
}

static int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}