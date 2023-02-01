#include <iostream>
#include "tictac.h"
using namespace std;

int main() {

	/*board b1;
	b1.change_board('x', 0, 0);
	b1.change_board('x', 0, 1);
	b1.change_board('x', 0, 2);
	b1.dsplyboard();
	b1.checkwin(1);*/
	do {
		char choice;
		tictac t1;
		t1.menu();
		cout << "do you want to play again? if yes, press y else press n\n";
		cin >> choice;
	} while (choice=='y');
	


	return(0);
}