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
		int matriz_privada[MAXIMO_FILAS][MAXIMO_COLUMNAS];
		int filas_util;
		int columnas_util;

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

		int Elemento(int fila, int columna){

			if (fila < filas_util && columna < columnas_util){

				return matriz_privada[fila][columna];

			}

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

		bool Compara( MatrizRectangularEnteros matriz){

			MatrizRectangularEnteros matriz1(matriz);

			bool iguales = true;

			for( int i = 0; i < filas_util; i++){

				for (int j = 0; j < columnas_util; j++){

					if(Elemento(i, j) != matriz1.Elemento(i, j)){

						iguales = false;

					}
				}
			}

			return iguales;

		}

		MatrizRectangularEnteros Traspuesta(){

			MatrizRectangularEnteros traspuesta;
			
				for(int i = 0; i < filas_util; i++){

					for (int j = 0; j < columnas_util; j++){

						traspuesta.matriz_privada[i][j] = matriz_privada[j][i];
			

					}

				}

			traspuesta.filas_util = columnas_util;
			traspuesta.columnas_util = filas_util;
			return traspuesta;

		}


		bool ComparaSimetrica( MatrizRectangularEnteros matriz){

			MatrizRectangularEnteros matriz1(matriz);

			bool iguales = true;

			for( int i = 0; i < filas_util; i++){

				for (int j = 0; j < columnas_util; j++){

					if(Elemento(i, j) != matriz1.Elemento(i, j)){

						iguales = false;

						return iguales;

					}
				}
			}

			return iguales;

		}

	MatrizRectangularEnteros Multiplica (MatrizRectangularEnteros mat, MatrizRectangularEnteros mat2){

		MatrizRectangularEnteros dato1(mat);
		MatrizRectangularEnteros dato2(mat2);
		MatrizRectangularEnteros resultado;
		int producto = 0;

        for(int i=0; i< dato1.GetFilas(); ++i){

            for(int j=0; j<dato2.GetColumnas(); ++j){

            	resultado.columnas_util = 0;

                
                for(int z=0; z<dato1.GetColumnas(); ++z){

                    producto += dato1.Elemento(i, z) * dato2.Elemento(z, j);
                    
                }

                resultado.columnas_util = j;
                resultado.Aniade(i, j, producto);
                producto = 0;
            }

            resultado.filas_util = i;

        }

        resultado.filas_util++;
        resultado.columnas_util++;

        return resultado;

	}

};



int main(){

	int numero;
	MatrizRectangularEnteros matriz, matriz1;
	SecuenciaEnteros fila;
	int cuantos;
	bool son_iguales;

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

	cout << endl << endl;

	cout << "\n\nD A T O S  M A T R I Z  P R I N C I P A L" << endl;

	for(int i = 0; i < matriz.GetFilas(); i++){

		for(int j = 0; j < matriz.GetColumnas(); j++){

			cout << matriz.Elemento(i, j);

		}

		cout << endl;

	}

	cout << "\n\n R E C U P E R A R  F I L A";

	cout << "\n\nfila a recuperar: ";
	cin >> numero;

	SecuenciaEnteros FilaR(matriz.RecuperaFila(numero));
	
	for (int i = 0; i < FilaR.TotalUtilizados(); i++){

		cout << FilaR.Elemento(i) << " ";

	}

	cout << "\n\nC O M P A R A C I O N  D E  M A T R I C E S" << endl;

	cout << "\n\nIntroduzca los datos de una segunda matriz a comparar: ";

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

		matriz1.AniadeFila(fila);
		fila.Inicializa();

		numero = 0;

	}

	son_iguales = matriz.Compara(matriz1);

	if (son_iguales){

		cout << "\n\nLas matrices son iguales";

	}

	else{

		cout << "\n\nLas matrices no son iguales";

	}


	cout << "\n\n T R A N S P U E S T A  D E  L A  P R I M E R A  M A T R I Z" << endl;

	MatrizRectangularEnteros traspuesta(matriz.Traspuesta());

	for(int i = 0; i < traspuesta.GetFilas(); i++){

		for(int j = 0; j < traspuesta.GetColumnas(); j++){

			cout << traspuesta.Elemento(i, j);

		}

		cout << endl;

	}

	cout << "\n\nC O M P R O B A C I O N  S I M E T R I A";

	son_iguales = matriz.Compara(traspuesta);

	if (son_iguales){

		cout << "\n\nLas matrices son simétricas";

	}

	else{

		cout << "\n\nLas matrices no son simétricas";

	}

	cout << "\n\nM E T O D O  2";

	son_iguales = matriz.ComparaSimetrica(traspuesta);

	if (son_iguales){

		cout << "\n\nLas matrices son simétricas";

	}

	else{

		cout << "\n\nLas matrices no son simétricas";

	}

	cout << "\n\nM U L T I P L I C A C I O N" << endl;


	if (matriz.GetColumnas() == matriz1.GetFilas()){

		MatrizRectangularEnteros operacion(matriz.Multiplica(matriz, matriz1));

		//cout << "\n\n-->" << operacion.GetFilas() << " " <<  operacion.GetColumnas();


		for(int i = 0; i < operacion.GetFilas(); i++){

			for(int j = 0; j < operacion.GetColumnas(); j++){

				cout << operacion.Elemento(i, j) << " ";

			}

		cout << endl;

		}

	}

	else{

		cout << "\n\nLas matrices no pueden multiplicarse";

	}

	cout << endl << endl;
}