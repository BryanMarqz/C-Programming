		{
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void)
{
    int board[N][N] = {0};
    int row = 0, col = 0;
    int temp_row, temp_col;

    char letters = 'A';

    srand((unsigned) time(NULL));

    // starting position
    board[row][col] = letters;

    while (letters < 'Z')
    {
        int directions[4] = {0, 1, 2, 3};

        // shuffle directions
        for (int i = 0; i < 4; i++)
        {
            int j = rand() % 4;
            int temp = directions[i];
            directions[i] = directions[j];
            directions[j] = temp;
        }

        int moved = 0;

        for (int i = 0; i < 4; i++)
        {
            temp_row = row;
            temp_col = col;

            if (directions[i] == 0) temp_row--;       // up
            else if (directions[i] == 1) temp_col++;  // right
            else if (directions[i] == 2) temp_row++;  // down
            else if (directions[i] == 3) temp_col--;  // left

            if (temp_row >= 0 && temp_row < N &&
                temp_col >= 0 && temp_col < N &&
                board[temp_row][temp_col] == 0)
            {
                row = temp_row;
                col = temp_col;
                board[row][col] = ++letters;
                moved = 1;
                break;
            }
        }

        if (!moved)
            break; // no valid moves available
    }

    // print board
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (board[i][j] == 0)
                printf(". ");
            else
                printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
