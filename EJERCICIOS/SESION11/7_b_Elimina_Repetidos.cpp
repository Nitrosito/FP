/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Añadid un método EliminaRepetidos que quite los elementos repetidos, de forma
que cada componente sólo aparezca una única vez. Se mantendrá la primera apari-
ción, de izquierda a derecha. Por ejemplo, si la secuencia contiene
{'b','a','a','h','a','a','a','a',c','a'g'}
después de quitar los repetidos, se quedaría como sigue:
{'b','a','h','c','g'}

Implementad los siguientes algoritmos para resolver ester problema:
a) Usad un vector local sin_repetidos en el que almacenamos una única apa-
rición de cada componente:
Recorrer todas las componentes de la secuencia original
Si la componente NO está "sin_repetidos", añadirla (al vector "sin_repetidos")
Asignar las componentes de "sin_repetidos" a la secuencia
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

	// Elimina caracteres repetidos
	void EliminaRepetidos(){
		for(int a = 0; a < total_utilizados; a++){
			for(int b = a+1 ; b < total_utilizados; b++){
				if(vector_privado[a] == vector_privado[b]){
					Elimina(b);
					a--;
				}
			}
		}
	}
};

int main(){
	char caracter ;
	int eliminar;
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
