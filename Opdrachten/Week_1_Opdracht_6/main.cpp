#include <iostream>
#include <string>
using namespace std;

int main(){

	string zin = "";
	cout << "Geef een string om te vertalen: ";
	getline(cin, zin);
	for (int i = 0; i < zin.size(); i++){ 
		if (zin[i] == 'e'){
			cout << "3";
		}
			
		else if (zin[i] == 'l'){
			cout << "1";
		}
		
		else if (zin[i] == 't'){
			cout << "7";
		}
		
		else if (zin[i] == 'o'){
			cout << "0";
		}
		
		else {
			cout << char((zin[i])-32);
		}
	}
	cout << "\n\n\n";
}
