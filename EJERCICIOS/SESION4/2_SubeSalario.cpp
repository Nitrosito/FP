/*
Introduces edad y el salario. Sube el salario un 5% si es menor de 300€ y la persona es mayor de 600€.
*/

#include <iostream> // Recursos de entrada/salida
#include <cmath>    // Recursos matematicos

using namespace std  ;

int main () { // Programa principal
 
int edad ;
double salario ;
bool condicion_salario ;
double incrementa_salario ;

cout << "Introduce edad: " ;
cin >> edad ;

cout << "Introduce Salario: " ;
cin >> salario;

condicion_salario = ( salario < 300 ) && ( edad > 65 ) ; // Condicion para que reciba bonificacion de salario
incrementa_salario =  1.05 ;	// Incrementacion del salario

cout << "\n-------------------\n\n" ;
if (condicion_salario){
    salario = salario * incrementa_salario ;	
   }

else {
     cout << "No es aplicable la subida" ;
     }

cout << "\nSalario resultante : " << salario << "\n" ;
	
}
