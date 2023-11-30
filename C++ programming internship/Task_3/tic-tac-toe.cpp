#include "X_O.hpp"

/**
 * main - Entry point
 *
 * Description: A Tic-Tac-Toe game that allows two players to play together
 *
 * Return Always 0 (success)
 */
int main(void)
{
	char board[3][3];
	unsigned int i, j, round, player, play_again = 0;
	char ch[2] = {'X', 'O'};

	cout << "Welcome to TIC-TAC-TOE GAME" << endl;
	do
	{
		cout << endl;
		setup_board(board);
		cout << "Player 1 plays with \'X\' and player 2 plays with \'O\'" << endl;
		round = 0;
		while (1)
		{
			cout << "The current state is:" << endl;
			print_board(board);
			if (check_win(board) == true && round != 0)
			{
				cout << "Game Over\nThe result: Player " << player << " won!" << endl;
				break;
			}
			if (check_draw(board) == true && round != 0)
			{
				cout << "Game Over\nThe result: draw" << endl;
				break;
			}
			cout << "The result: ongoing" << endl;
			round++;
			player = ((round + 1) % 2) + 1;
			cout << "Current player: " << player << endl;
			while (1)
			{
				cout << "Enter the move row from 1 to 3: ";
				cin >> i;
				cout << "Enter the move column from 1 to 3: ";
				cin >> j;
				if (check_move(board, i - 1, j - 1) == true)
					break;
				else
					cout << "Error: Can't do this move\nPlease try again" << endl;
			}
			board[i - 1][j - 1] = ch[player - 1];
		}
		cout << "Enter 0 if you want to exit or a non-zero value to play again: ";
		cin >> play_again;
	} while (play_again);

	return 0;
}
