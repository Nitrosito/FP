/*
Autor: Carlos Martin Carrasco Nitrosito@gmail.com
Laicencia: GPLv3

Sudoku es un juego muy popular que consiste en rellenar
una cuadrícula de 9 × 9 celdas que está dividida en subcuadrículas de 3 × 3 (deno-
minadas regiones) con cifras del 1 al 9. Un sudoku se considera resuelto si verifica
que:
• En cada fila aparecen todos los números del 1 al 9 (sin repetir)
• En cada columna aparecen todos los números del 1 al 9 (sin repetir)
• En cada región aparecen todos los números del 1 al 9 (sin repetir)
Realizar un programa que lea todos los elementos de un sudoku y determine si está
resuelto o no. Un ejemplo de sudoku resuelto es el siguiente:
Implemente la solución con una clase Sudoku con un dato miembro matriz de doble
corchete y añada un programa principal de prueba.
*/

using namespace std;

#include <iostream>

using namespace std;

class Sudoku {
	private:
		static const int MAXIMO_FILAS = 9 ;
		static const int MAXIMO_COLUMNAS = 9 ;
		int matriz_privada[MAXIMO_FILAS][MAXIMO_COLUMNAS];
		int filas_usadas;
		int columnas_usadas;
	public:
		Sudoku(){
			filas_usadas=0;
			columnas_usadas=0;
		}


		int FilasUsadas(){
			return filas_usadas;
		}

		int ColumnasUsadas(){
			return columnas_usadas;
		}

		void AniadeDato(int fila, int columna,int valor){
			matriz_privada[fila][columna]=valor;
		}
		
		int GetDato(int fila, int columna){
			return matriz_privada[fila][columna];
		}

		bool CompruebaFilas(){
			int aparece;
			bool correcto=true;
			for(int c=0; c < 9; c++){
				for(int a=1; a <=9 & correcto==true; a++){
					aparece=0;
					for (int i=0; i < 9; i++){
						if(matriz_privada[c][i]==a){ // Si en esa fila hay un 1..
							aparece++;
						}
					}
	
					if(aparece != 1){ // Si hay mas de un 1, o ninguno, paramos la ejecucion del bucle, el sudoku esta mal
						correcto=false;
					}
				}
			}

			if(correcto == true){
				return true;
			}

			else{
				return false;
			}
		}

		bool CompruebaColumnas(){
			int aparece;
			bool correcto = true;
			for(int c=0; c < 9 ; c++){
				for(int a=1; a <=9 & correcto==true; a++){
					aparece=0;
					for (int i=0; i < 9; i++){
						if(matriz_privada[i][c]==a){ // Si en esa columna hay un 1..
							aparece++;
						}
					}
	
					if(aparece != 1){ // Si hay mas de un 1, o ninguno, paramos la ejecucion del bucle, el sudoku esta mal
						correcto=false;
					}
				}
			}

			if(correcto == true){
				return true;
			}

			else{
				return false;
			}
		}
		/* SIN TERMINAR
		bool CompruebaRegiones (){
			bool correcto = true;
			int aparece=0;
			int fila=0;
			int columna=0;
			for(int region=1; region <= 9 & correcto==true; region++,fila=fila+3 , columna=columna+3){
				for(int b = columna; b <= columna+3 & correcto==true; b++){
					//aparece=0;
					for(int a=fila; a <= fila+3; a++){
						if(matriz_privada[fila][b]==b){
							aparece++;
						}	
					}
	
					if (aparece != 1){	
					correcto=false;
				}
	
				}
			}
		} 
		*/


};

int main(){
	int valor;
	bool ceros=false;
	
	Sudoku misudoku;
	// Añadiendo datos al sudoku
	for(int a=0; a < 9 & ceros==false ; a++){
		for(int i=0 ; i < 9 & ceros==false; i++){
			cout << "Introduce numero para la fila " << a+1 << " : " ;
			cin >> valor ;
			if (valor < 1 | valor >9 ){
			    ceros=true;
			}
			misudoku.AniadeDato(a,i,valor);
		}
	}
	
	if (ceros==true){
	  cout << "\n\n---- ERROR ----" << endl ;
	  cout << "Por favor, no introduzcas numeros menores de 1 en el sudoku, ni mayores que 9, no está permitido" << endl;
	}
	
	else{
		if (misudoku.CompruebaFilas()==true)
			cout << "Comprueba Filas Correcto, Sudoku OK" << endl;
		else
			cout << "Comprueba Filas Error, Sudoku incorrecto" << endl;

		if (misudoku.CompruebaColumnas()==true)
			cout << "Comprueba Columnas Correcto, Sudoku OK" << endl;
		else
			cout << "Comprueba Columnas Error, Sudoku incorrecto" << endl;
	}


}

