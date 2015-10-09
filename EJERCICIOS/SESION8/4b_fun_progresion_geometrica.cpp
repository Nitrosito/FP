/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3
Se pide crear un programa que lea desde teclado r, el primer elemento a1 y el tope k
y calcule la suma de los primeros k valores de la serie
*/

#include <iostream> // Inclusion de recursos de entrada/salida

using namespace std ;

/// FUNCION POTENCIA //
int Potencia (int numero, int potencia) {
	int p_final = numero ;
	for (int contador = 1 ; contador < potencia ; contador ++){ 
		p_final = p_final * numero ;
	}
	return p_final ;
  }
  
/////calcula la suma de los primeros k valores de una progresión geométrica /////
int SumaHasta(int numero, int razon, int tope){
	int suma = 0;
	
	suma = numero *  ( (Potencia(razon,tope) -1 ) / (razon -1)   ) ;

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