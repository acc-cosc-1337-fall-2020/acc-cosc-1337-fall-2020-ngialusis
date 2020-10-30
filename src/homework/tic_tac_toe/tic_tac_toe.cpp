//cpp
#include "tic_tac_toe.h"

void tic_tac_toe_board::start_game(string first_player)
{
    if (first_player == "o")
    {
        xoro = false;
    }
    while (!game_over())
    {
        cout << "Please enter  the next spot 1-9 ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            /* code */
            if (xoro)
            {
                num1 = "x";
                xoro = false;
            }
            else
            {
                num1 = "o";
                xoro = true;
            }
            cout << refresh_board();

            break;
        case 2:
            /* code */
            if (xoro)
            {
                num2 = "x";
                xoro = false;
            }
            else
            {
                num2 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 3:
            /* code */
            if (xoro)
            {
                num3 = "x";
                xoro = false;
            }
            else
            {
                num3 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 4:
            /* code */
            if (xoro)
            {
                num4 = "x";
                xoro = false;
            }
            else
            {
                num4 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 5:
            /* code */
            if (xoro)
            {
                num5 = "x";
                xoro = false;
            }
            else
            {
                num5 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 6:
            /* code */
            if (xoro)
            {
                num6 = "x";
                xoro = false;
            }
            else
            {
                num6 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 7:
            /* code */
            if (xoro)
            {
                num7 = "x";
                xoro = false;
            }
            else
            {
                num7 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 8:
            /* code */
            if (xoro)
            {
                num8 = "x";
                xoro = false;
            }
            else
            {
                num8 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 9:
            /* code */
            if (xoro)
            {
                num9 = "x";
                xoro = false;
            }
            else
            {
                num9 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        default:
            break;
        }
    }
    cout<<get_winner()<<" Won! \n";
}

string tic_tac_toe_board::refresh_board()
{
    board = num1 + " | " + num2 + " | " + num3 + "\n" + num4 + " | " + num5 + " | " + num6 + "\n" + num7 + " | " + num8 + " | " + num9 + "\n";
    check_board_full();
    return board;
}

string tic_tac_toe_board::get_player()
{
    if (xoro)
    {
        return "x";
    }
    else
    {
        return "o";
    }
}

void tic_tac_toe_board::mark_board(int pos)
{
    switch (pos)
        {
        case 1:
            /* code */
            if (xoro)
            {
                num1 = "x";
                xoro = false;
            }
            else
            {
                num1 = "o";
                xoro = true;
            }
            cout << refresh_board();

            break;
        case 2:
            /* code */
            if (xoro)
            {
                num2 = "x";
                xoro = false;
            }
            else
            {
                num2 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 3:
            /* code */
            if (xoro)
            {
                num3 = "x";
                xoro = false;
            }
            else
            {
                num3 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 4:
            /* code */
            if (xoro)
            {
                num4 = "x";
                xoro = false;
            }
            else
            {
                num4 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 5:
            /* code */
            if (xoro)
            {
                num5 = "x";
                xoro = false;
            }
            else
            {
                num5 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 6:
            /* code */
            if (xoro)
            {
                num6 = "x";
                xoro = false;
            }
            else
            {
                num6 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 7:
            /* code */
            if (xoro)
            {
                num7 = "x";
                xoro = false;
            }
            else
            {
                num7 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 8:
            /* code */
            if (xoro)
            {
                num8 = "x";
                xoro = false;
            }
            else
            {
                num8 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 9:
            /* code */
            if (xoro)
            {
                num9 = "x";
                xoro = false;
            }
            else
            {
                num9 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        default:
            break;
        }
}

string tic_tac_toe_board::display_board()
{
    string bode = refresh_board();
    cout<<bode;
    return bode;
}

void tic_tac_toe_board::set_next_player()
{
    if (xoro)
    {
        xoro = false;
    }
    else
    {
        xoro = true;
    }
}

bool tic_tac_toe_board::check_board_full()
{
    if (num1 != " " && num2 != " " && num3 != " " && num4 != " " && num5 != " " && num6 != " " && num7 != " " && num8 != " " && num9 != " ")
    {
        game=false;
        return true;
    }
    return false;
}

bool tic_tac_toe_board::game_over()
{
    
    if(num1 != " " && num1 == num2 && num2 == num3)
    {
        set_winner();
        return true;
    }
    else if(num4 != " " && num4 == num5 && num5 == num6)
    {
        set_winner();
        return true;
    }
    else if(num7 != " " && num7 == num8 && num8 == num9)
    {
        set_winner();
        return true;
    }
    else if(num1 != " " && num1 == num4 && num4 == num7)
    {
        set_winner();
        return true;
    }
    else if(num2 != " " && num2 == num5 && num5 == num8)
    {
        set_winner();
        return true;
    }
    else if(num3 != " " && num3 == num6 && num6 == num9)
    {
        set_winner();
        return true;
    }
    else if(num1 != " " && num1 == num5 && num5 == num9)
    {
        set_winner();
        return true;
    }
    else if(num3 != " " && num3 == num5 && num5 == num7)
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        set_winner();
        return true;
    }

    return false;
}

string tic_tac_toe_board::get_winner()
{
    return winner;
}

void tic_tac_toe_board::set_winner()
{
    if(xoro)
    {
        winner = "o";
    }
    else
    {
        winner = "x";
    }
}