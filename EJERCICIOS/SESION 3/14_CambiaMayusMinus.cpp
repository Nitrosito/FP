/*
Dise�ar un programa que lea un car�cter (supondremos que el usuario introduce una
may�scula), lo pase a min�scula y lo imprima en pantalla. Hacedlo sin usar las funciones
toupper ni tolower de la biblioteca cctype. Para ello, debe considerarse
la equivalencia en C++ entre los tipos enteros y caracteres.
*/

#include <iostream> //Incluyo recursos de entrada salida

using namespace std;

int main(){
char letra ;
	
cout << "Introduzca una letra: " ;
cin >> letra ;

if (letra >= 65 && letra <= 90) // Si la letra es o es supeior a A , o, si la letra es o es inferior a Z
	{
		letra = letra +32 ;
		cout << "\n Convertida a minuscula : " << letra ;
	}
	
	else if (letra >= 97 && letra <= 122) // Si la letra es o es supeior a A , o inferior a z
	{ 
		letra = letra - 32 ;
		cout << "\n Convertida a mayuscula " << letra ;
	}
	
	else 
	{
		cout << "\n\n" << letra <<" No es una letra letra." ; //si no es superior ni inferior a las demas no es una letra
	}

}

