#include "tic_tac_toe.h"


int main() 
{
	
	string first = "";
	string contin = "";
	do
	{
		cout<<"Enter x or o ";
		cin>>first;
		tic_tac_toe_board boardObj;
		boardObj.start_game(first);	
		cout<<"Play again? (y or n)\n";
		cin>>contin;
		
	}
	while(contin == "y");

	return 0;
}