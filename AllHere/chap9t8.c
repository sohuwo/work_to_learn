#include "chap9t8.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define TRUE 1
#define FALSE 0

int roll_dice(void);
int play_game(void);

void chap9t8(void)
{
	int win_times = 0, lose_times = 0;
	int play_again = 1;

	while (play_again == 1)
	{
		char ch;
		if (play_game())
		{
			printf("You win!\n");
			win_times++;
		}
		else
		{
			printf("You lose!\n");
			lose_times++;
		}
		puts("");
		printf("Play again?(y/n)");
		scanf("%c", &ch);
		while(getchar()!='\n')
			;

		puts("");
		switch (ch)
		{
		case 'y':play_again = 1; break;
		case 'n':play_again = 0; printf("\nWins: %d   Losses: %d\n",win_times,lose_times); break;
		default:play_again = 1;
		}
	}
}

int roll_dice(void)
{
	Sleep(1000);
	srand((unsigned)time(NULL));
	return rand() % 6 + rand() % 6;	
}

int play_game(void)
{
	int point = roll_dice();
	printf("You rolled: %d\n", point);

	switch (point)
	{
	case 7:case 11:
		return TRUE;
	case 2:case 3:case 12:
		return FALSE;
	default:printf("Your point is %d\n", point);
	}

	for (;;)
	{
		int temp = roll_dice();
		printf("You rolled: %d\n", temp);
		if (temp == 7)
			return FALSE;
		if (temp == point)
			return TRUE;
	}
}