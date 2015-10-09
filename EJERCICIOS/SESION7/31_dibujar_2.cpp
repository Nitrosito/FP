/*
Cread un programa que ofrezca en pantalla la siguiente salida:
1 2 3 4 5 6
2 3 4 5 6 7
3 4 5 6 7 8
4 5 6 7 8 9 
5 6 7 8 9 10
6 7 8 9 10 11
*/

#include <iostream>

using namespace std ;

int main() {
	int numero,comienzo;
	cout << "Introduzca un numero: " ;
	cin >> numero ;

	for (int contador = 1; contador <= numero ; contador ++){
		comienzo = contador ;
		cout << "\n" ;
		for (int contador = 1; contador <= numero ; contador++,comienzo++){
			cout << comienzo << " " ;			
		}	
	}


}
