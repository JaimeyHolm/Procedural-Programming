#include <iostream>
using namespace std;

int main(){

	cout << "Geef een character: ";
	char character;
	int som;
	cin >> character;
	som = int(character) + 32;
	
	cout << character << " + 32 = " <<int(som) << "\n" <<
		character << " + 32 = " << char(som) << "\n" <<
		"\n";

	}