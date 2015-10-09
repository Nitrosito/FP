/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3
Se pide crear un programa que lea desde teclado r, el primer elemento a1 y el tope k
y calcule la suma de los primeros k valores de la serie
*/

#include <iostream> // Inclusion de recursos de entrada/salida

using namespace std ;

/////calcula la suma de los primeros k valores de una progresión geométrica /////
int SumaHasta(int numero, int razon, int tope){
	int suma = 0;
	
	for ( int contador = 1 ; contador <= tope ; contador++) {
		suma = suma + numero ; // La suma es el numero anterior + el numero actual
		numero = numero * razon ; // Calcula el numero siguiente
	}
      return suma ;
}

int main(){
	int numero, razon, tope ;
	
	cout << "Introduzca el primer numero:" ;
	cin >> numero ;

	cout << "Introduzca la razón:" ;
	cin >> razon ;
	
	cout << "Introduzca tope: " ;
	cin >> tope ;
      
	cout << "La suma de los numeros es : " << SumaHasta(numero, razon, tope) << endl ;
}