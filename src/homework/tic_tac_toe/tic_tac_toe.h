//h
#include<string>
#include<iostream>



using std::string; using std::cout; using std::cin;

class tic_tac_toe_board{


public:
    string num1 = " ";
    string num2 = " ";
    string num3 = " ";
    string num4 = " ";
    string num5 = " ";
    string num6 = " ";
    string num7 = " ";
    string num8 = " ";
    string num9 = " ";
    string board = "";
    int choice;
    bool xoro = true;
    bool game = true;

    tic_tac_toe_board()
    {
        board = num1 + " | " + num2 + " | "+ num3 + "\n" + num4 + " | " + num5 + " | " + num6 + "\n" + num7 + " | " + num8 + " | " + num9 + "\n";
    }

    void start_game(string first_player);

    string refresh_board();

    string display_board();

    void mark_board(int pos);

    string get_player();

    void set_next_player();

    bool check_board_full();

    bool game_over();

    string get_winner();
private:
string winner = "";

bool check_column_win();
bool check_row_win();
bool check_diagonal_win();
void set_winner();
};
