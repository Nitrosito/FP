/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3


*/
#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal
	double capital ;
	double capital2 ;
	double interes ;
	double interes2 = 1 ;
	double anios ;
	int contador ;

	cout << "Introduzca capital : " ;
	cin >> capital;
   
	cout << "Introduzca interés : " ;
	cin >> interes;
   
	cout << "Introduzca un numero de años: " ;
	cin >> anios ;
	
	contador = 0 ; 
	
	while (interes2 <= interes){
		capital2 = capital ;
		contador = 0 ; 
		do{
			capital2 = capital2 + (capital2*(interes2/100)) ;
			cout << "\n GANANCIAS TOTALES DURANTE " << contador+1 << " año/s al " << interes2 << "% : " << capital2 << "€\n\n";
			contador++ ;
		} while (contador < anios) ; // Mientras que el contador sea menor que el numero de años	
		interes2++ ;
	}
}

