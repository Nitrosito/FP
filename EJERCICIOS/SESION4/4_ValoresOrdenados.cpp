/*
Carlos Martin Carrasco   nitrosito@gmail.com
Licencia: GPLv3

Lee 3 numeros y nos indica si estan ordenados (De forma ascendente o descendente) o no
*/

#include <iostream> // Recursos de entrada/salida
#include <cmath>    // Recursos matematicos

using namespace std;

int main() {
	int numero1 ;	// Variable para almacenar numero 1
	int numero2 ;	// Variable para almacenar numero 2
	int numero3 ;	// Variable para almacenar numero 3
	
	cout << "Introduzca el primer numero: " ;
	cin >> numero1 ;

	cout << "Introduzca el segundo numero: " ;
	cin >> numero2 ; 

	cout << "Introduzca el tercer numero: " ;
	cin >> numero3 ;

	if ( (numero1 > numero2) && (numero2 > numero3)  ) // Si el primer numero es mas pequeño que el segundo , y el segundo es mas pequeño que el tercero, el orden es descendente
		cout << "Estan ordenados Descendentemente\n" ;
	
	else if ( (numero1 < numero2) && (numero2 < numero3)  ) // Si el primer numero es mas pequeño que el segundo y el segundo mas pequeño que el tercero, el orden es ascendente
		cout << "Estan ordenados Ascendentemente\n" ;
	else
		cout << "Los numeros no estan ordenados de ninguna forma\n" ;

}

