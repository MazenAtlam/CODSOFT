#include "X_O.hpp"

/**
 * setup_board - A function that reset all the board
 * @grid: Grid of the required board
 *
 * Return: Nothing
 */
void setup_board(char grid[3][3])
{
	unsigned int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			grid[i][j] = '_';
	}
}


/**
 * print_board - A function that prints the board
 * @grid: Grid of the required board
 *
 * Return: Nothing
 */
void print_board(char grid[3][3])
{
	unsigned int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << grid[i][j];
			if (j != 2)
				cout << " ";
			else
				cout << endl;
		}
	}
}
