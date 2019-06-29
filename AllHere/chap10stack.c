#include "chap10stack.h"
#include <stdio.h>
//#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

//external variables
char contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(char ch)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = ch;
}

char pop(void)
{
	if (is_empty())
		return stack_underflow();
	else
		return contents[--top];
}

void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

char stack_underflow(void)
{
	printf("Stack underflow\n");
	return EXIT_FAILURE;
}

void chap10stack(void)
{
	char ch = 0;
	char record =0;
	printf("Enter parenteses and/or braces:");
	while ((ch = getchar()) != '\n')
	{
		if (ch == '(' || ch == '{')
			push(ch);
		else if (ch == ')' || ch == '}')
		{
			record = pop();
			if (ch == ')'&& record == '(')
				continue;
			else if (ch == '}'&& record == '{')
				continue;
			else
				break;
		}
		else
			puts("Ignore!");
	}

	if (record == EXIT_FAILURE)
	{
		puts("Stack underflow");
		exit(EXIT_SUCCESS);
	}

	if (is_empty())
		puts("Parenteses/braces are nested properly");
	else
		puts("Parenteses/braces are not nested");
}