/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3

Calcular la  calcular la suma hasta infinito
*/

#include <iostream> // Incluso de los recursos de entrada/salida

using namespace std;

/////Suma hasta infinito
int SumaHastaInfinito(int numero, int razon, int tope){
	int suma = 0;
	
	suma = numero / (1 - razon) ;

	return suma ;
}

int main(){
	int numero, razon, tope ;
	
	cout << "Introduzca el primer numero:" ;
	cin >> numero ;

	cout << "Introduzca la razón:" ;
	cin >> razon ;
	
	cout << "Introduzca tope: " ;
	cin >> tope ;
      
	if (razon <= 1 && razon >= 0)
	cout << "La suma de los numeros es : " << SumaHastaInfinito(numero, razon, tope) << endl ;
	
	else
	   cout  << "Error: en valor absoluto de la razon debe ser menor o igual que 1" << endl ;
}