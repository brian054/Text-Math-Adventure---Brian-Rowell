#include <iostream>
#include <string>
using namespace std;

//Different types of combat based on location?
//One combat function that takes in a location to decide what enemies should appear?

enum state {
	MAIN_MENU, OPTIONS, HELP, NEWGAME
};

string inputString(string display) {
	string s;
	cout << display << " : ";
	cin >> s;
	return s;
}

int main() {
	state s = MAIN_MENU;

	while (true) {
		switch (s) {
		case MAIN_MENU: {
			//Main Menu
			cout << "-----------------------------------" << endl;
			cout << "---------- The Proof God  ---------" << endl;
			cout << "-----------------------------------" << endl;
			cout << "--- 1. (N)ew Game         ---------" << endl;
			cout << "--- 2. (O)ptions          ---------" << endl;
			cout << "--- 3. (H)elp             ---------" << endl;
			cout << "-----------------------------------" << endl;

			char state;
			do {
				cout << "\nWhat would you like to do?" << endl;
				char state = cin.get();
			} while (state != 'N' && state != 'O' && state != 'H');

			if (state == 'N') {
				s = NEWGAME;
			}
			else if (state == 'O') {
				s = OPTIONS;
			}
			else if (state == 'H') {
				s = HELP;
			}
			break;
		}
		case OPTIONS: {
			cout << "There are literally no options bro.." << endl;
			break;
		}
		case HELP: {
			break;
		}
		case NEWGAME: {
			break;
		}

		}
	}

	string NAME;
	/*
	cout << "You awaken, you are in a small pool of water in a dark cave...." << endl;
	cout << "\"Where am I?.....\"" << endl;
	cout << "You stand up, you think for a second...." << endl;
	cout << "\"The hell is my name...?\"" << endl;
	cout << "Please enter your name: ";
	cin >> NAME;
	cout << "\"Oh yeah I'm " << NAME << ".\"" << endl;
	*/

	system("pause");
	return 0;
}