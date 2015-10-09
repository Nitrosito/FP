/* Autor: Carlos Martin Carrasco
	Fecha: 5 Octubre 2014
	
	Ejercicio22
*/
	
#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std ; 

int main(){                    // Programa Principal
		double x ;
		double y ;
		double h ;
	   cout << "Introduce valor x : " ;
	   cin >> x ;
	   
		cout << "\nIntroduce valor y : " ;
	   cin >> y ;
	   
	   cout << "\nIntroduce valor h : " ;
	   cin >> h ;
	   
		cout << "\n\n---------------------------------\n" ;
		
		cout << "\na)" <<  (1 +(pow(x,2)/y))  /  (pow(x,3)/(1+y)) << "\n\n" ;
		
		cout << "\nb)" <<  (1 + (1/3)*sin(h)-(1/7)*cos(h)) / (2*h) << "\n\n" ;

		cout << "\nc)" << sqrt( 1 + (  pow( exp(x) / pow(x,2),2 ) )  )<< "\n\n" ;
		
		system("pause"); 
}
