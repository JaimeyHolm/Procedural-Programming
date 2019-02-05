#include <iostream>
#include <string>
using namespace std;


int main(){

	cout << "Hoe groot? ";
	int grootte;
	cin >> grootte;
	for (int i = 0; i<grootte; i++){
		cout << string((grootte),'*') << "\n" <<
		"\n";
	}

	}