#include "Warrior.h"
#include <iostream>
using namespace std;

int main() {
	string input;

	cout << "Welcome traveller, enter your name: ";
	getline(cin, input);

	Warrior player(input);

	player.levelUp();

	return 0;
}
