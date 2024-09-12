/*
* File: P3-3
* Author: Chase McCluskey
* Date: 9/12/2024
* 
* Description: Telling Mrs.Tweedy how many cartons and many eggs leftover she is going to have
*/

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