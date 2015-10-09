/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3
Programa que lea desde teclado un entero tope e imprima en pantalla to-
dos sus divisores propios. Para obtener los divisores, basta recorrer todos los enteros
menores que el valor introducido y comprobar si lo dividen. A continuación, mejorar el
ejercicio obligando al usuario a introducir un entero positivo, usando un filtro con un
bucle post test (do while)
*/

#include <iostream>	// Recursos entrada/salida
#include <cmath>	// Recursos matematicos

using namespace std;

int main(){		// Programa principal

int numero ;
int contador ;
	do { // Mientras el numero sea menor que 0
		cout << "Introduce un numero entero:" ;
		cin >> numero;
	} while (numero < 0) ;

	contador=1 ;	

	while (contador !=  numero +1 ){ // Si el contador es mas pequeño que el numero +1 ( el +1 es para incluirse a el mismo)
		if (numero%contador==0)	// Si el resto de dividir el numero entre el contador es 0
			cout << contador << ", " ; // Imprime ese numero
		contador++ ;
	}
}
