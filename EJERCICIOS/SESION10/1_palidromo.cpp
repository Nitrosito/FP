/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Añadid un método con la cabecera:
void Modifica (int indice_componente, char nuevo)
para que sustituya la componente con índice
indice_componente por el valor
nuevo.
Este método está pensado para modificar una componente ya existente, pero no para
añadir componentes nuevas. Por tanto, en el caso de que la componente no esté
dentro del rango correcto, el método no modificará nada.

*/
#include <iostream>

using namespace std;

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

};

int main() {
	char caracter ;
	SecuenciaCaracteres uno ;

	while (caracter != '#'){
		
		caracter = cin.get() ;
		cin.ignore() ; // Gracias a Rafael Ruiz ( Ignora el enter )
	
		if (caracter != '#') {
			uno.Aniade(caracter) ;
		}
	}
	
	if (uno.EsPalidromo())
		cout << "Es palidromo" << endl ;

	else
		cout << "No es palidromo" << endl ;


}
