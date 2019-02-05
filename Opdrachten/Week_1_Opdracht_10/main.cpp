#include <iostream>
#include <string>
using namespace std;


int main(){

	cout << "Hoe groot? ";
	int grootte;
	int a = 1;
	cin >> grootte;
	for (int i = 1; i<=grootte; i++){
		cout << string((a),'*') << "\n" <<
		"\n";
		a += 1;
	}
	for (int i = 1; i>=0; i++){
		cout << string((a),'*') << "\n" <<
		"\n";
		a -= 1;
	}

	}
