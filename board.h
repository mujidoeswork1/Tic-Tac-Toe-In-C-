#pragma once
class board
{
	char a;
	char b[3][3];
	bool win;
public:
	board();
	void dsplyboard();
	void change_board(char c, int row, int col);
	void checkwin(int current_player);
	bool check_index(int, int);
	bool bool_win();
};

