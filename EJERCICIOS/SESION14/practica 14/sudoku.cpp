
/*
 ejercicio 11 sesion 14

comprobar si un sudoku se ha resuelto de forma correcta

*/

#include <iostream>
using namespace std;

class SecuenciaEnteros{

	private:
		static const int MAXIMO_COLUMNAS = 50;
		int vector_privado[MAXIMO_COLUMNAS];
		int columnas_util;

	public:

		SecuenciaEnteros(): columnas_util(0)
		{	}

		void Aniade(int numero){

			vector_privado[columnas_util] = numero;
			columnas_util++;

		}

		int Elemento(int posicion){

			return vector_privado[posicion];

		}

		int TotalUtilizados(){

			return columnas_util;

		}

		void Inicializa(){

			columnas_util = 0;

		}

};

class MatrizRectangularEnteros{

	private:

		 static const int MAXIMO_FILAS = 50;
		 static const int MAXIMO_COLUMNAS = 50;
		 static const int DATOS_POR_LINEA = 9;
		int matriz_privada[MAXIMO_FILAS][MAXIMO_COLUMNAS];
		int filas_util;
		int columnas_util;
		int vector_comprueba[DATOS_POR_LINEA];

	public:

		MatrizRectangularEnteros(): filas_util(0), columnas_util(0)
		{	}
		
		int GetFilas(){

			return filas_util;

		}

		int GetColumnas(){

			return columnas_util;

		}

		void Aniade(int i, int j, int dato){

			matriz_privada[i][j] = dato;

		}

		
		void AniadeFila( SecuenciaEnteros objeto1){

			SecuenciaEnteros objeto(objeto1);
			columnas_util = 0;

			for(int i = 0; i < objeto.TotalUtilizados(); i++){

				matriz_privada[filas_util][columnas_util] = objeto.Elemento(i);
				columnas_util++;

			}

			filas_util++;
			
		}

		SecuenciaEnteros RecuperaFila(int n){

			SecuenciaEnteros fila;

			for(int i; i < columnas_util; i++){

				fila.Aniade(Elemento(n, i));

			}

			return fila;

		}

		void Inicializa(){

			for (int i = 1; i <= DATOS_POR_LINEA; i++ ){

				vector_comprueba[i] = 0;

			}


		}

		void Agrega(int posicion){

			vector_comprueba[posicion] += 1; 

		}

		bool Compara(MatrizRectangularEnteros mat1){

			MatrizRectangularEnteros matriz(mat1);
			bool resuelto = true;
			int inicio_fil, inicio_col, fin_fil, fin_col;

			//comprobamos las filas. creamos un vector con los datos d ela fila el cual ha de tener todos
			//sus valores a 1 si no hay repetidos, si los hubiera los valores podrian contener 0 o >1, por
			//lo que el sudoku no estaria resuelto. ésto se aplica en la comprobación de filas columnas y regiones

			for( int i = 0; i < matriz.GetFilas(); i++){

				Inicializa();

				for (int j = 0; j <matriz.GetColumnas(); j++){

					Agrega(matriz.Elemento(i,j));

				}

				for ( int x = 1; x <= 9; x++){

					if (vector_comprueba[x] != 1){

						resuelto = false;
						return resuelto;

					}

				}

			}

			//comprobamos las columnas

			for( int i = 0; i < matriz.GetColumnas(); i++){

				Inicializa();

				for (int j = 0; j <matriz.GetFilas(); j++){

					Agrega(matriz.Elemento(j,i));

				}


				for ( int x = 1; x <= 9; x++){

					if (vector_comprueba[x] != 1){

						resuelto = false;
						return resuelto;

					}


				}

			}

			//comparamos las regiones

			inicio_col = 0;
			inicio_fil = 0;
			fin_col = 3;
			fin_fil = 3;

			for( int i = 1; i <= 9; i++){

				Inicializa();

				for(int j = inicio_fil ; j < fin_fil; j++){		//filas

					for (int k = inicio_col; k < fin_col; k++){ //columnas

						Agrega(matriz.Elemento(j,k));

					}

				}

				for ( int x = 1; x <= 9; x++){


					if (vector_comprueba[x] != 1){

						resuelto = false;
						//return resuelto;

					}

				}

				//a cada iteracion del bucle se aumentan en 3 el inicio y el final de la fila
				//cuando lleve 3 iteraciones reseteeamos las filas e incrementamos las columnas
				// cuando lleve 6 iteraciones haremos lo mismo. Cada iteracion se corresponde a una region

				inicio_fil += 3;
				fin_fil += 3;

				if (i == 3 || i == 6){

					inicio_fil = 0;
					fin_fil = 3;
					inicio_col += 3;
					fin_col += 3;
				}

			}
					
		return resuelto;

		}

};



int main(){

	int numero;
	MatrizRectangularEnteros matriz;
	int cuantos;
	SecuenciaEnteros fila;
	bool resuelto;

	cout << "\n\nIntroduce el numero de filas: ";
	cin >> cuantos;

	for(int i = 1; i <= cuantos; i++){

		cout << "\n\nIntroduce una fila (-1 para terminar): ";


		while( numero != -1){

			cin >> numero;

			if (numero != -1){

				fila.Aniade(numero);

			}
		}

		matriz.AniadeFila(fila);
		fila.Inicializa();

		numero = 0;

	}



	cout << "\n\nD A T O S  M A T R I Z  P R I N C I P A L" << endl;

	for(int i = 0; i < matriz.GetFilas(); i++){

		for(int j = 0; j < matriz.GetColumnas(); j++){

			cout << matriz.Elemento(i, j);

		}

		cout << endl;

	}

	resuelto = matriz.Compara(matriz);

	if (resuelto){

		cout << "\nsudoku resuelto";

	}

	else{

		cout << "\nno esta resuelto";

	}
	cout << endl << endl;
	
}

	
