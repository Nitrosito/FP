/*
Autor: Carlos Martin Carrasco
Licencia: GPLv3
¿Cuántas veces aparece el dígito 9 en todos los números
que hay entre el 1 y el 100? Por ejemplo, el 9 aparece una vez en los números 19 y
92 mientras que aparece dos veces en el 99. Pretendemos diseñar un algoritmo que
responda a esta sencilla pregunta, pero de forma suficientemente generalizada. Para
ello, se pide construir un programa que lea tres enteros ❝✐❢r❛ (entre 1 y 9), ♠✐♥ y
♠❛1 y calcule el número de apariciones del dígito ❝✐❢r❛ en los números contenidos
en el intervalo cerrado ❬♠✐♥✱ ♠❛1❪.
*/

#include <iostream>
#include <cmath>

using namespace std ;

int main(){
	int numero, min, max, contador, contador2, repetido, resultado;
	repetido = 0;
	
	cout << "Introduce minimo: " ;
	cin >> min ;
	
	cout << "Introduce maximo: " ;
	cin >> max ;

	cout << "Introduce el numero que quieres saber: " ;
	cin >> numero ;

	for (contador = min ; contador <= max ; contador++){
		contador2 = contador ;
			

			while (contador2 >= 10){
				resultado = contador%10 ;
				if (resultado==numero)
					repetido++;
 
				contador2 = contador2 /10 ;
			}
				
			if (contador2 == numero){
			repetido++;
			}
	}
	cout << "El numero se repite " << repetido << " Veces" << endl ;
}
