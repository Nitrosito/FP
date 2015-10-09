/*  Autor: Carlos Martin Carrasco
	 Fecha: 3 Octubre 2014
	
 Realizar un programa que lea los coeficientes reales µ y s de una función gaussiana
 A continuación el programa leerá un valor de abscisa x y se imprimirá el valor que toma la función en x

*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   double esperanza ;
   double desviacion ;
	double abscisa ;
	   
   cout << " Valor de µ : " ;
   cin >> esperanza ;
   
	cout << " Valor de  o : " ;
   cin >> desviacion ;
   
   cout << " Valor de  abscisa : " ;
   cin >> abscisa ;
   
   cout << "\n\n-------------------------" ;
      
   cout << "\n\n Gaussiana(" << abscisa << ") = " << (1/(desviacion*sqrt(2*3.14159)))*exp(-0.5 * pow(abscisa-esperanza/desviacion, 2)) << "\n" ;
	

   system("pause"); 
}
