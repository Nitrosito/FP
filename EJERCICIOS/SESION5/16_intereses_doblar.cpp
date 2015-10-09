/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Calcular cuántos años han de pasar hasta llegar a doblar, como mínimo, el capital inicial.
Los datos que han de leerse desde teclado son el capital inicial y el interés anual.

*/
#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal
	double capital ;
	double capitalinicial ;
	double interes ;
	int contador ;

	cout << "Introduzca capital : " ;
	cin >> capital;
   
	cout << "Introduzca interés : " ;
	cin >> interes;
	
	capitalinicial=capital ;
	contador = 0 ; 

	do{
		capital = capital + (capital*(interes/100)) ;
		contador++;
	} while (capital < capitalinicial*2) ; // Mientras que el capital no sea el doble que el capital inicial	
	cout << "Han de pasar: " << contador << " años\n";
	}

