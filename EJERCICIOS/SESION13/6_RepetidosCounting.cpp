#include <iostream>
using namespace std;

class SecuenciaCaracteres{
	
private:
	static const int TAMANIO = 50;
	static const int LETRAS_HASTA_N =150;
	int rango[LETRAS_HASTA_N];
	char vector_privado[TAMANIO];
	int total_utilizados;
	

public:
	SecuenciaCaracteres()
		:total_utilizados(0){

			for(int i = 0; i < LETRAS_HASTA_N; i++){

				rango[i] = 0;

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

	int ElementoRango(int indice){

		return rango[indice];

	}

	SecuenciaCaracteres Ordena(char caracter1, char caracter2){

		SecuenciaCaracteres objeto;
		char letra;
		int indice;
		char minimo = 0;
		char maximo = 0;
		int frecuencia[30];
		int frecuencia_utilizados = 0;
		char letra_inicio = caracter1;
		char letra_final = caracter2;
		//calculamos maximo y minimo

		for(int i = 0; i < total_utilizados; i++){

			indice = vector_privado[i];
			rango[indice]++;

		}

		for(int i=0; i < LETRAS_HASTA_N; i++){

			letra = i;

			if (ElementoRango(i) > 0){

				if (minimo == 0){

					minimo = letra;

				}

				maximo = letra;

			}

		}

		for(int i = letra_inicio; i <= letra_final; i++){

				frecuencia[frecuencia_utilizados] = rango[i];
				frecuencia_utilizados++;

		}

		//almacenamos los caracteres tantas veces como indica la frecuencia

		letra = letra_inicio;

		for(int i = 0; i < frecuencia_utilizados; i++ ){

			for(int x = 0; x < frecuencia[i]; x++){

				objeto.Aniade(letra);

			}	

			letra = letra + 1;

		}

		return objeto;


	}

};

int main(){

	char caracter, letra_inicio, letra_final;
	int contador; 
	SecuenciaCaracteres letras;

	cout << "\nintroduce una secuencia de caracteres (# para terminar): \n";
	
	while(caracter != '#'){

		caracter = cin.get();
		cin.ignore();

		if (caracter != '#'){


			letras.Aniade(caracter);

		}
	
	}

	//imprimimos el vector original

	cout << "\n\nDatos del vector original" << "\n";

	for(contador = 0; contador < letras.TotalUtilizados(); contador++){

		cout << letras.Elemento(contador) << "\n";

	}

	cout << "\n\nIntroduce la letra de inicio para imprimir el vector: ";
	cin >> letra_inicio;
	cout << "\n\nIntroduce la letra por la que finalizará el vector: ";
	cin >> letra_final;

	SecuenciaCaracteres resultado(letras.Ordena(letra_inicio, letra_final));

	cout << "\n\nEl vector resultante es: ";

		for (int i = 0; i < resultado.TotalUtilizados(); i++ ){

			cout << " " << resultado.Elemento(i);

		}

		cout << "\n\n";
}
