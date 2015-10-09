/*
Autor: Carlos Martin Carrasco
Licencia: GPLv3

*/
#include <iostream>
#include <cmath>

using namespace std;

class Punto2d{

	private:
		double abcisa;
		double ordenada;
	public:
		Punto2d(double abcisapunto, double ordenadapunto){
			abcisa=abcisapunto;
			ordenada=ordenadapunto;
		 }

		void SetCoordenadas(double abcisapunto, double ordenadapunto){
			abcisa=abcisapunto;
			ordenada=ordenadapunto;
		}

		double Abcisa(){
			return abcisa;
		}

		double Ordenada(){
			return ordenada;
		}
	};
	
class SegmentoDirigido{
	private:
		double x1, y1, x2, y2;
	
	public:
		SegmentoDirigido(double origenAbcisa, double origenOrdenada, double finalAbcisa, double finalOrdenada)
				:x1(origenAbcisa),
			y1(origenOrdenada),
			x2(finalAbcisa),
			y2(finalOrdenada)
		{  }
		void SetCoordenadas(double origenAbcisa, double origenOrdenada, double finalAbcisa, double finalOrdenada){
			x1=origenAbcisa;
			y1=origenOrdenada;
			x2=finalAbcisa;
			y2=finalOrdenada;	
		}

		double OrigenAbcisa(){
			return x1;
		}

		double OrigenOrdenada(){
			return y1;
		}

		double FinalAbcisa(){
			return x2;
		}

		double FinalOrdenada(){
			return y2;
		}

		double Longitud(){
			double resta_abscisas = x2-x1;
			double resta_ordenadas = y2-y1;
			return sqrt(resta_abscisas*resta_abscisas+resta_ordenadas*resta_ordenadas);
		}

		void TrasladarHorizontal(double unidades){
			x1=x1+unidades;
			x2=x2+unidades;
		}

		void TrasladaVertical(double unidades){
			y1=y1+unidades;
			y2=y2+unidades;
		}

		void Traslada(double enHorizontal, double enVertical){
			x1=x1+enHorizontal;
			x2=x2+enHorizontal;
			y1=y1+enVertical;
			y2=y2+enVertical;
		}
	};

class Circunferencia{
	private:
		double centro_x, centro_y, radio;
	
	public:
		static const double PI=3.141592;

		void SetCentro(double abcisa, double ordenada){
		centro_x=abcisa;
		centro_y=ordenada;
		}

		void SetRadio(double elradio){
			radio=elradio;
		}

		double GetAbcisaCentro(){
			return centro_x;
		}

		double GetOrdenadaCentro(){
			return centro_y;
		}

		double GetRadio(){
			return radio;
		}

		double Longitud(){
			return 2*PI*radio;
		}

		double Area(){
			return PI*radio*radio;
		}

		void Traslada(double enHorizontal, double enVertical){
			centro_x=centro_x+enHorizontal;
			centro_y=centro_y+enVertical;
		}
	};

class Cuadrado{
	private:
		double esquina_abcisa;
		double esquina_ordenada;
		double longitud;
	public:
		Cuadrado(double abcisita, double ordenadita, double longitudita)
				:esquina_abcisa(abcisita),
			esquina_ordenada(ordenadita),
			longitud(longitudita)
		{  }
		
		// 4 metodos para devolver cada uno de los lados del cuadrado, aunque no se que quiere decir "devolver lado"
		SegmentoDirigido lado1(){
			SegmentoDirigido lado1(esquina_abcisa, esquina_ordenada, esquina_abcisa+longitud, esquina_ordenada);
			return lado1;
		}
		
		SegmentoDirigido lado2 (){
			SegmentoDirigido lado2 (esquina_abcisa, esquina_ordenada, esquina_abcisa, esquina_ordenada+longitud);
			return lado2;
		}
		
		SegmentoDirigido lado3 (){
			SegmentoDirigido lado3 (esquina_abcisa+longitud, esquina_ordenada, esquina_abcisa+longitud, esquina_ordenada+longitud);
			return lado3 ;
		}
		
		SegmentoDirigido lado4 (){
			SegmentoDirigido lado4 (esquina_abcisa, esquina_ordenada+longitud, esquina_abcisa+longitud, esquina_ordenada+longitud);
			return lado4 ;
		}

		Punto2d Centro(){
			Punto2d Centro ((longitud/2)+esquina_abcisa, (longitud/2)+esquina_ordenada);
			return Centro;
		}

		Circunferencia CircunferenciaInscrita(){
			Circunferencia circulo;
			circulo.SetCentro((longitud/2)+esquina_abcisa, (longitud/2)+esquina_ordenada);
			circulo.SetRadio(longitud/2);
			return circulo;
			}

		Circunferencia Circunscrita(){
			Circunferencia circulo;
			SegmentoDirigido longitud1(esquina_abcisa, esquina_ordenada, esquina_abcisa+(longitud/2), esquina_ordenada+(longitud/2));
			circulo.SetCentro((longitud/2)+esquina_abcisa, (longitud/2)+esquina_ordenada);
			circulo.SetRadio(longitud1.Longitud());
			return circulo;
			}
};

int main(){
	double abcisa, ordenada, longitud;

	cout<<"Introduzca abcisa: ";
	cin >> abcisa;

	cout<<"Introduzca ordenada: ";
	cin >> ordenada;

	cout<<"Introduzca longitud: ";
	cin >> longitud;


	cout << "\n\n-----------------------" << endl ;

	Cuadrado uno(abcisa, ordenada, longitud);

	cout << "Punto central del interior del cuadrado : " << uno.Centro().Abcisa() << ", " << uno.Centro().Ordenada() << endl;

	cout << "Circunferencia inscrita: " << uno.CircunferenciaInscrita().GetAbcisaCentro() << ", " << uno.CircunferenciaInscrita().GetOrdenadaCentro() ;

	cout << "\nRadio: " << uno.CircunferenciaInscrita().GetRadio() << endl;

	cout << "Circunferencia circunscrita: " << uno.Circunscrita().GetAbcisaCentro() << ", " << uno.CircunferenciaInscrita().GetOrdenadaCentro() ;
	cout << "\nRadio: " << uno.Circunscrita().GetRadio() << endl;

}
