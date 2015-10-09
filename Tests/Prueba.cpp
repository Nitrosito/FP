/* 
 Realizar un programa que lea dos secuencias de enteros desde teclado y nos diga si todos 
 los valores de la primera secuencia son mayores que todos los valores de la segunda secuencia.
 Realizad la lectura de los enteros dentro de sendos bucles sobre una �nica variable llamada dato.
 El final de cada secuencia viene marcado cuando se lee el 0
*/

#include <iostream> 
#include <string> 
 
using namespace std;    
    
int main(){     
	const int TERMINADOR = 0;
	int dato, min, max; 			// Variables que almacenar�n el dato leido y el valor minimo y m�ximo
										// de la 1� y 2� secuencia respectivamente
   const string MENSAJE_ENTRADA_1 = "\nIntroduzca un valor natural mayor que 0 y menor que 1000 de la 1� secuencia \n ";
   const string MENSAJE_ENTRADA_2 = "\n\nIntroduzca un valor natural mayor que 0 y menor que 1000 de la 2� secuencia \n ";
	bool secuencia_1 = false;
	bool secuencia_2 = false;
		// Hallamos el m�nimo de la 1� secuencia y lo comparamos con el m�ximo de la 2� secuencia 

	cout << MENSAJE_ENTRADA_1;
   cin >> dato;               // Lectura adelantada de la 1� secuencia
   min = dato;                  
        
   while (dato != TERMINADOR){     
      secuencia_1 = true;
      if (dato >= 1 && dato < 1000)        
         if (dato < min)
         	 min = dato;		// Almacenamiento de m�nimo
      cout << MENSAJE_ENTRADA_1;
      cin >> dato;
	}

	cout << MENSAJE_ENTRADA_2;   
   cin >> dato;               
   max = dato;                  
     
   while (dato != TERMINADOR){     
   	secuencia_2 = true;
      if (dato >= 1 && dato < 1000)        
         if (dato > max)
         	 max = dato;		// Almacenamiento del m�ximo
      cout << MENSAJE_ENTRADA_2;
      cin >> dato;
   }
   								
	if (secuencia_1 && secuencia_2){
 		if(min > max)							// Compara el m�nimo de la 1� con el m�ximo de la 2�
   		cout << " Los datos de la 1� secuencia son todos mayores que los de la 2� " << endl;
   	else
   	 cout << " Los datos de la 1� secuencia NO son todos mayores que los de la 2� " << endl;	
	}
	else
		cout << "No se han introducido las dos secuencias \n\n";
}
 
