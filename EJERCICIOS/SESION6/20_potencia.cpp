/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3

Calcular la funcion potencia y la funcion factorial sin usar la biblioteca cmath
*/

#include <iostream> // Incluso de los recursos de entrada/salida

using namespace std;

int main(){
	int numero,numero_original,potencia,factorial ;
	
	cout << "Introduzca un numero: " ;
	cin >> numero ;
	
	numero_original = numero ;

	cout << "Introduzca a que desea elevar dicho numero: ";
	cin >> potencia ;
	
	for (int contador = 1 ; contador < potencia ; contador ++){ // Si la potencia es mayor que 0
		numero = numero * numero_original ;
	}
		
	if (potencia==0)	// Si la potencia es 0 , el resultado es 1.
		cout << "El resultado de elevar " << numero_original << " a 0 es: 1" ;
	
	else
		cout << " El resultado de elevar " << numero_original << " a " << potencia << " es: " << numero << "\n" ;
		 // Imprimo el resultado de elevar el numero a la potencia indicada.
	
	factorial = 1 ; // Inicializo factorial a 1 para que empieze a multiplicar desde 1
	for (int contador = 1 ;	contador <= numero_original ; contador++ ){ // FACTORIAL DEL NUMERO

		factorial = factorial * contador ;
	}
	
	cout << "\nFactorial de " << numero_original << " : " << factorial << "\n";
}
