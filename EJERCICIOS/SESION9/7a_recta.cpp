/*
Autor: Carlos Martin Carrasco
Licencia: GPLv3

Defina la clase Recta. En este apartado utilice únicamente datos miembro públi-
cos. Cree un programa principal que haga lo siguiente:
• Defina dos objetos de la clase Recta.
• Lea seis reales desde teclado.
• Le asigne los tres primeros a los coeficientes de una recta y los otros tres a
la segunda recta.
• Calcule e imprima la pendiente de cada recta aplicando la fórmula:
pendiente = - A / B
*/

#include <iostream>

using namespace std ;

// Clase Recta
class Recta {
	public:
		double A ;
		double B ;
		double C ;
};

int main () {
	Recta r1 ;
	Recta r2 ;

	double n1,n2,n3,n4,n5,n6,pendiente1,pendiente2;


	cout << "Introduzca un numero real: " ;
	cin >> n1 ;

	cout << "Introduzca un numero real: " ;
	cin >> n2 ;

	cout << "Introduzca un numero real: " ;
	cin >> n3 ;

	cout << "Introduzca un numero real: " ;
	cin >> n4 ;

	cout << "Introduzca un numero real: " ;
	cin >> n5 ;

	cout << "Introduzca un numero real: " ;
	cin >> n6 ;


	r1.A = n1 ;
	r1.B = n2 ;
	r1.C = n3 ;
	r2.A = n4 ;
	r2.B = n5 ;
	r2.C = n6 ;

	pendiente1 = -r1.A/r1.B ;
	pendiente2 = -r2.A/r2.B ;
	cout << "Pendiente del primer objeto: " << pendiente1 << endl ;
	cout << "Pendiente del segundo objeto: " << pendiente2 << endl ;	
}
