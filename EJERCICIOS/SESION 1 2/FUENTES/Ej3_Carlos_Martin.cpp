/*  Autor: Carlos Martin Carrasco
	Fecha: 3 Octubre 2014
	
Cread un programa que nos pida la longitud del radio, calcule el �rea del c�rculo y
la longitud de la circunferencia correspondientes, y nos muestre los resultados en
pantalla. Recordad que:

*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   const double pi = 3.14159 ;
   double radio ;
   
   
   cout << "Introduzca la longitud del radio : " ;
   cin >> radio;
   
   cout << "\n\n-------------------------" ;
	
	cout << "\n\nArea del circulo: " << pi* pow(radio,2) ;
	cout << "\n\nLongitud de la circunferencia: " << 2*pi*radio << "\n\n";

	
   system("pause"); 
}
