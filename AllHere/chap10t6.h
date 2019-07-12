#include <stdbool.h>
#ifndef CHAP10T6_H
#define CHAP10T6_H

void chap10t6(void);

static void make_empty(void);
static bool is_empty(void);
static bool is_full(void);
static void push(int n);
static int pop(void);
static void stack_overflow(void);
static int stack_underflow(void);

#endif