/*
Autor: Carlos Martin Carrasco
Licencia: GPLv3

Calcular la moda en una  de caracteres
*/

#include <iostream>

using namespace std;

struct FrecuenciaCaracter{
			char caracter;
			int frecuencia;
};

class Caracteres{
	
	private:
		static const int TAMANIO = 50;
		char vector_privado[TAMANIO], vector_sin_repetidos[TAMANIO];
		int total_utilizados, total_utilizados_sin_repetidos;
		static const int SIZE = 122;  //  indico este valor que corresponde al valor ascii de la última letra (z minúscula)
		int vector[SIZE];

	public:
		Caracteres(){
		  total_utilizados=0;
		  total_utilizados_sin_repetidos=0;	
		  for(int i = 0; i < SIZE ; i++ ){
			vector[i] = 0;
			}
		}

		int TotalUtilizados(){
			return total_utilizados;
		}

		int Capacidad(){
			return TAMANIO;
		}

		void Aniade(char nuevo){
			if (total_utilizados < TAMANIO){
	
				vector_privado[total_utilizados]= nuevo;
				total_utilizados++;
			}
		}

		char Elemento(int indice){
			return vector_privado[indice];
		}
	
		void Conteo( char letra){
			int indice = letra;
				vector[indice] = vector[indice] +1;
		}
	
	
		FrecuenciaCaracter Moda(){
	
			FrecuenciaCaracter frecuencia_caracter;
	
			frecuencia_caracter.frecuencia = 0;
			
			for(int i = 0; i < total_utilizados; i++){
					char caracter = vector_privado[i];
					Conteo(caracter);
			}
	
			for(int i = 65; i < SIZE; i++){   // Recorremos los indices de las letras mayusculas y minusculas
				if (vector[i] > frecuencia_caracter.frecuencia) {
	
					frecuencia_caracter.frecuencia = vector[i];
					frecuencia_caracter.caracter = i;
				}
			}
	
			return frecuencia_caracter;
		}
	
	};
	
int main(){

	char caracter;
	int contador;
	Caracteres letras;

	cout << "\nIntroduce caracteres uno a uno (# para terminar): \n";
		
	while(caracter != '#'){

		caracter = cin.get();
		cin.ignore();

		if (caracter != '#'){

			letras.Aniade(caracter);

		}
	
	}

    FrecuenciaCaracter objetoDevuelto (letras.Moda());

	cout << "\n\nEl caracter " << objetoDevuelto.caracter << " aparece " << objetoDevuelto.frecuencia << " veces ";
	cout << endl << endl;
}








