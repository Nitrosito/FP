/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

En este ejercicio no hay que definir ninguna clase. Todas las operaciones se realizan
directamente en el main.
Realizad un programa que vaya leyendo caracteres hasta que se encuentre un punto
Contad el número de veces que aparece cada una de las letras mayúsculas e
imprimirlo en pantalla.

*/

#include <iostream>

using namespace std ;

int main(){
	char caracter ;
	static const int TAMANIO = 26 ;
	int vector_privado[TAMANIO];

	for (int i=0 ; i < 26 ; i++){
		vector_privado[i]={0};
	}

	cout << "Introduce letras ( . Para salir ) : " << endl ; 
	while (caracter != '.'){
		
		caracter = cin.get() ;
		cin.ignore() ;
	
		if (caracter != '.') {
			if(caracter >= 'A' && caracter <= 'Z')
				vector_privado[caracter-65]++;
		}
	}
	
	cout << "Numero de veces repetida la letra: " << endl ;
	char letra;
	for ( int i= 0; i < TAMANIO;i++){
		letra= i+65;
		cout << letra << ": " << vector_privado[i] << endl ;
	}
}
