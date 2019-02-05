#include <iostream>
using namespace std;

int main(){
	
	int verschil = int('a') - int('A');
	int gMinVerschil = int('g') - verschil;
	char letter = gMinVerschil;
	
	int waarde = int('4') - int('0');
	
	cout << "ASCII waarden 1:\n" <<
		"a: " << int ('a') << "\n" <<
		"b: " << int ('b') << "\n" <<
		"c: " << int ('c') << "\n" <<
		"h: " << int ('h') << "\n" <<
		"z: " << int ('z') << "\n" <<
		"\n";
		
	cout << "ASCII waarden 2:\n" <<
		"A: " << int ('A') << "\n" <<
		"B: " << int ('B') << "\n" <<
		"C: " << int ('C') << "\n" <<
		"H: " << int ('H') << "\n" <<
		"Z: " << int ('Z') << "\n" <<
		"\n";
		
	cout << "Welke letter?" << "\n" <<
		"a: " << int ('a') << "\n" <<
		"A: " << int ('A') << "\n" <<
		"g: " << int ('g') <<
		"\n";
		
	cout << "Verschil tussen 'a' en 'A': " <<verschil << "\n" <<
		"Letter die je krijgt als je het verschil van 'g' af haalt: " << letter << "\n" <<
		"\n";
		
	cout << "ASCII waarden 3:\n" <<
		"8: " << int ('8') << "\n" <<
		"0: " << int ('0') << "\n" <<
		"\n";
		
	cout << "Welke getal?" << "\n" <<
		"4: " << int ('4') << "\n" <<
		"0: " << int ('0') <<
		"\n";
		
	cout << "De decimale waarde die je krijgt bij 4 - 0: " << waarde << "\n" <<
		"\n";
		
		// Ze zijn handig, omdat je zo ziet dat er 32 tekens tussen de kleine letter en de grote letter zitten.
}