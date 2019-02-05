#include <iostream>
#include <string>
using namespace std;


int main(){

	cout << "Hoe groot? ";
	int grootte;
	int a = 1;
	cin >> grootte;
	while (a <= grootte){
		cout << string((a),'*') << "\n" <<
		"\n";
		a += 1;
	}

	}
