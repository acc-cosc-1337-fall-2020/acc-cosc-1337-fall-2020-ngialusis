#include"tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;

int main() 
{
	char cont = 'y';
	TicTacToe game;
	string player;

	do 
	{

		while(player != "X"  && player != "O")
		{
			cout << "Enter X or O";
			cin >> player;
		}

		game.start_game(player);

		while(game.game_over() == false)
		{
			int position = 0;
			
			while(position < 1 || position > 9)
			{
				cout<<"Enter position 1-9: ";
				cin>>position;
			}

			game.mark_board(position);
			game.display_board();
		}
		
		player = "";
		cout << "Game over: ";

		cout << "Play again y";
		cin >> cont;

	} while (cont == 'y' || cont == 'Y');


	return 0;
}
