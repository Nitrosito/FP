// Autor: Carlos Martin Carrasco nitrosito@gmail.com
// Licencia: GPLv3
// Calcular el combinatorio de un numero 

#include <iostream> // Recursos de entrada/salida

using namespace std ;

int main() {
	 int long n, m, factorial_n, factorial_m, factorial_n_m, combinatorio ;
	 
	 factorial_n = 1; // Valor inicial por el que empezara a multiplicar
	 factorial_m = 1;
	 factorial_n_m = 1 ;

	cout << "Introduzca n :" ;
	cin >> n ;

	cout << "Introduzca m :" ;
	cin >> m ;


	for ( int contador = 1 ; contador <= n ; contador ++) {  // Factorial n
		factorial_n = factorial_n * contador ;
	}
	
	for ( int contador = 1 ; contador <= m ; contador++) { // Factorial m
		factorial_m = factorial_m * contador ;
	}

	for ( int contador = 1 ; contador <= (n-m) ; contador++){ // Factorial n-m
		factorial_n_m = factorial_n_m * contador ;
	}
	
	combinatorio = ( factorial_n / (factorial_m * factorial_n_m) ) ;

	cout << "\n Combinatoria: " << combinatorio ; 
	
}
