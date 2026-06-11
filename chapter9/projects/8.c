#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DICE 6
#define TRUE 1
#define FALSE 0

typedef int Bool;

int roll_dice(void);
Bool play_game(void);
void loser(void);
void winner(void);

int main(void)
{
	int wins = 0,
	    loses = 0;	
	char command;

	srand((unsigned) time(NULL));
	
	do
	{
		if(play_game())				
			wins++;
		else
			loses++;

		printf("\nPlay again? ");

		scanf(" %c", &command);
		
	} while(command == 'Y' || command == 'y');

	printf("\nWins: %d  Loses: %d\n", wins, loses);

	return 0;
}
void loser(void)
{
	printf("You lose!\n");
}

void winner(void)
{
	printf("You win!\n");
}

int roll_dice(void)
{
	return ((rand() % DICE) + 1) + ((rand() % DICE) + 1);
}

Bool play_game(void)
{
	int sum = 0;

	sum = roll_dice();	

	printf("You rolled %d\n", sum);

	if(sum == 2 || sum == 3 || sum == 12)
	{
		loser();
		return FALSE;
	}
	if(sum == 7 || sum == 11)
	{
		winner();
		return TRUE;
	}
	
	printf("Your point is: %d\n", sum);
		
	while(TRUE)
	{
		int second_round = roll_dice();
		if(second_round == 7)
		{
			loser();
			return FALSE;		
		}
		if(second_round == sum)
		{
			winner();
			return TRUE;
		}
	}
}
