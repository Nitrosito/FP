/*Leed desde teclado tres variables correspondientes a un n�mero de horas, minutos
y segundos, respectivamente. Dise�ar un algoritmo que calcule las horas, minutos y
Gui�n de Pr�cticas. Fundamentos de Programaci�n RP-I.3
RELACI�N DE PROBLEMAS I. Introducci�n a C++
segundos dentro de su rango correspondiente. Por ejemplo, dadas 10 horas, 119 minutos
y 280 segundos, deber�a dar como resultado 12 horas, 3 minutos y 40 segundos.
El programa no calcular� meses, a�os, etc sino que se quedar� en los d�as.
Como consejo, utilizad el operador / que cuando trabaja sobre datos enteros, representa
la divisi�n entera. Para calcular el resto de la divisi�n entera, usad el operador
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
