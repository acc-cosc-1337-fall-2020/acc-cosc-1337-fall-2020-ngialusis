//h
#include<string>
#include<vector>
#include "tic_tac_toe.h"

using std::string; using std::vector;

#include<iostream>

using std::ostream; using std::istream;

//h
/*
Represents one game of tic tac toe.
*/
class TicTacToeManager
{
public:
	void save_game(TicTacToe b);
    friend std::istream& operator>> (istream& stream, const TicTacToe& v);
    void get_winner_total(int& o, int& w, int&t);
private:
    TicTacToe g;
    vector<TicTacToe> games{1};
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);
	
};