/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3

Definid la clase MatrizRectangularEnteros usando una matriz de doble corche-
te como dato miembro privado.

int matriz_privada[MAXIMO_FILAS][MAXIMO_COLUMNAS];

Definid métodos para:
a) Obtener el número de filas y columnas utilizadas, así como el dato que haya en
una fila y columna.

b) Devolver una fila completa como un objeto de la clase SecuenciaEnteros.

c) Añadir una fila entera. La fila será un objeto de la clase SecuenciaEnteros.

d) Comprobar si es igual a otra matriz.

e) Obtener la traspuesta.

f ) Comprobar si es simétrica. Hacedlo primero calculando la traspuesta de la matriz
y viendo si es igual a su simétrica, usando los métodos anteriores.
Hacedlo también comprobando directamente si cada componente es igual a su
simétrica y parando el recorrido en cuanto encuentre una componente que no lo
verifique.

g) Multiplicar dos matrices.

*/

#include <iostream>

using namespace std;

class SecuenciaEnteros{
	private:
		static const int TAMANIO = 50 ;
		int secuencia[TAMANIO] ;
		int posicion;
	public:
		SecuenciaEnteros(){
			posicion=0;
		}

		void Aniade(int valor){
			secuencia[posicion]=valor;
			posicion++;
		}

		int GetDato(int posicion){
			return secuencia[posicion];
		}
		
		int GetPosicion(){
			return posicion;
		}

		void GetSecuencia(){
			for(int i=0; i < posicion; i++){
				cout << secuencia[i] << " " ;
			}
			cout << "\n" ;
		}
};

class MatrizRectangularEnteros {
	private:
		static const int MAXIMO_FILAS = 50 ;
		static const int MAXIMO_COLUMNAS = 50 ;
		int matriz_privada[MAXIMO_FILAS][MAXIMO_COLUMNAS];
		int filas_usadas;
		int filas;
		int columnas_usadas;
	public:
		MatrizRectangularEnteros(int numerofilas,int numerocolumnas){
			filas_usadas=numerofilas;
			columnas_usadas=numerocolumnas;
			filas=0;
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


		SecuenciaEnteros GetFila(int fila){
			SecuenciaEnteros objeto ;
			for(int i = 0; i < columnas_usadas ; i++){
				objeto.Aniade(GetDato(fila,i));
			}
			return objeto;
		}

		void AniadeFila(SecuenciaEnteros secuencia){
			for(int i = 0; i < secuencia.GetPosicion() ; i++){
			    AniadeDato(filas,i,secuencia.GetDato(i));
			}
			filas++;
		}

		MatrizRectangularEnteros Transpuesta(){
			MatrizRectangularEnteros transpuesta(columnas_usadas,filas_usadas);
			for (int i=0; i < filas_usadas ; i++){
				for (int b=0; b < columnas_usadas ; b++)
				{
				transpuesta.AniadeDato(b,i,matriz_privada[i][b]);
				}
			}
		return transpuesta;
		}
		
		// Metodo multiplica matrices
		MatrizRectangularEnteros MultiplicaMatrices(MatrizRectangularEnteros matriz, MatrizRectangularEnteros segunda_matriz){
			MatrizRectangularEnteros multiplicada(filas_usadas,columnas_usadas);
	
			for(int i = 0; i < matriz.FilasUsadas(); i++){
			   	for (int j = 0; j < segunda_matriz.FilasUsadas() ; j++){
				     for(int x = 0; x < matriz.ColumnasUsadas() ; x++){	
				     multiplicada.AniadeDato(i,j,(matriz.GetDato(i,x) * segunda_matriz.GetDato(x,j))) ;  
			     	     }
	   			}
  			}
			return multiplicada;
		}

		void ImprimeMatriz(){
			for(int i=0; i < filas_usadas; i++){
				for(int j=0; j < columnas_usadas; j++){
					cout << matriz_privada[i][j] << " " ;
				} 
				cout << " " << endl;
			}
		}

		bool SonIguales(MatrizRectangularEnteros una){
			for (int a=0; a < una.filas_usadas; a++){
				for(int  b=0; b < una.columnas_usadas; b++){
					if(una.matriz_privada[a][b] != matriz_privada[a][b])
						return false;
				}
			}
		return true;
		}

};

int main(){

	int numerofilas,numerocolumnas,valor,muestramefila;
	cout << "Introduce el número de filas a usar: " ;
	cin >> numerofilas ;

	cout << "Introduce el número de columnas a usar: " ;
	cin >> numerocolumnas;

	MatrizRectangularEnteros matriz(numerofilas,numerocolumnas);
	for(int a=0; a < numerofilas ; a++){
		SecuenciaEnteros secuencia;
		for(int i=0 ; i < numerocolumnas; i++){
			cout << "Introduce dato para la fila " << a+1 << " : " ;
			cin >> valor ;
			secuencia.Aniade(valor);
			// DEBUG cout << "dato introducido" <<  secuencia.GetDato(i) << "posicion " <<  secuencia.GetPosicion() << "\n ";

		}
		matriz.AniadeFila(secuencia); // Le meto la secuencia a la matriz
	}

	/////////////////////
	// MOSTRANDO DATOS///
	/////////////////////

	cout << "-----------------------------" << endl ;
	cout << "¿Qué fila desea ver? : ";
		cin >> muestramefila ;
	cout << "Devolviendo fila " << muestramefila << " como objeto SecuenciaEnteros" << endl ;
	SecuenciaEnteros fila(matriz.GetFila(muestramefila-1)); // ( -1 para que Fila 1 = fila[0] ) El usuario no sabe de ceros.
	fila.GetSecuencia();	// Imprimo el contenido del objeto fila 
	
	cout << "\n\n Matriz introducida: " << endl;
	matriz.ImprimeMatriz();
	
	MatrizRectangularEnteros traspuesta(matriz.Transpuesta());
	
	cout << "\nTranspuesta: " << endl;
	traspuesta.ImprimeMatriz();

	cout << "\nIntroduce otra Matriz: " << endl ;

	MatrizRectangularEnteros matriz2(numerofilas,numerocolumnas);
	for(int a=0; a < numerofilas ; a++){
		SecuenciaEnteros secuencia;
		for(int i=0 ; i < numerocolumnas; i++){
			cout << "Introduce dato para la fila " << a+1 << " : " ;
			cin >> valor ;
			secuencia.Aniade(valor);
			// DEBUG cout << "dato introducido" <<  secuencia.GetDato(i) << "posicion " <<  secuencia.GetPosicion() << "\n ";

		}
		matriz2.AniadeFila(secuencia); // Le meto la secuencia a la matriz
	}
	
	if (matriz.SonIguales(matriz2)==true)
			cout << "Las dos matrices son iguales" << endl;
	else
			cout << "Las matrices no son iguales" << endl;
	
}
