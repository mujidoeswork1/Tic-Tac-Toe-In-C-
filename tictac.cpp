#include "tictac.h"
#include <iostream>
using namespace std;

void tictac::menu() {
	set_char();
	b1.dsplyboard();
	cout << "\n\n\n";
	for (int i = 0; i < 9; i++) {
		set_mark_at_index();
		cout << endl;
		system("cls");
		cout << endl;
		b1.dsplyboard();
		b1.checkwin(current_player);
		switch_player();
		switch_symbols();
		cout << "\n\n\n";
		//system("cls");
		if (i == 8) {
			cout << "\n*****GAME TIED*****\n\n";
			exit(0);
		}
	}

	
}

tictac::tictac():current_player(1)
{

}

void tictac::set_mark_at_index() {

	cout << "player-" << current_player << " at which index you want to mark your symbol?\n";
	cout << "Enter value between 1-9\n";
	cin >> index;
	set_row_col();

	while (((index < 1) || (index > 9)) || (b1.check_index(row, col) == false)) {

		while ((index < 1) || (index > 9)) {
			cout << "choose value between 1-9\n";
			cout << "player-" << current_player << " at which index you want to mark your symbol?\n";
			//cout << "Enter value between 1-9\n";
			cin >> index;
			set_row_col();
		}
		
		while (b1.check_index(row, col) == false) {
			cout << "this index has already been selected\n";
			cout << "choose value between 1-9\n";
			cout << "player-" << current_player << " at which index you want to mark your symbol?\n";
			//cout << "Enter value between 1-9\n";
			cin >> index;
			if ((index < 1) || (index > 9)) {
				break;
			}
			set_row_col();
			//break;
			
		}
	}


	
	
	b1.change_board(current_char, row, col);
}

void tictac::set_row_col() {
	if (index == 1) {
		row = 0;
		col = 0;
		//cout << "h";
	}
	else if (index == 2) {
		row = 0;
		col = 1;
	}
	else if (index == 3) {
		row = 0;
		col = 2;
	}

	else if (index == 4) {
		row = 1;
		col = 0;
	}
	else if (index == 5) {
		row = 1;
		col = 1;
	}
	else if (index == 6) {
		row = 1;
		col = 2;
	}

	else if (index == 7) {
		row = 2;
		col = 0;
	}
	else if (index == 8) {
		row = 2;
		col = 1;
	}
	else if (index == 9) {
		row = 2;
		col = 2;
	}
}

void tictac::set_char() {
	int choice;
	cout << "player-1 which Symbol you want to carry through the game?\n1) X\n2) O\n";
	cin >> choice;
	/*while ((choice>1) || (choice > 2)) {
		cout << "choose between X & O ONLY\n";
		cout << "which Symbol you want to carry through the game?\n1) X\n2) O\n";
		cin >> choice;
	}*/
	if (choice == 1) {
		player1_char = 'X';
		current_char = player1_char;
		player2_char = 'O';
		cout << "player-2 you will go through the game with this 'O' symbol\n\n\n";
	}
	else if (choice == 2) {
		player1_char = 'O';
		current_char = player1_char;
		player2_char = 'X';
		cout << "player-2 you will go through the game with this 'X' symbol\n\n\n";
	}
}
void tictac::switch_player() {
	if (current_player == 1) {
		current_player = 2;
	}
	else if (current_player == 2) {
		current_player = 1;
	}
}
void tictac::switch_symbols() {
	if (current_char == 'X') {
		current_char = 'O';
	}
	else if (current_char == 'O') {
		current_char = 'X';
	}
}