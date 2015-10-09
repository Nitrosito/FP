/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Fecha: 27 Noviembre 2014
Licencia: GPLv3


Supongamos que se aplica una retención fiscal y que ésta es la misma para
los fabricantes y el diseñador. En el constructor se establecerá el porcentaje de
retención fiscal (de tipo double) y posteriormente no se permitirá que cambie, de
forma que todas las operaciones que se hagan serán siempre usando la misma
retención fiscal. Los salarios netos se obtienen al aplicar la retención fiscal a los
salarios brutos (después de repartir los ingresos totales de la empresa):

salario_neto = salario_bruto - (salario_bruto * retencion_fiscal / 100)

El programa leerá el valor de los ingresos totales y la retención fiscal a aplicar y
calculará los salarios brutos y netos de los fabricantes y diseñador, llamando a
los métodos oportunos de la clase Nomina .
*/


#include <iostream> // Inclusion recursos entrada/salida

using namespace std;


class Nomina {	// Clase nomina
	private:
	double ingresosbrutos ;
	double retencion ;

	public:

	Nomina(double vingresos,double vretencion){// Constructor de la clase Nomina
		ingresosbrutos = vingresos ;
		retencion = vretencion ;
	}

	// Metodo Para averiguar el salario Bruto del Fabricante //
	double SalarioBrutoFabricante() {
		return (ingresosbrutos/5) ;
	}

	// Metodo para averiguar el salario bruto del diseñador //
	double SalarioBrutoDisenador() {
		return (ingresosbrutos/5)*2 ;
	}
	
	// Metodo para calcular el Salario Neto del fabricante //
	double SalarioNetoFabricante() {
		return SalarioBrutoFabricante() - (  SalarioBrutoFabricante() * (retencion /100))  ;
	}
	

	//Metodo para calcular el salario neto del Diseñador //
	double SalarioNetoDisenador() {
		return  SalarioBrutoDisenador()    - (  SalarioBrutoDisenador() * (retencion /100))  ;
	}
	
};

int main () { // Programa Principal
	double ingresos ;
	double retencion ;

	cout << "Introduzca ingresos : " ;
	cin >> ingresos ;
	
	cout << "Introduzca retencion : " ;

	cin >> retencion;
	Nomina unanomina(ingresos,retencion) ;

	cout << "El salario bruto de cada  fabricante (son 3)  es: " << unanomina.SalarioBrutoFabricante() << endl ;
	cout << "El salario bruto de cada diseñador es de: " << unanomina.SalarioBrutoDisenador() << endl ;
	
	cout << "El salario neto de cada  fabricante (son 3)  es: " << unanomina.SalarioNetoFabricante() << endl ;
	cout << "El salario neto de cada diseñador es de: " << unanomina.SalarioNetoDisenador() << endl ;
}
