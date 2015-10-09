/*Leed desde teclado tres variables correspondientes a un número de horas, minutos
y segundos, respectivamente. Diseñar un algoritmo que calcule las horas, minutos y
Guión de Prácticas. Fundamentos de Programación RP-I.3
RELACIÓN DE PROBLEMAS I. Introducción a C++
segundos dentro de su rango correspondiente. Por ejemplo, dadas 10 horas, 119 minutos
y 280 segundos, debería dar como resultado 12 horas, 3 minutos y 40 segundos.
El programa no calculará meses, años, etc sino que se quedará en los días.
Como consejo, utilizad el operador / que cuando trabaja sobre datos enteros, representa
la división entera. Para calcular el resto de la división entera, usad el operador
%.
*/

#include <iostream>
#include <cmath>

using namespace std ;

int main () {
	int horas,minutos,segundos,dias ;
	dias=0 ;
	
	cout << "Introduzca Horas : " ;
	cin >> horas ;
	
	cout << "Introduzca Minutos : " ;
	cin >> minutos ;
	
	cout << "Introduzca Segundos : " ;
	cin >> segundos ;
	
	cout << "\n-------------------------" ;
	
	if (segundos >=60) {
	minutos = minutos + (segundos/60) ;
	segundos = segundos % 60 ;
	}
	
	if (minutos >= 60) {
		horas = horas + minutos/60 ;
		minutos=minutos % 60 ;
	}
	
	if (horas >= 24) {
		dias= horas/24 ;
		horas= horas % 24 ;
	}
	
	cout << "\n\n Dias:" << dias << " Horas:" << horas << " Minutos:" << minutos << " Segundos:" << segundos << "\n\n";
	
	
}
