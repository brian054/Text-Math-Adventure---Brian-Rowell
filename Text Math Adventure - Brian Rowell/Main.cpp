#include <iostream>
#include <string>
using namespace std;

//Different types of combat based on location?
//One combat function that takes in a location to decide what enemies should appear?

bool combatCave() {
	cout << "Magikarp Appears!" << endl;
	return false;
}

int main() {
	
	string NAME;
	int cmd = 0;
	//Main Menu
	cout << "-----------------------------------" << endl;
	cout << "---------- The Proof God  ---------" << endl;
	cout << "-----------------------------------" << endl;
	cout << "--- 1. New Game          ----------" << endl;
	cout << "--- 2. Options           ----------" << endl;
	cout << "--- 3. Help              ----------" << endl;
	cout << "-----------------------------------" << endl;

	cout << "\nWhat would you like to do: ";
	cin >> cmd;

	//Problem: if you enter anything but a real number, infinite loop occurs
	while (cmd != 1 && cmd != 2 && cmd != 3) {
		if (cmd == 1) {
			cout << "1";
		}
		else if (cmd == 2) {
			cout << "2";
		}
		else if (cmd == 3) {
			cout << "3";
		}
		else {
			cout << "Nah pick 1, 2, or 3: ";
			cin >> cmd;
		}
	}
	
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