//Classifies a poker hand
#ifndef CHAP10T2_H
#define CHAP10T2_H

#include <stdbool.h>
void chap10t2(void);

#define NUM_RANKS 13 
#define NUM_SUITS 4
#define NUM_CARDS 5

//external variables
bool straight, flush, four, three;
int pairs;//can be 0,1,2

void read_cards(int num_in_rank[], int num_in_suit[]);
void analyse_hand(int num_in_rank[], int num_in_suit[]);
void print_result(void);

#endif