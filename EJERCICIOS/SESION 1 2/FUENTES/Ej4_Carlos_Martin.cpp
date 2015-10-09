/*  Autor: Carlos Martin Carrasco
	 Fecha: 3 Octubre 2014
	
 Realizar un programa que lea los coeficientes reales � y s de una funci�n gaussiana
 A continuaci�n el programa leer� un valor de abscisa x y se imprimir� el valor que toma la funci�n en x

*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   double esperanza ;
   double desviacion ;
	double abscisa ;
	   
   cout << " Valor de � : " ;
   cin >> esperanza ;
   
	cout << " Valor de  o : " ;
   cin >> desviacion ;
   
   cout << " Valor de  abscisa : " ;
   cin >> abscisa ;
   
   cout << "\n\n-------------------------" ;
      
   cout << "\n\n Gaussiana(" << abscisa << ") = " << (1/(desviacion*sqrt(2*3.14159)))*exp(-0.5 * pow(abscisa-esperanza/desviacion, 2)) << "\n" ;
	

   system("pause"); 
}
