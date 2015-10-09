/*
Autor: Carlos Martin Carrasco
Licencia: GPLv3
*/
	
#include <iostream>
using namespace std;

class SecuenciaCaracteres{
	
private:
	static const int TAMANIO = 50;
	char vector_privado[TAMANIO], vector_sin_repetidos[TAMANIO];
	int total_utilizados, total_sinrepetir;
	

public:
	SecuenciaCaracteres(){
	  total_utilizados=0;
	  total_sinrepetir=0;

	}	

	int TotalUtilizados(){
		return total_utilizados;
	}

	int TotalUtilizadosSinRepetir(){
		return total_sinrepetir;
	}

	int Capacidad(){
		return TAMANIO;
	}

	 // Metodo para añadir caracteres
	SecuenciaCaracteres Aniade(char nuevo, SecuenciaCaracteres objeto){
		SecuenciaCaracteres sin_repetidos(objeto);
		if (total_utilizados < TAMANIO){

			vector_privado[total_utilizados]= nuevo;
			total_utilizados++;

		}

		if (sin_repetidos.total_utilizados < TAMANIO){
		bool existe = false;	
			for(int contador = 0; contador < sin_repetidos.total_utilizados; contador++){
				if (sin_repetidos.vector_privado[contador] == nuevo){
					existe = true;
				}
			}

			if (!existe){

				sin_repetidos.vector_privado[sin_repetidos.total_utilizados] = nuevo;

				sin_repetidos.total_utilizados++;				
			}

		}

		return sin_repetidos;

	}

	char Elemento(int indice){
		return vector_privado[indice];
	}

	char ElementoSinRepetir(int indice){
		return vector_sin_repetidos[indice];
	}



};

int main(){

	char caracter;
	int contador;
	SecuenciaCaracteres letras;
	SecuenciaCaracteres letras_no_repetidas;

	cout << "\nIntroduce caracteres uno a uno (# para acabar): \n";
	
	while(caracter != '#'){

		caracter = cin.get();
		cin.ignore();

		if (caracter != '#'){


			letras_no_repetidas = letras.Aniade(caracter, letras_no_repetidas);

		}
	
	}

	//imprimimos el vector original

	cout << "\n\nDatos del vector original" << "\n";

	for(contador = 0; contador < letras.TotalUtilizados(); contador++){

		cout << letras.Elemento(contador) << "\n";

	}

	//imprimimos el vector con los caracteres sin repetir

	cout << "\n\nDatos del vector con los datos sin repetir" << "\n";

	for(contador= 0; contador < letras_no_repetidas.TotalUtilizados(); contador++){

		cout << letras_no_repetidas.Elemento(contador) << "\n";

	}

}
