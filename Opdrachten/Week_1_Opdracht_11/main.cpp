//Ik heb voor for-loops gekozen, omdat ik dit het makkelijkst vond werken.

#include <iostream>
using namespace std;


int main(){

	cout << "Hoe groot? ";
	int grootte;
	cin >> grootte;
	
	for (int i = 1; i<=grootte; i++){
		
		for (int spaties = 1; spaties <= grootte-i; spaties++){
			cout << " ";
		}
		
		for (int j = 1; j <= i; j++){
			cout << "*";
		}
		cout << "\n";
		
	}
	for(int i = grootte-1; i >= 1; i--){
		
		for (int spaties = 1; spaties <= grootte-i; spaties++){
			cout << " ";
		}
		
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
		cout << "\n";
	}
}
