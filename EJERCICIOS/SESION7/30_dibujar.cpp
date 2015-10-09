#include <iostream>

using namespace std ;

int main(){
	int numero,contador,contador2 ;

	cout << "Introduzca un numero: " ;
	cin >> numero ;

	contador = 1 ;
	
	for (contador ; contador <= numero ; contador ++) {
		contador2= contador ;
		cout << "\n" ;
		for (contador2 ; contador2 <= numero; contador2++){
			cout << contador2 << " " ;
		} 
	
	}
}
