/*
Autor: Carlos Martin Carrasco
Licencia: GPLv3

Crear una funcion que calculara el maximo de 3 valores que le pasemos

*/

#include <iostream>

using namespace std ;

			// FUNCION MAX //
//// Funcion que devuelbe el mayor de 3 numeros introducidos /////
double Max( double un_valor, double otro_valor, double el_tercero){
	double mayor ;

	mayor = un_valor ;

	if (otro_valor >= mayor) // Si el 2º es mayor que el 1º, el 2º es el mayor
		mayor = otro_valor ;

	if (el_tercero >= mayor) // Si el 3º es mayor que el mayor ( 1º o 2º, depende) , 3º es el mayor
		mayor = el_tercero ;

	return mayor ; // Devolvemos el mayor
}

int main(){		// PROGRAMA PRINCIPAL 
	double un_valor, otro_valor, el_tercero, el_mayor ;
	
	cout << "Introduzca un numero: " ;
	cin >> un_valor ;
	
	cout << "Introduzca otro numero: " ;
	cin >> otro_valor ;

	cout << "Introduzca otro numero: " ;
	cin >> el_tercero ;

	cout << "El número mayor es: " << Max(un_valor,otro_valor,el_tercero) << endl ;
}
