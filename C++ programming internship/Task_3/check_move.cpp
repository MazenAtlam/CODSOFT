#include "X_O.hpp"

/**
 * check_move - A function that checks if the move inputs are valid
 * @grid: Grid of the required board
 * @row: The number of the move row
 * @column: The number of the move column
 *
 * Return: true (if the inputs are valid), false (otherwise)
 */
bool check_move(char grid[3][3], unsigned int row, unsigned int column)
{
	if (row >= 3 || column >= 3)
		return false;

	if (grid[row][column] != '_')
		return false;

	return true;
}
