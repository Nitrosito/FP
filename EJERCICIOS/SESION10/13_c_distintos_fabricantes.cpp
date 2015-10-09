/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Fecha: 27 Noviembre 2014
Licencia: GPLv3

Supongamos que gestionamos las nóminas de varias sucursales de una empre-
sa. Queremos crear objetos de la clase Nomina que se adapten a las caracterís-
ticas de cada sucursal:

• En cada sucursal hay un único diseñador pero el número de fabricantes es
distinto en cada sucursal. Por tanto, el número de fabricantes habrá que es-
pecificarlo en el constructor y posteriormente no podrá cambiarse.

• La forma de repartir el dinero es la siguiente: el diseñador se lleva una parte
del total y el resto se reparte a partes iguales entre los fabricantes. En los
apartados anteriores, por ejemplo, la parte que se llevaba el diseñador era
2/5 y el resto (3/5) se repartía entre los tres fabricantes. La parte que el di-
señador se lleva puede ser distinta entre las distintas sucursales (2/5, 1/6,
etc), pero no cambia nunca dentro de una misma sucursal. Por tanto, el por-
centaje de ganancia (2/5, 1/6, etc) habrá que especificarlo en el constructor
y posteriormente no podrá cambiarse.

• Las retenciones fiscales de los fabricantes y diseñador son distintas. Además,
se prevé que éstas puedan ir cambiando durante la ejecución del programa.
Por lo tanto, no se incluirán como parámetros en el constructor.
El programa leerá los siguientes datos desde un fichero externo:

• El número de sucursales.

• Los siguientes valores por cada una de las sucursales:
– Ingresos totales a repartir
– Número de fabricantes
– Parte que se lleva el diseñador
– Retención fiscal del diseñador
– Retención fiscal de los fabricantes
Por ejemplo, el siguiente fichero indica que hay dos sucursales. La primera tiene
unos ingresos de 300 euros, 3 fabricantes, el diseñador se lleva 1/6, la retención
del diseñador es del 20 % y la de cada fabricante un 18 %. Los datos para la
segunda son 400 euros, 5 fabricantes, 1/4, 22 % y 19 %.
2
300 3 6 20 18
400 5 4 22 19

El programa tendrá que imprimir el salario neto del diseñador y de los fabricantes
por cada una de las sucursales, llamando a los métodos oportunos de la clase
Nomina

*/


#include <iostream> // Inclusion recursos entrada/salida

using namespace std;


	class Nomina {	// Clase nomina
	private:
	double ingresosbrutos ;
	int nfabricantes ;
	int partedisenador;
	public:

	Nomina(double vingresosbrutos, double vnfabricantes, double vpartedisenador){// Constructor de la clase Nomina
		ingresosbrutos = vingresosbrutos ;
		nfabricantes = vnfabricantes ;
		partedisenador = vpartedisenador ;
	}
	
	// Metodo para averiguar el salario bruto del diseñador //
	double SalarioBrutoDisenador() {
		return ingresosbrutos/partedisenador ;
	}
	
	//Metodo que devuelbe el saldo resultante a dividir entre los fabricantes//
	double SalarioaRepartir(){
		return (ingresosbrutos - SalarioBrutoDisenador() );
	}

	// Metodo Para averiguar el salario Bruto del Fabricante //
	double SalarioBrutoFabricante() {
		return SalarioaRepartir() / nfabricantes ;
	}

	
	//Metodo para calcular el salario neto del Diseñador //
	double SalarioNetoDisenador(double retencion) {
		return  SalarioBrutoDisenador()  - (SalarioBrutoDisenador() * (retencion /100))  ;
	}
	
	// Metodo para calcular el Salario Neto del fabricante //
	double SalarioNetoFabricante(double retencion) {
		return SalarioBrutoFabricante() - (  SalarioBrutoFabricante() * (retencion /100))  ;
	}
	
};

int main () { // Programa Principal
	int nsucursales ;

	double ingresos ;
	double fabricantes ;
	double pdisenador ;
	double retenciondisenador ;
	double retencionfabricante ;
	
	
	cin >> nsucursales ;
	int i = 1 ;
	for (i; i <= nsucursales; i++){
	
		cin >> ingresos ;
		cin >> fabricantes ;
		cin >> pdisenador ;
		cin >> retenciondisenador;
		cin >> retencionfabricante ;
		
		int i2 = i ;
		Nomina i(ingresos,fabricantes,pdisenador) ;
		
		cout << "--------------------" << endl ;
		cout << " -Sucursal " << i2 << "-" << endl ;
		cout << "Salario neto del diseñador: " << i.SalarioNetoDisenador(retenciondisenador) << endl ;
		cout << "Salario neto de los fabricantes (hay " << fabricantes << " ) : " << i.SalarioNetoFabricante(retencionfabricante) << endl ;
		cout << "--------------------\n\n" ;

	}
	
}
