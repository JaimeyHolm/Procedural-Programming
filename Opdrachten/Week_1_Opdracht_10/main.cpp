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
	
	for(int i = grootte-1; i >= 1; i--){
		
        	for(int j = 1; j <= i; j++){
            		cout << "*";
        	}
		cout << "\n";
	}
	
//	int i = 1;
//	while (i != grootte + 1) {
//		int j = i;
//		while (j != 0) {
//			cout << "*";
//			j--;
//		}
//		cout << "\n";
//		i++;
//	}
//	
//	i = grootte - 1;
//	while (i != 0) {
//		int j = i;
//		while (j != 0) {
//			cout << "*";
//			j--;
//		}
//		cout << "\n";
//		i--;
//	}
	
}
