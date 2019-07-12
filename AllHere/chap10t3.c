#include "chap10t3.h"
#include <stdio.h>
#include <stdlib.h>

#define RANK 0
#define SUIT 1
//chap10t2:Calls read_cards,analyse_hand,and print_result repeatedly.
void chap10t3(void)
{
	int hand[NUM_CARDS][SUIT_AND_RANK];
	for (;;)
	{
		read_cards(hand,NUM_CARDS);
		analyse_hand(hand, NUM_CARDS);
		print_result();
	}
}

//read_cards:Reads the cards into the variables num_in_rank and num_in_suit;checks for bad cards and duplicate cards.
static void read_cards(int hand[][SUIT_AND_RANK], int n)
{
	char ch, rank_ch, suit_ch;
	int rank, suit,exist=0;
	bool bad_card;
	int cards_read = 0;

	for (int i = 0; i < NUM_CARDS; i++)
	{
		for (int j = 0; j < SUIT_AND_RANK; j++)
			hand[i][j] = 0;
	}

	while (cards_read < NUM_CARDS)
	{
		bad_card = false;
		
		exist = false;

		printf("Enter a card: ");

		rank_ch = getchar();
		switch (rank_ch)
		{
		case '0':exit(EXIT_SUCCESS);
		case '2':rank = 0; break;
		case '3':rank = 1; break;
		case '4':rank = 2; break;
		case '5':rank = 3; break;
		case '6':rank = 4; break;
		case '7':rank = 5; break;
		case '8':rank = 6; break;
		case '9':rank = 7; break;
		case 't':case 'T':rank = 8; break;
		case 'j':case 'J':rank = 9; break;
		case 'q':case 'Q':rank = 10; break;
		case 'k':case 'K':rank = 11; break;
		case 'a':case 'A':rank = 12; break;
		default:bad_card = true;
		}

		suit_ch = getchar();
		switch (suit_ch)
		{
		case 'c':case 'C': suit = 0; break;
		case 'd':case 'D': suit = 1; break;
		case 'h':case 'H': suit = 2; break;
		case 's':case 'S': suit = 3; break;
		default:bad_card = true; suit = 4;
		}

		while ((ch = getchar()) != '\n')
			if (ch != ' ') bad_card = true;

		for (int i = 0; i < cards_read; i++)
		{
			if (hand[i][RANK] == rank && hand[i][SUIT] == suit)
			{
				exist = true;
				break;
			}	
		}

		if (bad_card)
			printf("Bad card; ignored.\n");
		else if (exist)
			printf("Duplicate card; ignored.\n");
		else
		{
			hand[cards_read][RANK] = rank;
			hand[cards_read][SUIT] = suit;
			cards_read++;
		}
	}
}

//analyse_hand:Determines whether the hand contains a straight,a flush,four-of-a-kind,
//             and/or three-of-a-kind;determines the number of pairs;stores the results
//             into the external variables straight,flush,four,three,and pairs.
static void analyse_hand(int hand[][SUIT_AND_RANK], int n)
{
	int card = 0, run = 0;
	int rank, suit;

	straight = true;
	flush = true;
	four = false;
	three = false;
	pairs = 0;

	//sort
	for (int i = 0; i < NUM_CARDS - 1; i++)
		for (int j = 0; j < NUM_CARDS - i - 1; j++)
			if (hand[j][RANK] > hand[j + 1][RANK])
			{
				int temp = hand[j][RANK];
				hand[j][RANK] = hand[j + 1][RANK];
				hand[j + 1][RANK] = temp;
			}

	//check for flush
	suit = hand[0][SUIT];
	for (int i = 1; i < NUM_CARDS; i++)
	{
		if (hand[i][SUIT] != suit)
		{
			flush = false;
			break;
		}
	}

	//check for straight
	for (int i = 0; i < NUM_CARDS-1; i++)
		if (hand[i][RANK] + 1 != hand[i + 1][RANK])
			straight = false;

	//check for 4-of-a-kind ,3-of-a-kind, and pairs
	//copied from book
	while (card < NUM_CARDS) 
	{
		rank = hand[card][RANK];
		run = 0;
		do
		{
			run++;
			card++;
		} while (card < NUM_CARDS && hand[card][RANK] == rank);
		switch (run) {
		case 2: pairs++;      break;
		case 3: three = true; break;
		case 4: four = true;  break;
		}
	}
}

//print_result:Prints the classification of the hand,
//			   based on the values of the external
//			   variables straight,flush,four,three,and pairs
static void print_result(void)
{
	if (straight&&flush) printf("Straight flush");
	else if (four) printf("Four of a kind");
	else if (three && pairs == 1) printf("Full house");
	else if (flush) printf("Flush");
	else if (straight) printf("Straight");
	else if (three) printf("Three of a kind");
	else if (pairs == 2) printf("Two pairs");
	else if (pairs == 1) printf("Pair");
	else                printf("High card");

	printf("\n\n");
}