#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Tictactoemarking and ending gamewith draw") {
	tic_tac_toe_board tesst;
	tesst.mark_board(5);
	tesst.mark_board(1);
	tesst.mark_board(3);
	tesst.mark_board(6);
	tesst.mark_board(4);
	tesst.mark_board(7);
	tesst.mark_board(2);
	tesst.mark_board(8);
	tesst.mark_board(9);
	REQUIRE(tesst.tic_tac_toe_board::game_over()== true);
}
TEST_CASE("Ending game with first column") {
	tic_tac_toe_board tesst;
	tesst.mark_board(1);
	tesst.mark_board(2);
	tesst.mark_board(4);
	tesst.mark_board(3);
	tesst.mark_board(7);
	REQUIRE(tesst.tic_tac_toe_board::game_over()== true);
}
TEST_CASE("Ending game with second column") {
	tic_tac_toe_board tesst;
	tesst.mark_board(2);
	tesst.mark_board(1);
	tesst.mark_board(5);
	tesst.mark_board(3);
	tesst.mark_board(8);
	REQUIRE(tesst.tic_tac_toe_board::game_over()== true);
}
TEST_CASE("Ending game with third column") {
	tic_tac_toe_board tesst;
	tesst.mark_board(3);
	tesst.mark_board(1);
	tesst.mark_board(6);
	tesst.mark_board(2);
	tesst.mark_board(9);
	REQUIRE(tesst.tic_tac_toe_board::game_over()== true);
}
TEST_CASE("Ending game with first row") {
	tic_tac_toe_board tesst;
	tesst.mark_board(1);
	tesst.mark_board(4);
	tesst.mark_board(2);
	tesst.mark_board(7);
	tesst.mark_board(3);
	REQUIRE(tesst.tic_tac_toe_board::game_over()== true);
}
TEST_CASE("Ending game with second row") {
	tic_tac_toe_board tesst;
	tesst.mark_board(4);
	tesst.mark_board(1);
	tesst.mark_board(5);
	tesst.mark_board(2);
	tesst.mark_board(6);
	REQUIRE(tesst.tic_tac_toe_board::game_over()== true);
}
TEST_CASE("Ending game with third row") {
	tic_tac_toe_board tesst;
	tesst.mark_board(7);
	tesst.mark_board(1);
	tesst.mark_board(8);
	tesst.mark_board(3);
	tesst.mark_board(9);
	REQUIRE(tesst.tic_tac_toe_board::game_over()== true);
}
TEST_CASE("Ending game diagonally from top left") {
	tic_tac_toe_board tesst;
	tesst.mark_board(1);
	tesst.mark_board(2);
	tesst.mark_board(5);
	tesst.mark_board(3);
	tesst.mark_board(9);
	REQUIRE(tesst.tic_tac_toe_board::game_over()== true);
}
TEST_CASE("Ending game diagonally from top right") {
	tic_tac_toe_board tesst;
	tesst.mark_board(3);
	tesst.mark_board(1);
	tesst.mark_board(5);
	tesst.mark_board(2);
	tesst.mark_board(7);
	REQUIRE(tesst.tic_tac_toe_board::game_over()== true);
}
TEST_CASE("Test first player set to x") {
	tic_tac_toe_board tesst;
	REQUIRE(tesst.get_player()== "x");
}
TEST_CASE("Test second player set to o") {
	tic_tac_toe_board tesst;
	tesst.set_next_player();
	REQUIRE(tesst.get_player()== "o");
}