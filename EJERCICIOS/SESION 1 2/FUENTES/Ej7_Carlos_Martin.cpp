/* Autor: Carlos Martin Carrasco
	Fecha: 3 Octubre 2014
	
	Ejercicio6: Escribid un algoritmo para calcular la media aritmética muestral y la desviación es-
	tándar (o típica) muestral de las alturas de tres personas.

*/
	
#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std ; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   double edad1 ;
   double edad2 ;
	double edad3 ;
	double media ;
	double desviacion ;
	
	   cout << "Edad 1 : " ;
	   cin >> edad1 ;
	   
		cout << "\nEdad 2 : " ;
	   cin >> edad2 ;


	   cout << "\nEdad 3 : " ;
	   cin >> edad3 ;

  
   cout << "\n\n----------------------------------------------------\n" ;
	media= (edad1+edad2+edad3)/3 ;
	
	cout << "Media Aritmetica: " << media ;
	
	desviacion=sqrt((pow(edad1-media,2)+pow(edad2-media,2)+pow(edad3-media,2))/3);
	
	cout << "\nDesviación: " << desviacion  << "\n\n" ;

	
   system("pause"); 
}
