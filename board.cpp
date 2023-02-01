#include <iostream>
#include "board.h"
using namespace std;

board::board() {
	a = '0';
	int temp = 49;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b[i][j] = temp;
			++temp;
		}
	}
}
void board::dsplyboard() {
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		if (j == 2) {
	//			cout << "|" << "__" << b[i][j] << "__" << "|";
	//		}
	//		else {
	//			cout << "|" << "__" << b[i][j] << "__";
	//		}
	//	}
	//	cout << endl;
	//}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 2) {
				cout << " " << b[i][j];
			}
			else {
				cout << " " << b[i][j] << " |";
			}
		}
		cout << endl<<"-----------\n";
	}
}
void board::change_board(char c, int row, int col) {
	b[row][col] = c;
}
void board::checkwin(int current_player) {
	if ((b[0][0] == b[0][1]) && (b[0][1] == b[0][2])) {
		cout << current_player << endl;
		cout<<"player-" << current_player << " won the game\n";
		win = 1;
		//cout << "\n1\n";
		exit(0);
	}
	else if ((b[1][0] == b[1][1]) && (b[1][1] == b[1][2])) {
		cout << "player-" << current_player << " won the game\n";
		win = 1;
		//cout << "\n2\n";
		exit(0);
	}
	else if ((b[2][0] == b[2][1]) && (b[2][1] == b[2][2])) {
		cout << "player-" << current_player << " won the game\n";
		win = 1;
		//cout << "\n3\n";
		exit(0);
	}

	else if ((b[0][0] == b[1][0]) && (b[1][0] == b[2][0])) {
		cout << "player-" << current_player << " won the game\n";
		win = 1;
		//cout << "\n4\n";
		exit(0);
	}
	else if ((b[0][1] == b[1][1]) && (b[1][1] == b[2][1])) {
		cout << "player-" << current_player << " won the game\n";
		win = 1;
		//cout << "\n5\n";
		exit(0);
	}
	else if ((b[0][2] == b[1][2])&& (b[1][2] == b[2][2])) {
		cout << "player-" << current_player << " won the game\n";
		win = 1;
		exit(0);
	}

	else if ((b[0][0] == b[1][1]) &&(b[1][1] == b[2][2])) {
		cout << "player-" << current_player << " won the game\n";
		win = 1;
	//	cout << "\n6\n";
		exit(0);
	}
	else if ((b[0][2] == b[1][1]) && (b[1][1] == b[2][0])) {
		cout << "player-" << current_player << " won the game\n";
		win = 1;
		//cout << "\n7\n";
		exit(0);
	}

}
bool board::bool_win() {
	return win;
}
bool board::check_index(int r, int c) {
	if ((b[r][c] == 'X') || (b[r][c] == 'O')) {
		//cout << b[r][c] << endl;
		//cout<<"this index is already selected, try another one\n";
		return false;
	}
	else {
		return true;
	}
}