/*
Autor: Carlos Martín Carrasco
Licencia GPLv3
*/

#include <iostream>
#include <cmath>
using namespace std;

static const double PI = 3.1415927;

bool SonIguales(double uno, double otro) {

	return abs(uno-otro) <= 1e-6; // Para valor absoluto
}

class Punto2D{

	private:
	
		double abcisa;
		double ordenada;
	
	public:
	
		Punto2D(double abcisaPunto, double ordendaPunto)
			:abcisa(abcisaPunto),
			ordenada(ordendaPunto)
	
		{ }

		double CentroX(double l){
				double a = abcisa + l/2;
				return a;
		}


		double CentroY(double l){
			double a = ordenada + l/2;
			return a;
		}	


		double GetAbcisa(){
			return abcisa;
		}
	
		double GetOrdenada(){
			return ordenada;
		}
	
		bool EsIgaual_a (Punto2D otro_punto){
			return  SonIguales(abcisa, otro_punto.GetAbcisa()) && 
					SonIguales(ordenada, otro_punto.GetOrdenada());
		}
	};
	
	class SegmentoDirigido{ 
	
	private:
	
		double x_1, x_2, y_1, y_2;
	
	public:
	
		 SegmentoDirigido(double origen_abcisa,
			double origen_ordenada,
			double final_abcisa,
			double final_ordenada){
	
			x_1 = origen_abcisa;
			y_1 = origen_ordenada;
			x_2 = final_abcisa;
			y_2 = final_ordenada;
	
		}
	
		double Abcisa(){
			return x_1;
		}
	
		double Ordenada(){
			return y_1;
		}
	
		double FinalAbcisa(){
			return x_2;
		}
	
		double FinalOrdenada(){
			return y_2;
		}
	
		double Longitud(){
			double resta_abcisas = x_2 - x_1;
			double resta_ordenadas = y_2 - y_1;
			return sqrt(resta_abcisas * resta_abcisas + resta_ordenadas * resta_ordenadas);
		}
	
		void TransladaHorizontal(double unidades){
			x_1 = x_1 + unidades;
			x_2 = x_2 + unidades;
		}
	
		void transladaVertical(double unidades){
			y_1 = y_1 + unidades;
			y_2 = y_2 + unidades;
		}
	
		void Translada(double und_horiz, double und_vert){
			TransladaHorizontal(und_horiz);
			transladaVertical(und_vert);
		}
	
	};
	
	class Circunferencia{
	
	private:
	
		double centro_x;
		double centro_y;
		double radio;
	
	public:
	
	
	
		void SetCentro(double abcisa, double ordenada){
		centro_x = abcisa;
		centro_y = ordenada;
		}
	
		void SetRadio(double el_radio){
			radio = el_radio;
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
			return PI+radio*radio;
		}
	
		void Translada(double en_horizontal, double en_vertical){
			centro_x = centro_x + en_horizontal;
			centro_y = centro_y + en_vertical;
		}
	
	
	};
	
	class Cuadrado{
	
	private:
	
		double esquina_abcisa;
		double esquina_ordenada;
		double longitud;
	
	public:
	
		Cuadrado(double x, double y, double l):
		esquina_abcisa(x), esquina_ordenada(y), longitud(l)
		{ }
	
		double Getesquina_abcisa(){
			return esquina_abcisa;
		}
	
		double Getesquina_ordenada(){
			return esquina_ordenada;
		}	
	
		double GetLongitud(){
		  return longitud;
		}
	
		double AreaCuadrado(){
			double area = longitud * longitud;
			return area;
		}
	
		double PerimetroCuadrado(){
			double perimetro = 4*longitud;
			return perimetro;
		}
	
		Punto2D Centro(){
			Punto2D centro((longitud/2)+esquina_abcisa, (longitud/2)+esquina_ordenada);
			return centro;
		}
	
		Circunferencia CircunferenciaInscrita(){
			Circunferencia circulo;
			circulo.SetCentro((longitud/2)+esquina_abcisa, (longitud/2)+esquina_ordenada);
			circulo.SetRadio(longitud/2);
			return circulo;
		}
	
		Circunferencia CircunferenciaCircunscrita(){
	
			Circunferencia circulo;
			SegmentoDirigido longitud1(esquina_abcisa, esquina_ordenada, esquina_abcisa+(longitud/2), esquina_ordenada+(longitud/2));
			circulo.SetCentro((longitud/2)+esquina_abcisa, (longitud/2)+esquina_ordenada);
			circulo.SetRadio(longitud1.Longitud());
			return circulo;
	
		}
		
		bool MayorArea(Cuadrado objeto_cuadrado){
			bool es_mayor = false;
			Cuadrado cuadrado2(objeto_cuadrado);
			if (AreaCuadrado()>cuadrado2.AreaCuadrado()){
				es_mayor = true;
			}
			return es_mayor;
		}
	
	
		int Contiene (Cuadrado objeto_cuadrado){
			int resultado = 0;  //  0 = ninguno se contiene, 1 = el primero contiene al segundo, 2 = el segundo contiene al primero
			Cuadrado cuadrado2(objeto_cuadrado);
	
			//  Comprobamos si el cuadrado 1 contiene al cuadrado 2
	
			if (cuadrado2.Getesquina_abcisa() >= Getesquina_abcisa())
				if (cuadrado2.Getesquina_abcisa() + cuadrado2.GetLongitud()<= Getesquina_abcisa()+ GetLongitud())
					if(cuadrado2.Getesquina_ordenada()<= Getesquina_ordenada())
						if(cuadrado2.Getesquina_ordenada() + cuadrado2.GetLongitud() <= Getesquina_ordenada() + GetLongitud())
							resultado = 1;

			//  Comprobamos si el cuadrado 2 contiene al cuadrado 1
	
			if (cuadrado2.Getesquina_abcisa() <= Getesquina_abcisa()  )
				if (cuadrado2.Getesquina_abcisa() + cuadrado2.GetLongitud()>= Getesquina_abcisa()+ GetLongitud())
					if(cuadrado2.Getesquina_ordenada()>= Getesquina_ordenada())
						if(cuadrado2.Getesquina_ordenada() + cuadrado2.GetLongitud() >= Getesquina_ordenada() + GetLongitud())
							resultado = 2;
	
	
	
			return resultado;
		}
	
	};

int main(){
	double abcisa, ordenada, longitud;
	bool es_mayor;
	int resultado;

	cout << "PRIMER CUADRADO " << endl << endl;

	cout << "\nIntroduzca la abcisa: ";
	cin >> abcisa;
	cout << "Introduzca la esquina ordenada: ";
	cin >> ordenada;
	cout << "Introduzca la longitud: ";
	cin >> longitud;

	Cuadrado cuadrado1(abcisa, ordenada, longitud);

	
	cout << "\n\n";

	cout << "SEGUNDO CUADRADO " << endl << endl;

	cout << "\nIntroduzca la abcisa: ";
	cin >> abcisa;
	cout << "Introduzca la esquina ordenada: ";
	cin >> ordenada;
	cout << "Introduzca la longitud: ";
	cin >> longitud;

	Cuadrado cuadrado2(abcisa, ordenada, longitud);


	es_mayor = cuadrado1.MayorArea(cuadrado2);

	if (es_mayor){
		cout << "\nEl primer cuadrado es mayor que el segundo " << endl;
	}
	else{
		cout << "\nEl segundo cuadrado es mayor que el primero " << endl;
	}


	cout << "\n\n";


	resultado = cuadrado1.Contiene(cuadrado2);

	cout << " resultado " << resultado;

	if (resultado == 0){
		cout << "\nNinguno de los dos cuadrados contiene al otro" << endl;
	}
	if (resultado == 1){
		cout << "\nEl cuadrado 1 contiene al cuadrado 2" << endl;
	}
	if (resultado == 2){
		cout << "\nEl cuadrado 2 contiene al cuadrado 1" << endl;
	}

	cout << "\n\n";


}
