/*
	Presenta en pantalla las salidas equivalentes a las que se muestran a continuaci�n
 	Se solicita a trav�s del teclado, el valor inicial y el n�mero de filas a imprimir. 
	En el ejemplo siguiente el valor inicial es 1, y se imprimen 5 filas.
	
1  2  3  4  5
2  3  4  5
3  4  5
4  5
5

*************************

1  2  3  4  5
2  3  4  5  6
3  4  5  6  7
4  5  6  7  8
5  6  7  8  9
*/

#include <iostream>

using namespace std;

int main(){						

	int inicial, filas;			

	cout << "Introduce el valor inicial: ";
	cin >> inicial;
												// Filtro del n�mero de filas
	do{
		cout << "Introduce el numero de filas(1-20): ";
		cin >> filas;
	}while(filas >= 20 || filas <= 1);
	
	for(int i = inicial; i <= (inicial + filas) - 1; i++){
		cout << "\n";
		cout.width(4);						// Control de formato de salida: anchura
		cout.setf(ios::left);			// Control de formato de salida: posici�n
		cout << i;
		
		for(int j = i + 1; j <= (inicial + filas) - 1; j++){
			cout.width(4);						// Control de formato de salida: anchura
			cout.setf(ios::left);			// Control de formato de salida: posici�n
			cout << j;
		}
	}
		
	cout << "\n\n" << "******************************" << "\n";
		
	for(int i = inicial; i <= (inicial + filas) - 1; i++){
		cout << "\n";
			
		for(int j = i; j <= (i + filas) - 1; j++){
			cout.width(4);						// Control de formato de salida: anchura y posici�n
			cout.setf(ios::left);
			cout << j;
		}
	}	
}
 
