/*
Autor: Carlos Martin Carrasco
Licencia: GPLv3
*/

#include <iostream>
using namespace std;

class Palabra{
	
private:
	static const int TAMANIO = 150;
	char letra[TAMANIO];
	static const int CARACTER_HASTA_N = 150;
	int vector_caracteres[CARACTER_HASTA_N];
	int total_utilizados;
	

public:
	Palabra()
		:total_utilizados(0){

			for (int contador = 0; contador < CARACTER_HASTA_N; contador++){

				vector_caracteres[contador] = 0;

			}

		}	



	void Aniade(char nuevo){
		if (total_utilizados < TAMANIO){

			letra[total_utilizados]= nuevo;
			total_utilizados++;
			CuentaLetras(nuevo);
		}
	}

	int TotalUtilizados(){
		return total_utilizados;
	}

	int Tamanio(){
		return CARACTER_HASTA_N;
	}

	char Elemento(int x){
		return letra[x];
	}

	int ElementoCaracter(int x){
		return vector_caracteres[x];
	}

	void CuentaLetras(char caracter){
		vector_caracteres[caracter]++;
	}

	bool es_igual(Palabra objeto1, Palabra objeto2 ){
		Palabra palabra1(objeto1);
		Palabra palabra2(objeto2);

		bool coincide = true;

		//comparamos la primera letra

		if (palabra1.letra[0] != palabra2.letra[0]){ 

			coincide = false;

		}

		// comparamos la ultima letra

		if ( palabra1.letra[palabra1.TotalUtilizados()-1] != palabra2.letra[palabra2.TotalUtilizados()-1]){

			coincide = false;

		}

		// comparamos el resto

		for (int i = 0; i < CARACTER_HASTA_N; i++){

			if(objeto1.ElementoCaracter(i) > 0){

				if (objeto1.ElementoCaracter(i) != objeto2.ElementoCaracter(i)){

					coincide = false;
				}
			}
		}

		return coincide;

	}

};


int main(){

	char caracter;
	int contador;
	Palabra palabra;
	Palabra palabra_a_comparar;
	bool iguales;

	cout << "\nintroduce una secuencia de caracteres (# para terminar): \n";
	
	while(caracter != '#'){

		caracter = cin.get();
		cin.ignore();

		if (caracter != '#'){

		palabra.Aniade(caracter);
			
		}

	} 

	cout << "\nintroduce una secuencia para comparar (# para terminar): \n";

	caracter = '.';
	
	while(caracter != '#'){

		caracter = cin.get();
		cin.ignore();

		if (caracter != '#'){

		palabra_a_comparar.Aniade(caracter);
			
		}

	} 

	cout << endl;

	iguales = palabra.es_igual(palabra, palabra_a_comparar);

	if( iguales){

		cout << "\nLas palabras son iguales";

	}

	else{

		cout << "\nLas palabras no son iguales";

	}

	cout << endl << endl;

}
