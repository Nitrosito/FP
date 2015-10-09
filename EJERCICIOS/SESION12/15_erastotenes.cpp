/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

La criba de Eratóstenes (Cirene, 276 a. C. Alejandría,
194 a. C.) es un algoritmo que permite hallar todos los números primos menores que
un número natural dado n.
El procedimiento consiste en escribir todos los números naturales comprendidos entre
2 y n y tachar los números que no son primos de la siguiente manera: el primero (el 2)
se declara primo y se tachan todos sus múltiplos; se busca el siguiente número entero

que no ha sido tachado, se declara primo y se procede a tachar todos sus múltiplos, y
así sucesivamente. El proceso para cuando el cuadrado del número entero es mayor
*/

#include <iostream>

using namespace std ;

class Eratostenes{
	private:
	static const int MAX=200;
	int primos[MAX];
	int usados ;
	
	public:

	Eratostenes(){
		usados = 0 ;
	}


	void CalculaHasta(int numero){
		bool esprimo;
		for (int posibleprimo=2 ; posibleprimo <= numero ; posibleprimo++){
			esprimo = true ;
			for(int b=2; b < usados && esprimo != false ; b++){
				if(posibleprimo%b==0)
					esprimo = false;
			}
			
			if (esprimo){
				primos[usados] = posibleprimo;
				usados++;
			}
		}	
	}

	int TotalCalculados(){
		return usados;
	}

	int Elemento(int indice){
		return primos[indice];
	}


};

int main(){
	Eratostenes primos;
	int n;
	int num_primos;

	cout << "-- Se calcularán primos desde 0 hasta NUMERO --" << endl;
	cout << " Por favor, introduzca NUMERO: " ;
	cin >> n;

	primos.CalculaHasta(n);
	
	num_primos = primos.TotalCalculados();
	
	cout << endl << "NUMEROS PRIMOS: ";
	for (int i=0 ; i < num_primos; i++){
		cout << primos.Elemento(i) << " " ;
	}
	cout << endl;

}
