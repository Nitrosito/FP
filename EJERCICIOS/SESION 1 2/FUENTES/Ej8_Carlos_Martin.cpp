/* Autor: Carlos Martin Carrasco
	Fecha: 3 Octubre 2014
	
	Ejercicio8: Escribir un programa que lea un valor entero. Supondremos que el usuario introduce
siempre un entero de tres d�gitos. Escribid en pantalla los
d�gitos separados por tres espacios en blanco.

*/
	
#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std ; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   int numero ;

	   cout << "Introduce un n�mero de 3 cifras : " ;
	   cin >> numero ;
	   
		cout << "\n\nSoluci�n: " << numero/100 << " " << numero/10%10 << " " << numero%10 << "\n\n" ;
		
		system("pause"); 
}
