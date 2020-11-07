//cpp
#include "tic_tac_toe_manager.h"
#include<iostream>

using std::cout;
void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    if(b.game_over())
    {
        update_winner_count(b.get_player());
    }

}

void TicTacToeManager::get_winner_total(int& o, int& w, int&t)
{
    cout<<"O has won:" << o_win << "\nX has won:" << x_win << "\n" << ties << "ties\n";
}

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else 
    {
        ties++;
    }
}