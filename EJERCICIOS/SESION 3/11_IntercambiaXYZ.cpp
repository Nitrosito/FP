/*
Autor: Carlos Martin Carrasco
Email: cmcarrasco@ugr.correo.es
License: GPLv3
Fecha: 8 Octubre 2014

Realizar un programa que declare las variables x, y y z, les asigne los valores 9, 20
y 30 e intercambien entre sí sus valores de forma que el valor de x pasa a y, el de y
pasa a z y el valor de z pasa a x (se pueden declarar variables auxiliares aunque se
pide que se use el menor número posible).
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                   	// Programa Principal
	int x = 10 ;		// Valor de X	
	int y = 20 ;		// Valor de Y
	int z = 30 ;		// Valor de Z
	int intermedia;		// Variable que uso para intercambiar valores
  
  	cout << "\n------VALORES SIN INTERCAMBIAR-----\n" ;
	cout << "Valor de X: " << x ;
	cout << "\nValor de Y: " << y ;
	cout << "\nValor de Z: " << z ;
	
	cout << "\n\n------INTERCAMBIADOS VALORES-----\n\n" ;
	
	intermedia = x ;
	x = z ;
	z = y ;
	y = intermedia ;
	
	cout << "Valor de X: " << x ;
	cout << "\nValor de Y: " << y ;
	cout << "\nValor de Z: " << z << "\n";
	    
}
