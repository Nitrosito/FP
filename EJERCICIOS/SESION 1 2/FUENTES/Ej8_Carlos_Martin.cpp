/* Autor: Carlos Martin Carrasco
	Fecha: 3 Octubre 2014
	
	Ejercicio8: Escribir un programa que lea un valor entero. Supondremos que el usuario introduce
siempre un entero de tres dígitos. Escribid en pantalla los
dígitos separados por tres espacios en blanco.

*/
	
#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std ; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   int numero ;

	   cout << "Introduce un número de 3 cifras : " ;
	   cin >> numero ;
	   
		cout << "\n\nSolución: " << numero/100 << " " << numero/10%10 << " " << numero%10 << "\n\n" ;
		
		system("pause"); 
}
