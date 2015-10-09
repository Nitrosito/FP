/*
Autor: Carlos Martin Carrasco
Licencia: GPLv3

Definid ahora una clase para representar
una progresión geométrica.

a) Diseñad la clase pensando cuáles serían los datos miembro esenciales que defi-
nen una progresión geométrica, así como el constructor de la clase.

b) Definir un método Termino que devuelva el término k-ésimo.
c) Definid los métodos SumaHastaInfinito,SumaHasta,MultiplicaHasta.

d) Cread un programa principal que lea los datos miembro de una progresión, cree el
objeto correspondiente y a continuación lea un entero tope e imprima los tope
primeros términos de la progresión, así como la suma hasta tope de dichos
términos.

*/

#include <iostream>

using namespace std ;

class pgeometrica {
	private:
	int numero ;
	int razon ;
	int tope ;

	public:
	
	//CONSTRUCTOR//
	pgeometrica(){
	numero = 0 ;
	razon = 0 ;
	tope = 0 ;
	}
	
	void SetNumero (int valor){
	numero = valor ;
	}

	void SetRazon (int valor){
	razon = valor ;
	}
	
	void SetTope (int valor){
	tope = valor ;
	}
	
	void Progresion() {
		int numeroa = numero ;
		for ( int contador = 1 ; contador <= tope ; contador++) {
		cout << " " << numeroa ;
		numeroa = numeroa * razon ;
		}
	}
	// Metodo que devulbe el termino k-esimo//
	int Termino() {
		int resultado = numero ;
		for ( int contador = 1 ; contador < tope ; contador++) {
		
			resultado = resultado * razon ; // Calcula el numero siguiente
		}	
	return resultado ;	
	}

	// Metodo que devuelbe la suma hasta //
	int SumaHasta(){
		int suma = 0;
		int numeroa = numero ;
		for ( int contador = 1 ; contador <= tope ; contador++) {
		suma = suma + numeroa ; // La suma es el numero anterior + el numero actual
		numeroa = numeroa * razon ; // Calcula el numero siguiente
		}
		return suma ;
	}

	// Metodo que devuelbe la suma hasta infinito //
	int SumaHastaInfinito(){
		int numeroa = numero ;
		int suma = 0;
		suma = numeroa / (1 - razon) ;
		return suma ;
	}
	

} ;

int main() {
	int numero,razon,tope ;
	
	cout << "Introduzca el primer numero:" ;
	cin >> numero ;

	cout << "Introduzca la razón:" ;
	cin >> razon ;
	
	cout << "Introduzca tope: " ;
	cin >> tope ;

	pgeometrica uno ;
	
	uno.SetNumero(numero) ;
	uno.SetRazon(razon) ;
	uno.SetTope(tope) ;
	
	cout << "Progresion: " ; uno.Progresion() ;
	cout << endl << "Suma hasta : " << uno.SumaHasta() << endl ;
	cout << "Termino K-esimo: " << uno.Termino() << endl ;
}


