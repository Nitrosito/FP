/* Autor: Carlos Martin Carrasco
	Fecha: 5 Octubre 2014
	
	Ejercicio19: El precio final de un automóvil para un comprador es la suma total del costo
	del vehículo, del porcentaje de ganancia de dicho vendedor y del I.V.A. Diseñar un algoritmo para
	obtener el precio final de un automóvil sabiendo que el porcentaje de ganancia de este
	vendedor es del 20 % y el I.V.A. aplicable es del 16 %.

*/
	
#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std ; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   double precio_coche ;
   static double ganancia = 0.20 ;
   static double iva = 0.16 ;

	   cout << "Introduce el precio solo del automóvil : " ;
	   cin >> precio_coche ;
	   
		cout << "\n\n---------------------------------\n" ;
		
		double cocheyganancia = precio_coche + precio_coche*ganancia ; // Precio del coche + la ganancia del vendedor
		
		cout << "\nEl precio final del automóvil será: "	<< cocheyganancia + cocheyganancia*iva	<< "\n\n" ; // El IVA lo hago sobre el precio del coche mas el sueldo del vendedor
		system("pause"); 
}
