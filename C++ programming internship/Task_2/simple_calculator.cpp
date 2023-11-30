#define PRECISION 3
#define ROUND(x) fixed << setprecision(PRECISION) << x
#include "calc.hpp"


/*_global variables_*/
bool err_occured;


/**
 * main - Entry point
 *
 * Description: A simple calculator that performs basic arithmetic operations
 *		such as addition, subtraction, multiplication, division and modulus
 *
 * Return: 0 (success), a non-zero value (failure)
 */
int main(void) {

	op_t op_s[] = { {'+', add}, {'-', sub}, {'*', mul},
			{'/', div}, {'\0', NULL} };
	float num1, num2, result;
	unsigned int i;
	bool op_found;
	char op;

	while (1)
	{
		err_occured = false;
		cout << endl;
		cout << "Choose an operator: \n" << "- Enter \'+\' for addition\n"
			<< "- Enter \'-\' for subtraction\n" << "- Enter \'*\' for multiplication\n"
			<< "- Enter \'/\' for division\n" << "- Enter \'%\' for modulus\n"
			<< "- Enter \'E\' to exit" << endl;
		cout << "Enter an operator: ";
		cin >> op;
		if (op == 'E')
			break;
		cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the second number: ";
		cin >> num2;
		if (op == '%')
		{
			result = remainder(num1, num2);
			op_found = true;
		}
		else
		{
			for (i = 0; op_s[i].op != '\0'; i++)
			{
				if(op == op_s[i].op)
				{
					result = op_s[i].calc(num1, num2);
					op_found = true;
					break;
				}
				op_found = false;
			}
		}
		if (!op_found)
			cout << "Error: Invalid operator\nPlease, try again" << endl;
		else if (!err_occured)
			cout << "The result is: " << ROUND(result) << endl;
	}
	cout << "Calculator Ended." << endl;

	return 0;
}
