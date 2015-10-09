/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
License: GPLv3

Leed desde teclado dos variables util_filas y
util_columnas y leed los datos
de una matriz de enteros de tamaño util_filas x util_columnas.
Sobre dicha matriz, se pide lo siguiente:
a) Calcular la traspuesta de la matriz, almacenando el resultado en otra matriz.

*/

#include <iostream>

using namespace std;

int main(){
	int util_filas, util_columnas;

	cout << "Introduzca filas util: " ;
	cin >> util_filas;
		
	cout << "Introduzca columnas util: " ;
	cin >> util_columnas ;

	int matriz[util_filas][util_columnas] ;

	for (int i= 0; i < util_filas ;i++){
	
		for (int b=0; b < util_columnas; b++){
			cout << "Introduzca valor para el elemento [" << b << "] de la fila " << i << ": ";
			cin >> matriz[i][b]; 
		}
	}

	cout << " LA MATRIZ QUE USTED HA INTRODUCIDO: " << endl ;
	
	// Imprimiendo matriz
	for (int i=0; i < util_filas; i++){
		for(int b=0; b < util_columnas; b++){
			cout << matriz[i][b] << " " ;
		}
	cout << "\n" ;
	}

	// Traspongo la matriz, a otra matriz nueva
	int traspuesta[util_filas][util_columnas];
	for (int i=0; i < util_filas; i++){
		for (int b=0; b < util_columnas; b++){
			traspuesta[b][i]=matriz[i][b];
		}
	}
	int filas_transpuesta=util_columnas;
	int columnas_transpuesta=util_filas;

	cout << "\n\n\nMATRIZ TRANSPUESTA: " << endl;
	// Imprimiendo matriztraspuesta
	for (int i=0; i < filas_transpuesta; i++){
		for(int b=0; b < columnas_transpuesta; b++){
			cout << traspuesta[i][b] << " " ;
		}
	cout << "\n" ;
	}

}
