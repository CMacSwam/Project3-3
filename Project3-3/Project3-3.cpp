#include <iostream>
#include <string>

using namespace std;
int main() {
	int eggs;
	int cartons;
	int leftover;
	cout << "How many eggs did the chickens lay last night?";
	cin >> eggs;
	cartons = eggs / 12;
	leftover = eggs % 12;
	cout << "She is going to need " << cartons << " cartons and she will have " << leftover << " eggs in her basket for scambled eggs!";
}