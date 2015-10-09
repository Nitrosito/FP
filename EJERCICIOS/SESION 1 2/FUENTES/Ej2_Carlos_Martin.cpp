/*  Autor: Carlos Martin Carrasco
	Fecha: 3 Octubre 2014
	
 Programa que lea una cantidad total y un inter�s desde teclado y
calcule en una variable total el dinero que se tendr� al cabo de un a�o, aplicando la
f�rmula: total=capital + capital * (interes/100)

�Es posible sustituir la variable capital con el nuevo valor de total?
 	- Si, se podria poner directamente "capital = capital + (capital*(interes/100)) ;"
*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   double capital ;
   double interes ;
   double total ;
	
   cout << "Introduzca capital : " ;
   cin >> capital;
   
	cout << "\nIntroduzca inter�s : " ;
   cin >> interes;
   
   total = capital + (capital*(interes/100)) ;

	cout << "\n\n----------------------" ;
	cout << "\n\n GANANCIAS TOTALES : " << total << "\n\n";
		
   system("pause"); 
}
