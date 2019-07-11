//Classifies a poker hand
#ifndef CHAP10T3_H
#define CHAP10T3_H

#include <stdbool.h>
void chap10t3(void);

#define NUM_RANKS 13 
#define NUM_SUITS 4
#define NUM_CARDS 5

#define SUIT_AND_RANK 2

//external variables
bool straight, flush, four, three;
int pairs;//can be 0,1,2

static void read_cards(int hand[][SUIT_AND_RANK],int n);
static void analyse_hand(int hand[][SUIT_AND_RANK],int n);
static void print_result(void);

#endif