/*
Autor: Carlos Martin Carrasco
Licencia: GPLv3
*/
#include <iostream>

using namespace std;

	class  SecuenciaCaracteres{
	
	private:
		static  const  int  TAMANIO  =  50;
		char  vector_privado[TAMANIO];
		int  total_utilizados;

	public:
		SecuenciaCaracteres()
			:total_utilizados(0)        
		{    
		}
	
		int  TotalUtilizados(){
			return  total_utilizados;
		}
	
		void  Aniade(char  nuevo){
			if (total_utilizados  <  TAMANIO){
				vector_privado[total_utilizados]  =  nuevo;
				total_utilizados++;
			}
		}
	
		void AniadeCadena(string nuevo){
			int tope = nuevo.size();
	
			for (int i = 0; i < tope; i++)
				Aniade(nuevo[i]);
		}
	
		char Elemento(int  indice){
			return  vector_privado[indice];
		}
	
		void Modifica(int indice_componente, char nuevo){
			if (indice_componente >= 0  &&  indice_componente < total_utilizados)
				vector_privado[indice_componente] = nuevo;
		}	
	
		// Elimina una componente, dada por su posición
		void Elimina(int posicion){
			if (posicion >= 0 && posicion < total_utilizados){
				int tope = total_utilizados-1;
	
				for (int i=posicion ; i<tope ; i++)
					vector_privado[i] = vector_privado[i+1];
	
				total_utilizados--;    
			}
		}
	
		int PrimeraOcurrenciaEntre(int pos_izda, int pos_dcha, char buscado){
			int i = pos_izda; 
			bool encontrado = false;
	
			while (i <= pos_dcha  &&  !encontrado)
				if (vector_privado[i] == buscado)
					encontrado = true;
				else
					i++;
	
			if (encontrado)
				return i;
			else
				return -1;
		}
	
		int PrimeraOcurrencia (char buscado){
			return PrimeraOcurrenciaEntre(0, total_utilizados - 1, buscado);
		}
	
			void EliminaRepetidos_con_VectorLocal(){
			  
					SecuenciaCaracteres secuencia_dos;
					char sin_repetidos[TAMANIO];     
					bool encontrado_en_repetidos;
					int utilizados_en_repetidos;
			
					if (total_utilizados > 0){
						secuencia_dos.Aniade(vector_privado[0]);
						utilizados_en_repetidos = 1;
			
						for (int actual = 1; actual < total_utilizados; actual++){
							encontrado_en_repetidos = false;
			
							for (int j = 0; j < utilizados_en_repetidos && !encontrado_en_repetidos; j++){
								if (vector_privado[actual] == secuencia_dos.Elemento(j))
									encontrado_en_repetidos = true;
							}
			
							if (!encontrado_en_repetidos){
								secuencia_dos.Aniade(vector_privado[actual]);
							//	sin_repetidos[utilizados_en_repetidos] = vector_privado[actual];
								utilizados_en_repetidos++;
							}
						}
						
						cout << "\n";
						for (int i = 0; i < utilizados_en_repetidos; i++)
							cout  << secuencia_dos.Elemento(i) << " ";
					}
			}
	}; 
	
int main(){
	SecuenciaCaracteres	frase;
	
		int tope;
		char caracter;

	cout << "\nIntroduce caracteres uno a uno (# para terminar): \n";
		
	while(caracter != '#'){

		caracter = cin.get();
		cin.ignore();

		if (caracter != '#'){

			frase.Aniade(caracter);

		}
	
	}

	
	tope = frase.TotalUtilizados();

	for (int i = 0; i < tope; i++)
		cout  << frase.Elemento(i) << " ";

	frase.EliminaRepetidos_con_VectorLocal();
}
