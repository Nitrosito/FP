/* Autor: Carlos Martin Carrasco
	Fecha: 3 Octubre 2014
	
	Ejercicio6:Intercambiar los contenidos de dos variables.
	El programa leerá las variables desde el teclado,intercambiará sus valores.
	 continuación, mostrará en pantalla las variables ya modificadas.
	 
	El siguiente código no funciona correctamente.
		edad_Pedro = edad_Juan;
		edad_Juan = edad_Pedro;
		
		¿Por qué no funciona? Buscad una solución.
			No funciona porque primero esas variables no tienen asignado ningun valor.
			Ademas de que no puedes intercambiar el valor de dos variables de esa forma,
			hay que usar una intermedia.
	
	Resolucion: Uso una variable intermedia para transferir el valor de una variable a otra.

*/
#include <iostream>   // Inclusión de los recursos de E/S

using namespace std; 

int main(){                    // Programa Principal
	// Declaracion de tipos de variables
   double edad_Pedro ;
   double edad_Juan ;
	double intermedia ; //Variable que usare para intercambiar los valores de las otras 2 variables
	
   cout << "Introduzca el valor que almacenará la variable edad_Pedro : " ;
   cin >> edad_Pedro;
   
	cout << "\nIntroduzca el valor que almacenará la variable edad_Juan : " ;
   cin >> edad_Juan;

	cout << "\n\n----- VALOR SIN INTERCAMBIAR -----" ;
	cout << "\n edad_Pedro = " << edad_Pedro ;
	cout << "\n edad_Juan = " << edad_Juan ;
   
   cout << "\n\n----- VALOR INTERCAMBIADO -----" ;
	intermedia = edad_Pedro ;
	edad_Pedro = edad_Juan ;
	edad_Juan = intermedia ;

	
	cout << "\n edad_Pedro = " << edad_Pedro ;
	cout << "\n edad_Juan = " << edad_Juan << "\n\n";
	
   system("pause"); 
}
