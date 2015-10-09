/*
Autor: Carlos Martin Carrasco
Licencia : GPLv3


d) Política de acceso a los datos miembros
En vez de usar un método para asignar un valor a cada dato miembro, defina un
único método SetCoeficientes para asignar los tres a la misma vez.
Observad que los métodos permiten definir la política de acceso a los datos
miembro. Si tengo previsto cambiar por separado los coeficientes de la recta,
usaré métodos de asignación individuales. En caso contrario, usaré un único mé-
todo que modifique a la misma vez todos los datos miembro. Incluso pueden
dejarse en la clase ambos tipos de métodos para que así el cliente de la clase
pueda usar los que estime oportunos en cada momento. Por ahora, mantenga
únicamente el método de asignación en bloque SetCoeficientes.

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
	//Metodo dar valores a los 3 elementos a la vez //
	void SetCoeficientes (double a, double b, double c) {
		 A = a ;
		 B = b ;
		 C = c ;
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


	r1.SetCoeficientes(n1,n2,n3) ;
	r2.SetCoeficientes(n4,n5,n6) ;

	cout << "Pendiente del primer objeto: " <<  r1.Pendiente() << endl ;
	cout << "Pendiente del segundo objeto: " << r2.Pendiente() << endl ;	

	cout << "\n\nIntroduzca abcisa: " ;
	cin >> abcisa ;
	cout << "Ordenada de Recta1: " << r1.Ordenada(abcisa) << endl ;
	
	cout << "Introduzca ordenada: " ;
	cin >> ordenada ;
	cout << "Abcisa de Recta1 : " << r1.Abcisa(ordenada) << endl ;
}

