/*
Autor: Carlos Martin Carrasco
Licencia : GPLv3

Política de acceso a los datos miembro
Suprima ahora el métodoSetCoeficientess. De esta forma, una vez creado
el objeto (pasándole los datos apropiados en el constructor) ya no podremos
modificar los datos miembro. Esto es útil en aquellas situaciones en las que no
queremos permitir que el estado del objeto cambie, una vez se ha creado.

*/

#include <iostream>

using namespace std ;

// Clase Recta
class Recta {
	private:
		double A ;
		double B ;
		double C ;
	
	public:
	
	// CONSTRUCTOR
	Recta(double a, double b, double c){
		A = a ;
		B = b ;
		C = c ;
	}
	
	// Metodo calcular Pendiente //
	double Pendiente () {
		return -A/B ;
	}

	// Metodo Calcular Ordenada//
	double Ordenada (int x) {
	return (-C -x*A) / B ;
	}

	// Metodo Calcular Abcisa //
	double Abcisa (int y) {
	return (-C -y*B) / A ;
	} 
};

int main () {

	double n1,n2,n3,n4,n5,n6,abcisa,ordenada;


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


	Recta r1(n1,n2,n3) ;
	Recta r2(n4,n5,n6) ;

	cout << "Pendiente del primer objeto: " <<  r1.Pendiente() << endl ;
	cout << "Pendiente del segundo objeto: " << r2.Pendiente() << endl ;	

	cout << "\n\nIntroduzca abcisa: " ;
	cin >> abcisa ;
	cout << "Ordenada de Recta1: " << r1.Ordenada(abcisa) << endl ;
	
	cout << "Introduzca ordenada: " ;
	cin >> ordenada ;
	cout << "Abcisa de Recta1 : " << r1.Abcisa(ordenada) << endl ;
}

