/* Autor: Carlos Martin Carrasco
Realizar un programa en C++ que lea dos valores enteros desde teclado y diga si
cualquiera de ellos divide o no (de forma entera) al otro. En este problema no hace
falta decir qui�n divide a qui�n. Supondremos que los valores le�dos desde teclado
son ambos distintos de cero.
*/
	
#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std ; 
int numero1 ;
int numero2 ;

int main(){                    // Programa Principal
	cout << "Introduzca un valor numerico:" ;
	cin >> numero1 ;
	
	cout << "\nIntroduzca un valor numerico:" ;
	cin >> numero2 ;
	
	if (numero1 % numero2 == 0 )
		cout << numero1 << " Es divisible por " << numero2 << "\n"; 
	else
		cout << numero1 << " No es divisible por " << numero2 << "\n" ;
		
			if (numero2 % numero1 == 0 )
		cout << numero2 << " Es divisible por " << numero1 ;
	else
		cout << numero2 << " No es divisible por " << numero1 ;
	
}
