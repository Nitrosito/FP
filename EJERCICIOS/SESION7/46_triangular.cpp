/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3
Se dice que un número es triangular si se puede poner como la suma de los primeros
m valores enteros, para algún valor de m. Por ejemplo, 6 es triangular ya que 6 = 1 +
2 + 3. Se pide construir un programa que obtenga todos los números triangulares que
hay menores que un entero k introducido desde teclado. Para ello, debe ir probando
la suma de todas las posibles secuencias de enteros menores que el número dado.
Hay que calcular explícitamente la suma con un bucle, por lo que no puede aplicarse
la fórmula que nos da la sumatoria de los n primeros valores, a saber, n(n + 1)/2

*/

#include <iostream> // Recursos entrada/salida

using namespace std ;

int main(){
	int numero, contador, contador2, suma ;

	cout << "Introduce un numero: " ;
	cin >> numero ;
	
	for (contador = 1 ; contador <= numero ; contador++){
		suma = 0;
		for (contador2 = 1 ; contador2 <= contador ; contador2++){
				if (suma == contador){
					cout << "El numero " << contador << " es triangular" << endl;
					contador2 = numero ; // Salgo del for 
				}
				
				suma = suma + contador2 ;			
		
		}
	}
}
