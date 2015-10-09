/* 	
	Un numero es narcisista si se puede obtener como la suma de las potencia n-ésimas de cada uno de sus digitos.
	Por ejemplo: 153 = 1^3 + 3^3 + 5^3 Escribir un programa, que dado un número entero positivo, nos indique si el número es o no, narcisista.
*/
	
#include <iostream>						// Recursos de E/S
#include <cmath>							// Recursos matemáticos

using namespace std;

int main()									
{
	int dato, numero; 			// Variables para almacenar el dato leido (dato) y manejarlo (numero)
	int digitos = 0;			 	// Variable para almacenar el número de dígitos (digitos) 
	int resto; 						// Variable para almacenar los suvesivos dígitos del dato
	int suma_narcisista=0;		// Variable para almacenar el valor identificativo de un número narcisista
	
											
	cout << "Introduzca un numero entero positivo para comprobar si es narcisista: ";
	cin >> dato;
	numero = dato;
										// Filtro para obtener un dato entero positivo
	while (numero <=0){
		cout << "Introduzca un numero entero positivo para comprobar si es narcisista: ";
		cin >> dato;
	}
	numero = dato;
										// Obtención del número de dígitos	
	while(numero != 0){				
		numero = numero/10;
		digitos++;
	}
	numero = dato;
										// Obtención del valor narcisista del dato solicitado
	while(numero != 0){						
		resto=numero%10;
		suma_narcisista = suma_narcisista + pow(resto, digitos);
		numero=numero/10;
	}
										// Comprobación de si el número es o no, narcisista
	if(suma_narcisista == dato)			
		cout << "\n El numero " << dato << " ES narcisista. \n";
	else 
		cout << "\n El numero " << dato << " NO ES narcisista. \n";
}
 
