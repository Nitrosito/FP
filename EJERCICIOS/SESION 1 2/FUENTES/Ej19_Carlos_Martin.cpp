/* Autor: Carlos Martin Carrasco
	Fecha: 5 Octubre 2014
	
	Ejercicio19: El precio final de un autom�vil para un comprador es la suma total del costo
	del veh�culo, del porcentaje de ganancia de dicho vendedor y del I.V.A. Dise�ar un algoritmo para
	obtener el precio final de un autom�vil sabiendo que el porcentaje de ganancia de este
	vendedor es del 20 % y el I.V.A. aplicable es del 16 %.

*/
	
#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std ; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   double precio_coche ;
   static double ganancia = 0.20 ;
   static double iva = 0.16 ;

	   cout << "Introduce el precio solo del autom�vil : " ;
	   cin >> precio_coche ;
	   
		cout << "\n\n---------------------------------\n" ;
		
		double cocheyganancia = precio_coche + precio_coche*ganancia ; // Precio del coche + la ganancia del vendedor
		
		cout << "\nEl precio final del autom�vil ser�: "	<< cocheyganancia + cocheyganancia*iva	<< "\n\n" ; // El IVA lo hago sobre el precio del coche mas el sueldo del vendedor
		system("pause"); 
}
