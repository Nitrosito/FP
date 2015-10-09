/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3
Una función ProductoHasta para que multiplique los k primeros elementos de
la progresión
*/

#include <iostream> // Inclusion de recursos de entrada/salida
#include <cmath> 
using namespace std ;

/// FUNCION POTENCIA //
int Potencia (int numero, int potencia) {
	int p_final = numero ;
	for (int contador = 1 ; contador < potencia ; contador ++){ 
		p_final = p_final * numero ;
	}
	return p_final ;
  }
  
/////calcula la multiplicacion de los primeros k valores de una progresión geométrica /////
int ProductoHasta(int numero, int razon, int tope){
	int numerok = 0 ;
	for ( int contador = 1 ; contador <= tope ; contador++) {
		numerok = numero * razon ;
	}
	int suma = 0;
	
	suma = sqrt(  Potencia((numero * numerok),tope) ) ;

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
      
	cout << "La multiplicacion de los numeros es : " << ProductoHasta(numero, razon, tope) << endl ;
}