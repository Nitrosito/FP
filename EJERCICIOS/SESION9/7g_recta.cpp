/*
Autor: Carlos Martin Carrasco
Licencia : GPLv3

 Métodos privados
Añada un método privado que nos indique si los coeficientes son correctos, es
decir, A y B no pueden ser simultáneamente nulos. Llame a este método en el
constructor y en el método SetCoeficientes:wq y realice las operaciones que
estime oportuno en el caso de que los coeficientes pasados como parámetros no
sean correctos.

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

