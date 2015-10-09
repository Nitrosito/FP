/*Escribid una expresi�n l�gica que sea verdadera si una variable de tipo car�cter llamada
letra es una letra min�scula y falso en otro caso.

Escribid una expresi�n l�gica que sea verdadera si una variable de tipo entero llamada
edad es menor de 18 o mayor de 65.

Escribid una expresi�n l�gica que nos informe cuando un a�o es bisiesto. Los a�os
bisiestos son aquellos que o bien son divisibles por 4 pero no por 100, o bien son
divisibles por 400.

Escribid un programa que lea las variables letra, edad y anio, calcule el valor de
las expresiones l�gicas anteriores e imprima el resultado. Tened en cuenta que cuando
se imprime por pantalla (con cout) una expresi�n l�gica que es true, se imprime 1. Si
es false, se imprime un 0. En el tema 2 veremos la raz�n.
*/

#include <iostream>

using namespace std; //Incluyo recursos de entrada salida

int main(){
	
char letra ;
int edad ;
int anio ;

cout << "Introduzca una letra: " ;
cin	>> letra ;

cout << "Introduzca edad: " ;
cin	>> edad ;

cout << "Introduzca a�o: " ;
cin	>> anio ;

if (letra >= 97 && letra <= 122) // Verdad si una letra es minuscula
	cout << "\n\nMinuscula : " << true ;
else // Falso si letra no es minuscula
	cout << "\n\nMinuscula : " << false ;
	
if (edad < 18 || edad > 65) // Verdad si es menor de 18 o mayor de 65
	cout << "\n\nEdad : " << true ;
else
	cout << "\n\nEdad : " << false ;
	
/*Los a�os bisiestos son aquellos que o bien son divisibles por 4 pero no por 100, o bien son
divisibles por 400.*/

if ((anio%4 == 0  && anio% 100 != 0 )  || anio % 400 == 0)
	cout << "\n\nA�o : " << true << " Bisiesto";
else
	cout << "\n\nA�o : " << false << " No es Bisiesto" ;
	
}
