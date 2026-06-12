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
void pop(void);
void stack_overflow(void);
void stack_underflow(void);	

int main(void)
{
	char ch;

	printf("Enter parentheses and/or braces: ");
	
	while((ch = getchar()) != '\n')
	{
	
	
	return 0;
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == '\0';
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

void pop(void)
{
	if(is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow()
{
	printf("Segmentation fault, you exceeded the size of the stack.");
	exit(EXIT_FAILURE);
}

void stack_underflow()
{
	printf("Segmentation fault, you went under the amount allocated on the stack.");
	exit(EXIT_FAILURE);

void missing(void)
{
	printf("The parentheses/braces aren't nested properly.");
}
