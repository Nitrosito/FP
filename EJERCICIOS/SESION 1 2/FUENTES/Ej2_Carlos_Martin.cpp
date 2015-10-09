/*  Autor: Carlos Martin Carrasco
	Fecha: 3 Octubre 2014
	
 Programa que lea una cantidad total y un interés desde teclado y
calcule en una variable total el dinero que se tendrá al cabo de un año, aplicando la
fórmula: total=capital + capital * (interes/100)

¿Es posible sustituir la variable capital con el nuevo valor de total?
 	- Si, se podria poner directamente "capital = capital + (capital*(interes/100)) ;"
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   double capital ;
   double interes ;
   double total ;
	
   cout << "Introduzca capital : " ;
   cin >> capital;
   
	cout << "\nIntroduzca interés : " ;
   cin >> interes;
   
   total = capital + (capital*(interes/100)) ;

	cout << "\n\n----------------------" ;
	cout << "\n\n GANANCIAS TOTALES : " << total << "\n\n";
		
   system("pause"); 
}
