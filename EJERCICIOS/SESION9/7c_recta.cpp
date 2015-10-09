/*
Autor: Carlos Martin Carrasco
Licencia : GPLv3

Datos miembro privados
Cambie ahora los datos miembro públicos y póngalos privados. Tendrá que añadir
métodos para asignar y ver los valores de los datos miembro. Añada métodos
para asignar un valor a cada uno de los tres datos miembro. Modifique el main
para tener en cuenta estos cambios.

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
	//Metodo dar valores a A //
	void SetA (double valor) {
		A = valor ;
	};
	
	//Metodo dar valores a B //
	void SetB (double valor) {
		B = valor ;
	};
	
	//Metodo dar valores a C //
	void SetC (double valor) {
		C = valor ;
	};
	
	// Metodo calcular Pendiente //
	double Pendiente () {
		return -A/B ;
	};

	// Metodo Calcular Ordenada//
	double Ordenada (int x) {
	return (-C -x*A) / B ;
	} ;

	// Metodo Calcular Abcisa //
	double Abcisa (int y) {
	return (-C -y*B) / A ;
	} ;
};

int main () {
	Recta r1 ;
	Recta r2 ;

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


	r1.SetA(n1) ;
	r1.SetB(n2) ;
	r1.SetC(n3) ;
	r2.SetA(n4) ;
	r2.SetB(n5) ;
	r2.SetC(n6) ;

	cout << "Pendiente del primer objeto: " <<  r1.Pendiente() << endl ;
	cout << "Pendiente del segundo objeto: " << r2.Pendiente() << endl ;	

	cout << "\n\nIntroduzca abcisa: " ;
	cin >> abcisa ;
	cout << "Ordenada de Recta1: " << r1.Ordenada(abcisa) << endl ;
	
	cout << "Introduzca ordenada: " ;
	cin >> ordenada ;
	cout << "Abcisa de Recta1 : " << r1.Abcisa(ordenada) << endl ;
}

