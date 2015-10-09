/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Añadid el método EliminaMayusculas  para eliminar todas las ma-
yúsculas. Por ejemplo, después de aplicar dicho método al vector
{'S','o','Y',' ','y','O'} éste debe quedarse con {'o',' ','y'}

Un primer algoritmo para resolver este problema sería el siguiente (en ejercicios pos-
teriores se verán métodos más eficientes):
Recorrer todas las componentes de la secuencia
	Si la componente es mayuscula,borrarla

Queremos implementarlo llamando al método Elimina que se ha definido en el ejer-
cicio 4 de esta relación de problemas:
class SecuenciaCaracteres{
......
void EliminaMayusculas(){
	for (int i = 0; i < total_utilizados; i++)
		if (isupper(vector_privado[i]))
			Elimina(i);
	}
};

El anterior código tiene un fallo. ¿Cuál? Probarlo con cualquier secuencia que tenga
dos mayúsculas consecutivas, proponer una solución e implementarla.

*/

#include <iostream>

using namespace std ;

class SecuenciaCaracteres{
	private:
	static const int TAMANIO = 50 ;
	char vector_privado[TAMANIO] ;
	int total_utilizados ;

	public:
	SecuenciaCaracteres()
	:total_utilizados(0){ // Es lo mismo que poner total_utilizados = 0 ; 
	}
	
	int TotalUtilizados(){
		return total_utilizados ;
	}
	
	int Capacidad(){
		return TAMANIO ;
	}

	void Aniade(char nuevo){
		if (total_utilizados < TAMANIO){
			vector_privado[total_utilizados] = nuevo ;
			total_utilizados++;
		}
	}
	
	char Elemento(int indice){
		return vector_privado[indice];
	}

		
         bool EsPalidromo() { // Devuelbe si una secuencia es o no es palidromo
                 int espalidromo = 0 ;
 
                         
                 for (int i = 0; i < (total_utilizados/2) ; i++){
                 
                         if ( Elemento(i) != (Elemento(total_utilizados - (i+1))) )
                                 espalidromo++ ;
                 }               
                 
                 if (espalidromo==0)
                         return true;
                 else    
                         return false ;
	}

	void Modifica (int indice_componente, char nuevo){
		if (indice_componente < TAMANIO)
			vector_privado[indice_componente] = nuevo ;
	}

	
	// Imprime la secuencia
	void ImprimeSecuencia() {
			cout << "[";
		for (int i=0 ; i < total_utilizados ; i++){
			cout << "'" << vector_privado[i] << "' " ;
		}
			cout << "]";
	}

	//Elimina un elemento de la secuencia
	void Elimina(int indice_componente){
		if (indice_componente < total_utilizados){
			while (indice_componente <= total_utilizados){
				vector_privado[indice_componente] = vector_privado[indice_componente+1];
				indice_componente++;			
			}		
			total_utilizados--;	
		}
	}
			

	 //Elimina las mayusculas
	 void EliminaMayusculas(){
	         for (int i = 0; i < total_utilizados; i++){
	                 if (isupper(vector_privado[i])){
	                        Elimina(i);
				i--;
		 }
		 	}
         }

};

int main(){
	char caracter ;
	int eliminar;
	SecuenciaCaracteres uno ;

	while (caracter != '#'){
		
		caracter = cin.get() ;
		cin.ignore() ;
	
		if (caracter != '#') {
			uno.Aniade(caracter) ;
		}
	}
	
	cout << "Secuencia: " ; uno.ImprimeSecuencia();
	uno.EliminaMayusculas();
	cout << "\nNueva secuencia: " ; uno.ImprimeSecuencia() ; cout << endl;

}
