/*
Autor: Carlos MArtín Carrasco
Licencia: GPLv3

Proponed una alternativa para eliminar en la secuencia de caracteres los repetidos
siendo el número de desplazamientos el menor posible e implementadla.

*/

#include <iostream>

using namespace std ;

class SecuenciaCaracteres{
	private:
	static const int TAMANIO = 50 ;
	char vector_privado[TAMANIO] ;
	int total_utilizados ;

	public:
	SecuenciaCaracteres(){
		total_utilizados=0 ; // Es lo mismo que poner total_utilizados = 0 ; 
	}

	void Aniade(char nuevo){
		if (total_utilizados < TAMANIO){
			vector_privado[total_utilizados] = nuevo ;
			total_utilizados++;
		}
	}
	

	// Imprime la secuencia
	void ImprimeSecuencia() {
			cout << "[";
		for (int i=0 ; i < total_utilizados ; i++){
			cout << "'" << vector_privado[i] << "' " ;
		}
			cout << "]";
	}

	void EliminaRepetidos(){
		int lectura=0, escritura=0, contadorescritura=0;

			for (lectura; lectura < total_utilizados; lectura++){
				int encontrado = 0;
				
				for (int i=0; i <= contadorescritura ; i++){
					if (vector_privado[lectura] == vector_privado[i-1])
						encontrado++;
				}
				
				if (encontrado == 0){
					vector_privado[escritura] = vector_privado[lectura];
					contadorescritura++;
					escritura++;
				}
			}
			
			total_utilizados = contadorescritura;
	}

};

int main(){
	char caracter ;
	SecuenciaCaracteres uno ;

	cout << "Introduce caracter (# Para terminar de introducir) : " << endl ;
	while (caracter != '#'){
		
		caracter = cin.get() ;
		cin.ignore() ;
	
		if (caracter != '#') {
			uno.Aniade(caracter) ;
		}
	}
	
	cout << "Secuencia: " ; uno.ImprimeSecuencia();
	
	uno.EliminaRepetidos() ;
	cout << "\nNueva secuencia: " ; uno.ImprimeSecuencia() ; cout << endl;

}

