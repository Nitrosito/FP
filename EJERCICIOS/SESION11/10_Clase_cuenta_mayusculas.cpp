/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Sobre el ejercicio 9, cread una clase específica ContadorMayusculas que imple-
mente los métodos necesarios para llevar el contador de las mayúsculas. Lo que se
pretende es que la clase proporcione los métodos siguientes:
void IncrementaConteo (char mayuscula)
int CuantasHay (char mayuscula)

Modificad el programa principal para que cree un objeto de esta clase y llame a sus
métodos para realizar los conteos de las mayúsculas. Finalmente, hay que imprimir en
pantalla cuántas veces aparece cada mayúscula.

*/

#include <iostream>

using namespace std ;

class ContadorMayusculas{

	private: 
	static const int TAMANIO=26 ;
	int vector_privado[TAMANIO];
	public: 
	ContadorMayusculas(){
		for (char i= 0 ; i < 26 ; i++){
		vector_privado[i]=0;
		}
	}
	
	// Metodo que incrementa el contador de la letra si esta es mayuscula
	void IncrementaConteo(char valor){
			if(valor >= 'A' && valor <= 'Z')
					vector_privado[valor - 'A']++;
	}


	// Metodo que devuelbe cuantas veces se ha repetido una determinada letra mayuscula
	int CuantasHay (char letra){
		int posicion = letra - 'A' ;
		return vector_privado[posicion];
	}
} ;

int main(){
	ContadorMayusculas uno ;
	char caracter ;

	cout << "Introduce letras ( . Para salir ) : " << endl ; 
		while (caracter != '.'){
			
			caracter = cin.get() ;
			cin.ignore() ;
		
			if (caracter != '.')
				uno.IncrementaConteo(caracter);
		}

	cout << "Numero de veces repetida la letra: " << endl ;
	char letra;
	for ( char  i= 'A' ; i <= 'Z' ;i++){
		cout << i << ": " << uno.CuantasHay(i) << endl ;
	}
}
