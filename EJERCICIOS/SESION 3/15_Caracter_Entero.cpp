/*La variable entero almacenar� el valor 55 (el orden en la tabla ASCII del car�cter
�7�). Queremos construir una expresi�n que devuelva el entero 7, para asignarlo a la
variable entero. Formalmente:
Supongamos una variable car de tipo car�cter que contiene un valor entre 0 y 9.
Construid un programa que obtenga el correspondiente valor entero, se lo asigne a
una variable de tipo int llamada entero y lo imprima en pantalla. Por ejemplo, si la
variable car contiene 7 queremos asignarle a entero el valor num�rico 7.
*/

#include <iostream>

using namespace std ; //Incluyo recursos de entrada salida

int main() {

int entero ;
char caracter ;

cout << "Introduzca un numero entero: " ;
cin >> caracter ;

entero = caracter - 48 ;
cout << "\n Numero en variable int: " << entero ;

}

