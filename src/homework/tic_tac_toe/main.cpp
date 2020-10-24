#include "tic_tac_toe.h"


int main() 
{
	tic_tac_toe_board boardObj;
	string first = "";
	cout<<"Enter x or o";
	cin>>first;
	
	boardObj.start_game(first);	
	

	return 0;
}