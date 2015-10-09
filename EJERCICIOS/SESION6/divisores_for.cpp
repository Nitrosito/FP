/*
 Realizar un programa que lea desde teclado un entero t♦♣❡ e imprima en pantalla to-
dos sus divisores propios. Para obtener los divisores, basta recorrer todos los enteros
menores que el valor introducido y comprobar si lo dividen.
*/

#include <iostream> // Recursos entrada/salida
#include <cmath>    // Recursos matematicos

using namespace std;

int main(){
	int entero ;
	int verdad ;
	
	for (verdad=0 ; verdad==0;verdad++){
	
	cout << "Introduce un entero positivo: " ;
	cin >> entero ;
		if (entero <= 0)
			verdad-- ;
	}
	
	for (int inicial = 1 ; inicial != entero ; inicial++){
		if ( entero%inicial==0)
			cout << inicial;
	}
	cout << "\n\n";
}
