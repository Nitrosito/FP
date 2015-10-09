/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Realizar un programa que lea enteros desde teclado y calcule cuántos se han intro-
ducido y cual es el mínimo de dichos valores (pueden ser positivos o negativos). Se
dejará de leer datos cuando el usuario introduzca el valor 0. Realizad la lectura de
los enteros dentro de un bucle sobre una única variable llamada ❞❛t♦. Es importante
controlar los casos extremos, como por ejemplo, que el primer valor leído fuese ya el
terminador de entrada (en este caso, el cero).
*/

#include <iostream> ; // Recursos entrada/salida
#include <cmath> ;    // Recursos matematicos

using namespace std;

double numero;
int contador;
int npequeno;

int main(){
	contador = -1 ; // Es -1 porque no queremos que el 0 para salir cuente	
	do{
		cout << "Introduzca un número: " ;
		cin >> numero ;
		
		if (contador==-1) // La primera vez, el numero mas pequeño será el primer numero que metamos
		   npequeno = numero ;

		if(numero < npequeno && numero != 0) // Si el numero es mas pequeño que npequeno y no es 0 , lo guardamos
			npequeno=numero ;

		contador++;
		
	} while (numero !=0) ;
	
	cout << "Numeros introducidos: " << contador ;
	cout << "\nNumero más pequeño: " << npequeno << "\n" ;
}
