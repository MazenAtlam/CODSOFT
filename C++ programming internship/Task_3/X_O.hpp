#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

/*_libraries_*/
#include <iostream>

using namespace std;


/*_function prototypes_*/
void setup_board(char grid[3][3]);
void print_board(char grid[3][3]);
bool check_win(char grid[3][3]);
bool check_draw(char grid[3][3]);
bool check_move(char grid[3][3], unsigned int row, unsigned int column);


#endif /*_Tic_Tac_Toe_*/
