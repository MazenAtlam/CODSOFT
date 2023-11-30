#ifndef CALC_H
#define CALC_H

/*_libraries_*/
#include <iostream>
#include <iomanip>

using namespace std;


/*_define types_*/
typedef struct
{
	char op;
	float (*calc)(float first_operand, float second_operand);
} op_t;


/*_function prototypes_*/
float add(float first_operand, float second_operand);
float sub(float first_operand, float second_operand);
float mul(float first_operand, float second_operand);
float div(float first_operand, float second_operand);
int remainder(int first_operand, int second_operand);


#endif /*_CALC_*/
