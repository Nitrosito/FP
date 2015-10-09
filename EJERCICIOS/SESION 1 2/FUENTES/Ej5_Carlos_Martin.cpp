/* Autor: Carlos Martin Carrasco
	Fecha: 2 Octubre 2014
	
	Ejercicio5:Calcula las ganancias de un producto que se reparten entre
	el disenador y los 3 fabricantes del mismo.
	Introducimos la ganancia total de la empresa y nos informa de
	cuanto cobra cada uno de ellos.
	
	Reparticion ganancias:
	El diseñador cobra el doble que cada uno de los fabricantes
	
	Resolucion: Divido las ganancias en 5 partes y le doi 2 partes
	al diseñador y a cada empresa 1 parte.
*/
#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   double ganancias;
	double ganancias_repartidas ;

	
   cout << "Ganancia de la empresa: " ; // Solicito la ganancia de la empresa
   cin >> ganancias;							 // Almaceno la ganancia en la variable ganancias

   ganancias_repartidas= (ganancias/5) ; // Divido las ganancias entre 5, ya que el diseñador se quedara con 2 partes. 
   
   cout << "\n----------------------------" ;
   cout << "\nGanancias del Diseñador: "  << ganancias_repartidas*2 ;
   cout << "\nGanancias del Fabricante 1: " << ganancias_repartidas ;
   cout << "\nGanancias del Fabricante 2: " << ganancias_repartidas ;
   cout << "\nGanancias del Fabricante 3: " << ganancias_repartidas ;
	cout << "\n----------------------------" << "\n\n" ;

   system("pause"); 
}
