#include <stdbool.h>
#ifndef CHAP10STACK_H
#define CHAP10STACK_H

void chap10stack(void);

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
char stack_underflow(void);

#endif