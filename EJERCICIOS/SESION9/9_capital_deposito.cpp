/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
Licencia: GPLv3

Se quiere construir una clase DepositoSimulacion para simular préstamos, ofre-
ciendo la funcionalidad descrita en los ejercicios 15 (reinvierte capital e interés un
número de años) y 16 (reinvierte capital e interés hasta obtener el doble de la can-
tidad inicial) de la relación de problemas II (página RP-II.7). Por tanto, la clase debe
proporcionar, para un capital y unos intereses dados, métodos para:

a) Calcular el capital que se obtendrá al cabo de un número de años,
b) Calcular el número de años que deben pasar hasta obtener el doble de la canti-
dad inicial.

*/

#include <iostream>
#include <cmath>

using namespace std ;

class depositosimulacion {

	private: 

	double capital ;
	double anios ;
	double interes ;

	public:

	depositosimulacion(double capitali,double aniosi, double interesi){
		capital = capitali ;
		anios = aniosi ;
		interes = interesi ;
	}
	
	// Metodo para ver años a dejar en deposito
	double ShowAnios(){
		return anios ;
	}
	
	// Metodo para ver cuanto capital se tendra al cabo de los x años
	double CapitalAnios() {
	
		double capitala = capital ;
		if (anios > 0 & interes > 0) {
			for (int contador = 0; contador < anios; contador++){
			capitala = capitala + (capitala*(interes/100)) ;
			}
		return capitala ;
		}
		
		else 
		return capitala ;
	}

	//Metodo para saber cuantos años dejar el dinero para doblar el capital
	double DoblarCapital(){
		double capitalb = capital ;
		int contador= 0;
		
		if(anios > 0 & interes >0){
			do{
				capitalb = capitalb + (capitalb*(interes/100)) ;
				contador++;
			} while (capitalb < capital*2) ; // Mientras que el capital no sea el doble que el capital inicial	
	
			return contador ;
		}
		else
			return 0;
		}
} ;


int main(){
	double capital,anios,interes ;


	cout << "Introduzca capital: " ;
	cin >> capital ;

	cout << "Introduzca interes: " ;
	cin >> interes ;

	cout << "Introduzca numero de años: " ;
	cin >> anios ;

	depositosimulacion mozo(capital,anios,interes) ;// Creo un objeto y le doi sus valores
	
	cout << "Capital obtenido durante " << mozo.ShowAnios() << " Años : " << mozo.CapitalAnios() << endl;
	cout << "Deben pasar " << mozo.DoblarCapital() << " años para doblar el capital" << endl ;
}
