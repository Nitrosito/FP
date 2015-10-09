/* 	
	Un numero es narcisista si se puede obtener como la suma de las potencia n-�simas de cada uno de sus digitos.
	Por ejemplo: 153 = 1^3 + 3^3 + 5^3 Escribir un programa, que dado un n�mero entero positivo, nos indique si el n�mero es o no, narcisista.
*/
	
#include <iostream>						// Recursos de E/S
#include <cmath>							// Recursos matem�ticos

using namespace std;

int main()									
{
	int dato, numero; 			// Variables para almacenar el dato leido (dato) y manejarlo (numero)
	int digitos = 0;			 	// Variable para almacenar el n�mero de d�gitos (digitos) 
	int resto; 						// Variable para almacenar los suvesivos d�gitos del dato
	int suma_narcisista=0;		// Variable para almacenar el valor identificativo de un n�mero narcisista
	
											
	cout << "Introduzca un numero entero positivo para comprobar si es narcisista: ";
	cin >> dato;
	numero = dato;
										// Filtro para obtener un dato entero positivo
	while (numero <=0){
		cout << "Introduzca un numero entero positivo para comprobar si es narcisista: ";
		cin >> dato;
	}
	numero = dato;
										// Obtenci�n del n�mero de d�gitos	
	while(numero != 0){				
		numero = numero/10;
		digitos++;
	}
	numero = dato;
										// Obtenci�n del valor narcisista del dato solicitado
	while(numero != 0){						
		resto=numero%10;
		suma_narcisista = suma_narcisista + pow(resto, digitos);
		numero=numero/10;
	}
										// Comprobaci�n de si el n�mero es o no, narcisista
	if(suma_narcisista == dato)			
		cout << "\n El numero " << dato << " ES narcisista. \n";
	else 
		cout << "\n El numero " << dato << " NO ES narcisista. \n";
}
 
