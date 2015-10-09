/* Programa que pida un valor de intensidad y resistencia e 
	imprima el voltaje correspondiente segun la ley de ohm
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal
   double intensidad;               // Declara variables para guardar
   double resistencia;               // los dos lados y la hipotenusa
   double voltaje;   

   cout << "Introduzca la Intensidad en A: " ;
   cin >> intensidad;
   cout << "Introduzca la Resistencia en Ohm: ";
   cin >> resistencia;

   voltaje = intensidad * resistencia;

   cout << "\nEl voltaje es: " << voltaje << "voltios \n\n" ;
   system("pause");
}
