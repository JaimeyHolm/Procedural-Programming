#include <iostream>
using namespace std;


int main(){

	cout << "Hoe groot? ";
	int grootte;
	cin >> grootte;
	for (int i = 1; i<=grootte; i++){
		
		for (int j = 1; j <= i; j++){
			cout << "*";
		}
		
		cout << "\n";
	}
}
