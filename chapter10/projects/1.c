#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

char contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);	
void missing(void);

int main(void)
{
	char ch;

	printf("Enter parentheses and/or braces: ");
	
	while((ch = getchar()) != '\n')
	{
		if(ch == '}' && pop() != '{')
		{
			missing();			
		}	
		else if(ch == ')' && pop() != '(')
		{
			missing();	
		}
		else if(ch == '(' || ch == '{')
		{
			push(ch);
		}
		
	}
	
	if(ch == '\n' && is_empty())
	{
		printf("Parentheses/braces are nested properly\n");
		return 0;
	}
	else
	{
		missing();
	}
}

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

void push(char i)
{
	if(is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

char pop(void)
{
	if(is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow()
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

void stack_underflow()
{
	printf("The parentheses/braces aren't matched.\n");
	exit(EXIT_FAILURE);
}

void missing(void)
{
	printf("Missing braces or parenthesis.\n");
	exit(EXIT_FAILURE);
}
