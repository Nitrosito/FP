/*
Realizar un programa que pida notas hasta que nota sea menor que 0.
Calcular el total de notas introducidas, los aprobados, los suspensos, la media total de la clase.
*/

#include<iostream>

using namespace std ;

int main(){
	int nota,aprobados,suspensos,media,alumnos ;

	nota= 0 ;
	aprobados = 0 ;
	suspensos = 0 ;
	media = 0 ;
	alumnos = 0 ;
	
	while (nota >= 0){
		cout << "Introduzca la nota del alumno : " ;
		cin >> nota ;
		
		if (nota >= 0){	
			if (nota >= 5)
				aprobados++ ;
		
			if (nota <= 4)
				suspensos++ ;
			
			alumnos++ ;
			media = media + nota ;
		}
	}
	
	cout << "\n\n Numero total de alumnos: " << alumnos << endl ;
	cout << "Numero de aprobados: " << aprobados << endl ;
	cout << "Numero de suspensos: " << suspensos << endl ;
	cout << "Nota media: " << media/alumnos << endl ;

}
