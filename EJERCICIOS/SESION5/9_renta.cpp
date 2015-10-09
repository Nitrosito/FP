/*
Autor: Carlos Martin Carrasco nitrosito@gmail.com
License: GPLv3

Lee los datos fiscales de una persona y reajusta su renta bruta e imprime su renta neta final

-  La renta bruta es la cantidad de dinero íntegra que el trabajador gana.
- La renta neta es la cantidad que le queda después de quitarle el porcentaje de
	retención fiscal, es decir:
	Renta_neta = Renta_bruta - Renta_bruta * Retención / 100

Los datos de entrada son:
 Si la persona es un trabajador autónomo o no
 Si es pensionista o no
 Estado civil
 Renta bruta (total de ingresos obtenidos)
 Retención inicial a aplicar

AJUSTES :

- Se baja un 3% la retencion fiscal a los autonomos

PARA NO AUTONOMOS:
	- Se sube un 1% la retencion fiscal a todos los pensionistas
	- Al resto trabajadores se le sube un 2% la retencion fiscal. Una vez hecha
	esta subida 2%, se le aplica (sobre el resultado anterior) las siguientes subidas adicionales,
	dependiendo de su estado civil y niveles de ingresos:
		Se sube un 6 % la retención fiscal si la renta bruta es menor de 20.000 euros
		Se sube un 8 % la retención fiscal a los casados con renta bruta superior a 20.000 euros
		Se sube un 10 % la retención fiscal a los solteros con renta bruta superior a 20.000 euros

Nota: Cuando se pide subir un x % la retención fiscal, significa que la nueva retención
fiscal será la antigua más el resultado de realizar el x % sobre la antigua retención.
Nueva_retención = Antigua_retención + Antigua_retención * x / 100
De forma análoga, si se le baja la retención, habrá que restar en vez de sumar.

*/

#include <iostream> // Recursos entrada/Salida
#include <cmath>    // Recursos matematicos
#include <cctype>   // Recurso para trabajar con caracteres

using namespace std ;
char autonomo ; // Lectura si es o no autonomo
char pensionista ; // Lectura si es o no pensionista
char estado_civil ; // lectura estado civil
double renta_bruta ; // lectura renta bruta
double retencion_inicial ; // lectura retencion inicial
double renta_final; 	// Renta final


int main(){	    // Programa principal
	cout << "Es autónomo (S/N) :" ;
	cin >> autonomo ;

	cout << "Es pensionista (S/N):" ;
	cin >> pensionista ;

	cout << "Estado civil Casado o Soltero (C/S):" ;
	cin >> estado_civil ;
	
	cout << "Renta Bruta: " ;
	cin >> renta_bruta ;

	cout << "Retencion inicial a aplicar ( en % ): " ;
	cin >> retencion_inicial ;

	autonomo = tolower(autonomo) ; // Transformo todas las variables que contienen caracter a minusculas
	pensionista = tolower(pensionista) ;
	estado_civil = tolower(estado_civil) ;

	bool es_autonomo ; // SI es autonomo
	bool es_pensionista ; // SI es pensionista
	bool es_casado ; // SI es casado
	bool renta_menor ; // Renta menor de 20000€
	bool renta_mayor ; // Renta mayor a 20000€

	es_autonomo = (autonomo=='s') ; // Condicion para que sea autonomo
	es_pensionista = (pensionista=='s') ; // Condicion para que sea pensionista
	es_casado = (estado_civil=='s') ; // Condicion para que sea casado
	renta_menor = (renta_bruta < 20000) ; //Condicion para tener renta menor
	renta_mayor = (renta_bruta > 20000) ; // Condicion para tener renta mayor
	
	if (es_autonomo){ // SI ES AUTONOMO
		retencion_inicial = (retencion_inicial - 3) ; // Se le resta un 3% a la retencion
	}	
	
	else {	// Si NO es autonomo

		if (es_pensionista) // Si es pensionista
			retencion_inicial = (retencion_inicial + 1) ; // Se le sube un 1% la retencion
		
		else { // Si no es pensionista
			retencion_inicial = (retencion_inicial + 2) ; // Se le sube la retencion un 2%
			
			if (renta_menor) // Si cumple renta_menor
				retencion_inicial = (retencion_inicial + 6) ; // Se le sube la retencion un 6%
			
			if (es_casado && renta_mayor) // Si esta casado y cumple renta_mayor
				retencion_inicial = (retencion_inicial + 8) ; // Se le sube la retencion un 8%
			
			if (!es_casado && renta_mayor) // Si no esta casado y cumple renta_mayor
				retencion_inicial = (retencion_inicial + 10) ; // Se le sube la retencion un 10%
		}

	}

	renta_final = renta_bruta - (renta_bruta * (retencion_inicial/100) ); // Renta final
	cout << "La renta total es: " << renta_final << "€\n\n";

}


