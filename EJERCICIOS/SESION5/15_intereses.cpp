/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Modifiquemos el ejercicio 2 del capital y los intereses de la primera relación. Supon-
gamos ahora que se quiere reinvertir todo el dinero obtenido (el original C más los
intereses producidos) en otro plazo fijo a un año. Y así, sucesivamente. Construid un
programa para que lea el capital, el interés y un número de años N , y calcule e im-
prima todo el dinero obtenido durante cada uno de los N años, suponiendo que todo
lo ganado (incluido el capital original C) se reinvierte a plazo fijo durante el siguiente
año.

*/
#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal
	double capital ;
	double interes ;
	double anios ;
	int contador ;

	cout << "Introduzca capital : " ;
	cin >> capital;
   
	cout << "Introduzca interés : " ;
	cin >> interes;
   
	cout << "Introduzca un numero de años: " ;
	cin >> anios ;
	
	contador = 0 ; 

	do{
		capital = capital + (capital*(interes/100)) ;
		cout << "\n GANANCIAS TOTALES DURANTE " << contador+1 << " año/s :" << capital << "€\n\n";
		contador++;
	} while (contador < anios) ; // Mientras que el contador sea menor que el numero de años	
}

