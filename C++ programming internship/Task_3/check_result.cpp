#include "X_O.hpp"

/**
 * check_win - A function that checks if the player won
 * @grid: Grid of the required board
 *
 * Return: true at win state, false (otherwise)
 */
bool check_win(char grid[3][3])
{
	unsigned int i;

	for (i = 0; i < 3; i++)
	{
		if (grid[i][0] == grid[i][1] && grid[i][0] != '_')
		{
			if (grid[i][0] == grid[i][2])
				return true;
		}
	}
	for (i = 0; i < 3; i++)
	{
		if (grid[0][i] == grid[1][i] && grid[0][i] != '_')
		{
			if (grid[0][i] == grid[2][i])
				return true;
		}
	}
	if (grid[0][0] == grid[1][1] && grid[0][0] != '_')
	{
		if (grid[0][0] == grid[2][2])
			return true;
	}
	if (grid[1][1] == grid[0][2] && grid[1][1] != '_')
	{
		if(grid[1][1] == grid[2][0])
			return true;
	}

	return false;
}

/**
 * check_draw - A function checks if the state is draw
 * @grid: Grid of the required board
 *
 * Return: true at draw state, false (otherwise)
 */
bool check_draw(char grid[3][3])
{
	unsigned int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] == '_')
				return false;
		}
	}
	return true;
}
