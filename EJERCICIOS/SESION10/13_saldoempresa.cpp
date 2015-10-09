/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Fecha: 27 Noviembre 2014
Licencia: GPLv3

Se quiere construir una clase Nomina para realizar la funcionalidad descrita en el
ejercicio 12 de la relación de problemas I sobre la nómina del fabricante y diseñador
(página RP-I.5). Cread los siguientes programas (entregad un fichero por cada uno de
los apartados):

Suponed que sólo gestionamos la nómina de una empresa en la que hay un fabri-
cante y tres diseñadores. Los salarios brutos se obtienen al repartir los ingresos
de la empresa, de forma que el diseñador cobra el doble de cada fabricante.
El programa leerá el valor de los ingresos totales y calculará los salarios brutos
de los fabricantes y diseñador, llamando a los métodos oportunos de la clase
Nomina.

*/

#include <iostream> // Inclusion recursos entrada/salida

using namespace std;


class Nomina {	// Clase nomina
	private:
	double ingresos ;
	double fabricante ;
	double disenador ;

	public:

	Nomina(double vingresos){// Constructor de la clase Nomina
		ingresos = vingresos ;
	}



	double GetFabricante() {
		fabricante = ingresos/5 ;
		return fabricante ;
	}
	

	double GetDisenador() {
		disenador = (ingresos/5) *2 ;
		return disenador ;
	}
	
};

int main () { // Programa Principal
	double ingresos ;

	cout << "Introduzca ingresos : " ;
	cin >> ingresos ;
	
	Nomina unanomina(ingresos) ;

	cout << "El salario bruto de cada  fabricante (son 3)  es: " << unanomina.GetFabricante() << endl ;
	cout << "El salario bruto de cada diseñador es de: " << unanomina.GetDisenador() << endl ;
}
