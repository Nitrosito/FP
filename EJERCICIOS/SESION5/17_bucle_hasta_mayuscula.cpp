/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Se pide leer un carácter desde teclado, obligando al usuario a que sea una letra ma-
yúscula. Para ello, habrá que usar una estructura repetitiva do while, de forma que
si el usuario introduce un carácter que no sea una letra mayúscula, se le volverá a
pedir otro carácter. Calculad la minúscula correspondiente e imprimidla en pantalla.
No pueden usarse las funciones tolower ni toupeper.
*/

#include <iostream>	// Recursos entrada/salida
#include <cmath>	// Recursos matematicos

using namespace std;

int main() {
char letra ; // Letra introducida
char letra_final ; // Letra final convertida a minuscula
letra = 'z' ;
	do {
		cout << "Introduzca una letra: " ;
		cin >> letra ;

		if (letra >= 'A' && letra <= 'Z'){ // Si la letra es o es supeior a A , o, si la letra es o es inferior a Z
			letra_final = letra + 32 ; // Se almacena en letra _final la minuscula
			cout << "\n Convertida a minuscula : " << letra_final << "\n\n"; // Muestro letra final
		}

	} while(letra >= 'a' && letra <= 'z') ; // Realizar bucle mientras sea minuscula
}
