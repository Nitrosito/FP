/*
Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3

Indica si un año es bisiesto o no
*/

#include <iostream>	// Recursos de entrada/salida
#include <cmath>	// Recursos matematicos

using namespace std;

int main(){	// Programa principal
	
	int anio ;
	bool anio_bisiesto ;

	cout << "Introduzca año: " ;
	cin >> anio ;

	anio_bisiesto =  (  (anio%4 == 0) && (anio% 100 != 0) || (anio%400 == 0)  ) ; // Reglas para que un año sea bisiesto


	//Los años bisiestos son aquellos que o bien son divisibles por 4 pero no por 100, o bien son divisibles por 400

	if (anio_bisiesto)
		cout << anio << " Es bisiesto \n";
	else
		cout << anio << " No es bisiesto \n" ;
}

