/*
Carlos Martin Carrasco
Licencia GPLv3

Transforma una letra mayuscula en minuscula , la guarda en letra_convertida y la imprime.
Si la letra es minuscula, la transforma a minuscula y la guarda en letra_convertida y la imprime.
Si no es mayuscula ni minuscula, la guarda sin modificar en letra_convertida y la imprime
*/
#include <iostream> // Recursos de entrada/salida
#include <cmath>    // Recursos matematicos	
#include <cctype>   // Recurso para trabajar con caracteres

using namespace std ;

int main(){

	char letra_original ;
	char letra_convertida;
	bool es_mayuscula ;
	bool es_minuscula ;

	cout << "Introduzca una letra: " ;
	cin >> letra_original ;

	es_mayuscula = ( (letra_original >= 'A') && (letra_original <= 'Z') ) ; // Condicion para que sea mayuscula
	es_minuscula = ( (letra_original >= 'a') && (letra_original <= 'z') ) ; // Condicion para que sea minuscula

	if (es_mayuscula) {
		
		letra_convertida=tolower(letra_original) ; // Convierto la letra en minuscula	

		cout << "\nLa letra " << letra_original << " Es mayuscula" ;
		cout << "\n Su minuscula correspondiente es " << letra_convertida << "\n" ;
	}

	else if (es_minuscula){
		
		letra_convertida=toupper(letra_original) ; // Convierto la letra en mayuscula		

		cout << "\nLa letra " << letra_original << " Es minuscula" ;
		cout << "\n Su mayuscula correspondiente es " << letra_convertida << "\n" ;
	}

	else { // Si la letra no es mayuscula ni minuscula (la dejo como esta)
	
		letra_convertida=letra_original ;
		cout << "La letra " << letra_original << " No es mayuscula ni minuscula, se guarda en letra_convertida tal como esta" ;
		cout << "\n" << letra_convertida << "\n" ;
	}
}
