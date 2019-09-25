#include "chap13t3.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define NUM_SUITS 4
#define NUM_RANKS 13

void chap13t3(void)
{
	unsigned in_hand[NUM_SUITS][NUM_RANKS] = { 0 };
	int num_cards = 0, rank, suit;
	const char *rank_code[] = { "Two","Three","Four","Five", "Six","Seven"\
		,"Eight","Nine", "Ten","Jack","King","Queen", "Ace" };
	const char *suit_code[] = { "clubs","diamonds","hearts","spades" };

	srand((unsigned)time(NULL));

	printf("Enter numher of cards in hand:");
	scanf("%d", &num_cards);
	while (num_cards > (NUM_RANKS*NUM_SUITS))
	{
		puts("Not enough cards!");
		printf("Enter numher of cards in hand:");
		scanf("%d", &num_cards);
	}

	printf("Your hand:");
	while (num_cards > 0)
	{
		suit = rand() % NUM_SUITS;
		rank = rand() % NUM_RANKS;
		if (!in_hand[suit][rank])
		{
			in_hand[suit][rank] = 1;
			num_cards--;
			printf(" %s of %s\n", rank_code[rank], suit_code[suit]);
		}
	}
	puts("");
}