/*
Carlos Martin Carrasco
Licencia GPLv3

Dice si una letra es mayuscula, en dicho caso, hay que calcular la minuscula correspondiente en la variable letra_convertida
*/

#include <iostream> // Recursos de entrada/salida
#include <cmath>    // Recursos matematicos	
#include <cctype>   // Recurso para trabajar con caracteres

using namespace std ;

int main(){

	char letra_original ;
	char letra_convertida;
	bool es_mayuscula ;

	cout << "Introduzca una letra: " ;
	cin >> letra_original ;

	es_mayuscula = ( (letra_original >= 65) && (letra_original <=90) ) ; // Para ser minuscula su codigo ascii tiene que ser mayor o igual que 65 y menor o igual que 90

	if (es_mayuscula) {
		
		letra_convertida=tolower(letra_original) ; // Convierto la letra en minuscula	

		cout << "\nLa letra " << letra_original << " Es mayuscula" ;
		cout << "\n Su minuscula correspondiente es " << letra_convertida << "\n" ;
	}
	else
		cout << "\nLa letra " << letra_original << " Es minuscula ya, introduce una mayuscula" ;
}
