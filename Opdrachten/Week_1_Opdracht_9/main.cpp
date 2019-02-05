#include <iostream>
#include <string>
using namespace std;


int main(){

	cout << "Hoe groot? ";
	int grootte;
	cin >> grootte;
	int a = grootte;
	while (a >= 0){
		cout << string((a),'*') << "\n" <<
		"\n";
		a -= 1;
	}

	}
