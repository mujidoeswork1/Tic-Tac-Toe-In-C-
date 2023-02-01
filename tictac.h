#pragma once
#include "board.h"
class tictac
{
	board b1;
	char current_char, player1_char, player2_char;
	int row, col, index;
	int current_player;
	//bool win;

public:
	tictac();
	void menu();
	void set_char();
	void set_mark_at_index();
	void switch_player();
	void switch_symbols();
	void set_row_col();

};

