/* Autor: Carlos Martin Carrasco
 Ampliad el ejercicio 7 de la relaci�n de problemas I, para que, una vez calculada la
media y la desviaci�n, el programa imprima por cada uno de los valores introducidos
previamente, si est� por encima o por debajo de la media. Por ejemplo:


*/
	
#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std ; 

int main(){                    // Programa Principal
   double edad1 ; 	// Declaracion de tipos de variables
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
	
	cout << "\nDesviaci�n: " << desviacion  << "\n\n" ;

	if (edad1 < media)
		cout << edad1 << " Es menor que su media\n" ;
	else
		cout << edad1 << " Es mayor o igual que su media\n" ;
		
	if (edad2 < media)
		cout << edad2 << " Es menor que su media\n" ;
	else
		cout << edad2 << " Es mayor o igual que su media\n" ;
		
	if (edad3 < media)
		cout << edad3 << " Es menor que su media\n" ;
	else
		cout << edad3 << " Es mayor o igual que su media\n" ;
		
}
