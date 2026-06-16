#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
int push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);	

int main(void)
{
	char ch;

	printf("Enter an RPN expression: ");
	
	while(scanf(" %c", &ch) == 1)
	{
		if(ch >= '0' && ch <= '9')
		{
			push(ch - '0');	
		}	
		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			int first, second;
			switch(ch)
			{
				case '+':
					first = pop();
					second = pop();
					push(first + second);
					break;
				case '-':
					first = pop();
					second = pop();
					push(second - first);
					break;
				case '*':
					first = pop();
					second = pop();
					push(first * second);
					break;
				case '/':
					first = pop();
					second = pop();
					push(second / first);
					break;
				default:
					break;
			}
		}
		else if(ch == '=')
		{
			int result = pop();
			if(!is_empty())
			{
				printf("Too many operands in expression\n");
				exit(EXIT_FAILURE);	
			}
			else
			{
				printf("Value of expression: %d\n", result);
				printf("Enter an RPN expression: ");
			}
		}	
		else if(ch == 'q')
		{
			exit(EXIT_SUCCESS);	
		}
		else
		{
			break;
		}
	}
	return 0;
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

int push(int i)
{
	if(is_full())
		stack_overflow();
	else
		return contents[top++] = i;
}

int pop(void)
{
	if(is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow()
{
	printf("Expression is too complex\n");
	exit(EXIT_FAILURE);
}

void stack_underflow()
{
	printf("Not enough operands in expression\n");
	exit(EXIT_FAILURE);
}

