/*
Sube el salario un 4% si es mayor de 65 años o menor de 35.
Si tiene un salario inferior a 300€ se le sube otro 3%.
*/

#include <iostream> // Recursos de entrada/salida
#include <cmath>    // Recursos matematicos

using namespace std  ;

int main () { // Programa principal
 
	int edad ;
	double salario ;
	bool condicion_edad ;
	bool condicion_salario ;
	double aumento_edad ;
	double aumento_bajosalario ;

	

	cout << "Introduce edad: " ;
	cin >> edad ;

	cout << "Introduce Salario: " ;
	cin >> salario ;

	condicion_edad=(edad>65) || (edad<35) ; // Condicion para obtener el plus por edad
	condicion_salario=salario < 300 ;	  // Condicion para obtener el plus del salario
	aumento_edad = 1.04 ;	// Aumento por plus edad
	aumento_bajosalario = 1.03 ;	// Aumento por plus bajo salario
	

	cout << "\n-------------------" ;

	if (condicion_edad){
		salario = salario * aumento_edad ;
	}
	else
		cout << "\nNo es aplicable el aumento por edad" ;

	
	if (condicion_salario){
		salario = salario * aumento_bajosalario ;
	}
	else
		cout << "\nNo es aplicable el aumento por salario inferior a 300€" ;
	

	cout << "\nSalario resultante : " << salario << "\n" ;
	
}
