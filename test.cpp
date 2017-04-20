#include "RPC.cpp"
#include <iostream>
using namespace std;

int main() {
	string input;
	
	cout << "Welcome traveller, what is your name?" << endl;
	cin >> input;

	RPC player(input);
	player.printStats();
	
	return 0;
}