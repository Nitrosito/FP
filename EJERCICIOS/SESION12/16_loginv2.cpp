/*
Autor: Carlos Martín Carrasco nitrosito@gmail.com
Licencia: GPLv3

Se está diseñando un sistema web que recolecta datos
personales de un usuario y, en un momento dado, debe sugerirle un nombre de
usuario (login). Dicho login estará basado en el nombre y los apellidos; en con-
creto estará formado por los N primeros caracteres de cada nombre y apellido
(en minúsculas, unidos y sin espacios en blanco). Por ejemplo, si el nombre es
"Antonio Francisco Molina Ortega" y N=2, el nombre de usuario sugerido
será "anfrmoor"
Debe tener en cuenta que el número de palabras que forman el nombre y los apelli-
dos puede ser cualquiera. Además, si N es mayor que alguna de las palabras que
aparecen en el nombre, se incluirá la palabra completa. Por ejemplo, si el nom-
bre es "Ana CAMPOS de la Blanca" y N=4, entonces la sugerencia será
"anacampdelablan" (observe que se pueden utilizar varios espacios en blanco
para separar palabras).

Implemente la clase Login que tendrá como único dato miembro el tamaño N. Hay
que definir el método codifica que recibirá una cadena de caracteres (tipo string)
formada por el nombre y apellidos (separados por uno o más espacios en blanco) y
devuelva otra cadena con la sugerencia de login.
*/
#include <iostream>
#include <string>
using namespace std;

class Login{
	private:
	int tamanion;

	public:
	
	// Constructor
	Login(int numerocaracteres){
		if (numerocaracteres>=0)
			tamanion = numerocaracteres;

		else
			tamanion = 0;
	}

	string Codifica(string nombrecompleto){		
		string password;
		int cogidos=0;
		
		for(int i=0; i < nombrecompleto.size();i++){
		  
		  if(nombrecompleto[i] != ' ' && cogidos < tamanion){
		      password.push_back(tolower(nombrecompleto[i]));
		      cogidos++;
		  }
		  
		  if (cogidos == tamanion){
		      while(nombrecompleto[i] != ' ' && i < nombrecompleto.size())
			i++;
			
		      cogidos=0;
		  }
		  
		 
		   if(nombrecompleto[i] == ' ' && cogidos > 0 && cogidos < tamanion)
		     cogidos=0;
	
		}
		return password;
	}
	
};
int main(){
	int vtamanion ;
	string nombrecompleto;

	cout << "Introduzca el tamaño de N: " ;
	cin >> vtamanion;
	cin.ignore();
	Login objeto(vtamanion) ;

	cout << "Introduzca el nombre y los apellidos seguido de # para terminar: " << endl;
	getline(cin, nombrecompleto);
	//cin.getline(nombrecompleto, 40);
	cout << "Su contraseña es: " <<  objeto.Codifica(nombrecompleto) << endl;
 }

