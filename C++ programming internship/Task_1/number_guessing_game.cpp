#define CLOSE 50
#define HOT 10
#define MIN -100	// the minimum number
#define MAX 100 	// the maximum number
#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * main - Entry point
 *
 * Description: A number guessing game
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, rnum = MIN + (rand() % (MAX - MIN + 1)), play_again = 0;
	bool first_guess;

	cout << "Welcome to NUMBER GUESSING GAME" << endl;
	do
	{
		first_guess = true;
		cout << "Let's go!\nI have a number, try to guess it" << endl;
		cout << "Number range is [" << MIN << " : " << MAX << "]" << endl;
		do
		{
			if (!first_guess)
				cout << "\nNever give up\nTry Again!" << endl;
			cout << "Enter a guess: ";
			cin >> n;
			first_guess = false;
			if (n < MIN || n > MAX)
				cout << "The number is out of range" << endl;
			else if (n > rnum)
			{
				if ((n - CLOSE) > rnum)
					cout << "You are too high" << endl;
				else if ((n - HOT) > rnum)
					cout << "You are still high, but closer!" << endl;
				else
					cout << "Nice one!\nYou are still high, but that's very close!!" << endl;
			}
			else if (n < rnum)
			{
				if ((n + CLOSE) < rnum)
                                        cout << "You are too high" << endl;
                                else if ((n + HOT) < rnum)
                                        cout << "You are still low, but closer!" << endl;
                                else
                                        cout << "Nice one!\nYou are still low, but that's very close!!" << endl;
			}
		} while (n != rnum);
		cout << "Congratulations, that's the right guess!" << endl;
		cout << "Enter 0 if you want to exit or a non-zero value to play again: ";
		cin >> play_again;
	} while (play_again);

	return 0;
}
