/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Defina la clase SecuenciaEnteros análo-
ga a SecuenciaCaracteres. Defina lo que sea necesario para calcular el número
de secuencias ascendientes del vector. Por ejemplo, el vector {2,4,1,1,7,2,1}
tiene 4 secuencias que son {2,4} {1,1,7} {2} {1}

*/

#include <iostream>

using namespace std ;

class SecuenciaEnteros{
	private:
	static const int TAMANIO = 50 ;
	int vector_privado[TAMANIO] ;
	int total_utilizados ;

	public:
	SecuenciaEnteros()
	:total_utilizados(0){ // Es lo mismo que poner total_utilizados = 0 ; 
	}
	
	int TotalUtilizados(){
		return total_utilizados ;
	}
	
	int Capacidad(){
		return TAMANIO ;
	}

	void Aniade(int nuevo){
		if (total_utilizados < TAMANIO){
			vector_privado[total_utilizados] = nuevo ;
			total_utilizados++;
		}
	}
	
	int Elemento(int indice){
		return vector_privado[indice];
	}

		
	void Modifica (int indice_componente, int nuevo){
		if (indice_componente < TAMANIO)
			vector_privado[indice_componente] = nuevo ;
	}

	
	// Imprime la secuencia
	void ImprimeSecuencia() {
			cout << "[";
		for (int i=0 ; i < total_utilizados ; i++){
			cout << "'" << vector_privado[i] << "' " ;
		}
			cout << "]";
	}

	//Elimina un elemento de la secuencia
	void Elimina(int indice_componente){
		if (indice_componente < total_utilizados){
			while (indice_componente <= total_utilizados){
				vector_privado[indice_componente] = vector_privado[indice_componente+1];
				indice_componente++;			
			}		
			total_utilizados--;	
		}
	}

	// Imprime el numero de secuencias ascendentes que hay
	void SecuenciaAscendente(){
		int anterior = -999999, i= 0 ;
		cout << "[ " ;
		for (i ; i < total_utilizados ; i++){
			if (vector_privado[i] >= anterior){
				cout << "'" << vector_privado[i] << "' ";
			}
			
			else{
				cout << "] ";
				cout << "[ '" << vector_privado[i] << "' ";
			}
		anterior = vector_privado[i] ;
		}
		cout << "]" ;
	}
			


};

int main(){
	int numero ;
	SecuenciaEnteros uno ;
	cout << "Introduzca numeros (0 para dejar de introducir: " << endl ;
	while (numero != 0){
		
		cin >> numero ;
		cin.ignore() ;
	
		if (numero != 0) {
			uno.Aniade(numero) ;
		}
	}
	
	cout << "Secuencia: " ; uno.ImprimeSecuencia();
	cout << "\nSecuencia Ascendente: " ; uno.SecuenciaAscendente();
	cout << endl ;
}
