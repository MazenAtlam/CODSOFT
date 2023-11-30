#include "calc.hpp"


extern bool err_occured;


/* 
 * add - A function that adds two numbers
 * @first_operand: The first number
 * @second_operand: The second number
 *
 * Return: The sum of two numbers
 */
float add(float first_operand, float second_operand)
{
	return (first_operand + second_operand);
}


/*
 * sub - A function that substracts two numbers
 * @first_operand: The first number
 * @second_operand: The second number
 *
 * Return: The substracion of two numbers
 */
float sub(float first_operand, float second_operand)
{
	return (first_operand - second_operand);
}


/*
 * mul - A function that multiplies two numbers
 * @first_operand: The first number
 * @second_operand: The second number
 *
 * Return: The multiplication of two numbers
 */
float mul(float first_operand, float second_operand)
{
	return (first_operand * second_operand);
}


/*
 * div - A function that divids two numbers
 * @first_operand: The first number
 * @second_operand: The second number
 *
 * Return: The division of two numbers
 */
float div(float first_operand, float second_operand)
{
	if (second_operand == 0)
	{
		cout << "Error: Can't divide by zero\nPlease, try again" << endl;
		err_occured = true;

		return (-99);
	}
	return (first_operand / second_operand);
}


/*
 * remainder - A function that return the remainder of division of two numbers
 * @first_operand: The first number
 * @second_operand: The second number
 *
 * Return: The remainder of division of two numbers
 */
int remainder(int first_operand, int second_operand)
{
	if (second_operand == 0)
	{
		cout << "Error: Can't divide by zero\nPlease, try again" << endl;
		err_occured = true;

		return (-98);
	}
	return (first_operand % second_operand);
}
