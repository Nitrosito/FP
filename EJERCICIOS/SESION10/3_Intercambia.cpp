/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Añadid el método IntercambiaComponentes para intercambiar dos componentes
de la secuencia. Por ejemplo, si la secuencia contiene {'h','o','l','a'}, des-
pués de intercambiar las componentes 1 y 3, se quedaría con h a l o 
¿Qué debería hacer este método si los índices no son correctos?

Añadid otro método llamado Invierte para invertir la secuencia. Si contenía, por
ejemplo, los caracteres m u n d o , después de llamar al método
se quedará con o d n u m . Implementad el método Invierte lla
mando a Intercambiacomponentes

Imprimid las componentes de la secuencia desde el main, antes y después de llamar
a dicho método. Observad que se repite el mismo tipo de código cuando se imprimen
las componentes de la secuencia. Ya lo arreglaremos en el tema siguiente.

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

	// Modifica un dato de la secuencia
	void Modifica (int indice_componente, char nuevo){
		if (indice_componente <= (total_utilizados-1) ) // Si no sale del rango de los que existen
			vector_privado[indice_componente] = nuevo ;
	}

	// Imprime la secuencia
	void ImprimeSecuencia() {
		for (int i=0 ; i < total_utilizados ; i++){
			cout << vector_privado[i] << " " ;
		}
	}

	// Intercambia componentes de la seucuencia
	void IntercambiaComponentes(int indice1, int indice2){
		if ( (indice1 <= (total_utilizados-1)) && (indice2 <= (total_utilizados-1)) ){
			char temporal;
			temporal=vector_privado[indice1] ;
			Modifica(indice1,vector_privado[indice2]);
			Modifica(indice2,temporal);
		}
	}

	//Invierte el orden de la secuencia completa
	void Invierte(){
		for(int i=0; i < total_utilizados/2; i++){
			IntercambiaComponentes(i,(total_utilizados - (1+i)) );
		 }
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
	
	if (uno.EsPalidromo())
		cout << "Es palidromo" << endl ;

	else
		cout << "No es palidromo" << endl ;
	
	cout << "--------------------------------------\n\n" ;
	cout << "Elementos antes de invertir el orden : " ; uno.ImprimeSecuencia() ;
	cout << "\nElementos despues de invertir el orden: " ; uno.Invierte() ; uno.ImprimeSecuencia() ;
	cout << endl;
}
