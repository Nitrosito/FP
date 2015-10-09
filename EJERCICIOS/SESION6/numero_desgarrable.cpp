/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia:GPLv3

Lee un numero entero y dice si es o no desgarrable
*/

#include <iostream> // Recursos entrada/salida
#include <cmath>    // Recursos matematicos

using namespace std;

int main(){ //Programa Principal

	int  long numerooriginal, numero, izq, der ;
	int contador;
	bool es_desgarrable,desgarrable ;
	

	izq = 0 ;
	der = 0 ;
	contador = 0;

	cout << "Introduzca un numero: " ;
	cin >> numerooriginal ;
	numero = numerooriginal ;
	

	while (numero >= 10){
		der = der + ( (numero%10) * (pow(10,contador)) ) ;
		izq = (numero / 10) ;
		numero = numero / 10 ;
		contador ++ ;
		
		if ( (pow ( (izq+der),2) ) == numerooriginal)
			desgarrable = 1 ;
		}
		
		if (desgarrable)
			cout << "El numero es desgarrable" ;
		else
			cout << "El numero no es desgarrable" ;


}
