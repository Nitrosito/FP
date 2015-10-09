/* PRACTICANDO CON FUNCIONES 1*/

#include <iostream>


int Cuadrado ( int entrada) {
	return entrada * entrada ;
}


using namespace std ;

int main () {
	int numero ;

	cout << "INTRODUCE NUMERO: " ;
	cin >> numero ;

	cout << numero << " al cuadrado: " << Cuadrado(numero) << endl ;
}
