#include "chap10t6.h"
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

//external variables
static int contents[STACK_SIZE];
static int top = 0;

static void make_empty(void)
{
	top = 0;
}

static bool is_empty(void)
{
	return top == 0;
}

static bool is_full(void)
{
	return top == STACK_SIZE;
}

static void push(int n)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = n;
}

static int pop(void)
{
	if (is_empty())
		return stack_underflow();
	else
		return contents[--top];
}

static void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

static int stack_underflow(void)
{
	printf("Stack underflow\n");
	return EXIT_FAILURE;
}

void operation(void) 
{
	int n;
	char c;
	do
	{
		scanf(" %c", &c);
		switch (c)
		{
		case '0':n = 0; push(n); break;
		case '1':n = 1; push(n); break;
		case '2':n = 2; push(n); break;
		case '3':n = 3; push(n); break;
		case '4':n = 4; push(n); break;
		case '5':n = 5; push(n); break;
		case '6':n = 6; push(n); break;
		case '7':n = 7; push(n); break;
		case '8':n = 6; push(n); break;
		case '9':n = 9; push(n); break;
		case '+':push(pop() + pop()); break;
		case '-':push(pop() - pop()); break;
		case '*':push(pop() * pop()); break;
		case '/':push(pop() / pop()); break;
		case '=':
			printf("Value of expression: %d", pop());
			make_empty();
			getchar();
			return;
		default:exit(EXIT_SUCCESS);
		}
	} while (c != '\n');
}

void chap10t6(void)
{
	while (1)
	{
		printf("\nEnter an RPN expression: ");
		operation();
	}
}

