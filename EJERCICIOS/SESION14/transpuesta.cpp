/*Ejercicio13a
Programa que calcula la traspuesta de una matriz leida por teclado*/

#include <iostream>

using namespace std;

int main(){
	int util_filas, util_columnas;
	
	cout << "Introduzca el número de filas de la matriz: ";
	cin >> util_filas;
	cout << "Introduzca el número de columnas de la matriz: ";
	cin >> util_columnas;
	
	int matriz_a[util_filas][util_columnas], traspuesta[util_columnas][util_filas];	
	
	for(int i = 0; i < util_filas; i++){
		for(int j = 0; j < util_columnas; j++){
			cout << "fila " << i + 1 << ", columna " << j + 1 << " :";
			cin >> matriz_a[i][j];
		}
	}
	
	for(int i = 0; i < util_filas; i++){
		for(int j = 0; j < util_columnas; j++){
			traspuesta[j][i] = matriz_a[i][j];
		}
	}
	
	cout << "Matriz A:";
	for(int i = 0; i < util_filas; i++){
		cout << "\n";
		for(int j = 0; j < util_columnas; j++){
			cout << matriz_a[i][j];
		}
	}
	
	cout << "\nMatriz traspuesta de la matriz A:";
	for(int i = 0; i < util_columnas; i++){
		cout << "\n";
		for(int j = 0; j < util_filas; j++){
			cout << traspuesta[i][j];
		}
	}
}
