/*
 Leer los datos de otra matriz y multiplicar ambas matrices (las dimensiones de la
segunda matriz han de ser compatibles con las de la primera para poder hacer la
multiplicación)
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

	cout << "\n\nIntroduzca una nueva matriz:" << endl;
	int matriz2[util_filas][util_columnas] ;

	for (int i= 0; i < util_filas ;i++){
	
		for (int b=0; b < util_columnas; b++){
			cout << "Introduzca valor para el elemento [" << b << "] de la fila " << i << ": ";
			cin >> matriz2[i][b]; 
		}
	}

	cout << "Matriz 1: " << endl;
	// Imprimiendo matriz
	for (int i=0; i < util_filas; i++){
		for(int b=0; b < util_columnas; b++){
			cout << matriz[i][b] << " " ;
		}
	cout << "\n" ;
	}
	cout << "Matriz 2: " << endl ;

	// Imprimiendo matriz
	for (int i=0; i < util_filas; i++){
		for(int b=0; b < util_columnas; b++){
			cout << matriz[i][b] << " " ;
		}
	cout << "\n" ;
	}
 	
	int multiplicada[util_filas][util_columnas];
	//Multiplicando matrices
	for(int filas=0; filas < util_filas; filas++){
		for (int columnas=0; columnas < util_columnas; columnas++){
			for (int a=0; a < util_filas; a++){
				multiplicada[filas][columnas]=multiplicada[filas][columnas] + (matriz[filas][a]*matriz2[a][filas]);
			}
		}

	}

	cout << "\n\nMATRIZ MULTIPLICADAS: " << endl;

	       // Imprimiendo matriz
         for (int i=0; i < util_filas; i++){
                 for(int b=0; b < util_columnas; b++){
                         cout << multiplicada[i][b] << " " ;
                 }
         cout << "\n" ;
         }

}
