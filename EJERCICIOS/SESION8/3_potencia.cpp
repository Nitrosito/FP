/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3

Calcular la funcion potencia y la funcion factorial sin usar la biblioteca cmath
*/

#include <iostream> // Incluso de los recursos de entrada/salida

using namespace std;

/// FUNCION POTENCIA //
int Potencia (int numero, int potencia) {
	int p_final = numero ;
	for (int contador = 1 ; contador < potencia ; contador ++){ // Si la potencia es mayor que 0
		p_final = p_final * numero ;
	}
	return p_final ;
  }
  
/// FUNCION FACTORIAL ///
int Factorial (int numero) {
  int factorial = 1 ;
  for (int contador = 1 ; contador <= numero ; contador++ ){ // FACTORIAL DEL NUMERO

		factorial = factorial * contador ;
	}
  return factorial ;
	
}

int main(){
	int numero,potencia,factorial ;
	
	cout << "Introduzca un numero: " ;
	cin >> numero ;
	
	cout << "Introduzca a que potencia desea elevar dicho numero: ";
	cin >> potencia ;
	
	
	if (potencia==0)	// Si la potencia es 0 , el resultado es 1.
		cout << "El resultado de elevar " << numero << " a 0 es: 1" ;
	
	else
		cout << " El resultado de elevar " << numero << " a " << potencia << " es: " << Potencia(numero,potencia) << "\n" ;
		 // Imprimo el resultado de elevar el numero a la potencia indicada.
	
	factorial = 1 ; // Inicializo factorial a 1 para que empieze a multiplicar desde 1
	
	cout << "\nFactorial de " << numero << " : " << Factorial(numero) << endl;
}
