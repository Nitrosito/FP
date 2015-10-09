/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3
Se pide crear un programa que lea desde teclado r, el primer elemento a1 y el tope k
y calcule la suma de los primeros k valores de la serie
*/

#include <iostream> // Inclusion de recursos de entrada/salida

using namespace std ;

int main(){
	int numero, razon, tope ;
	
	cout << "Introduzca el primer numero:" ;
	cin >> numero ;

	cout << "Introduzca la razón:" ;
	cin >> razon ;
	
	cout << "Introduzca tope: " ;
	cin >> tope ;

	for ( int contador = 1 ; contador <= tope ; contador++) {
		cout << " " << numero ;
		numero = numero * razon ;
	}

}
