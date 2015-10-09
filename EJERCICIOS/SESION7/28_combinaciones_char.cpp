/*
Autor: Carlos Martin Carrasco
Licence: GPLv3

*/

#include <iostream>

using namespace std ;

int main(){
	char min1, max1, min2, max2, min2orig ;

	cout << "Introduzca min1: " ;
	cin >>	min1 ;
	
	cout << "Introduzca max1: " ;
	cin >> max1 ;
	
	cout << "Introduzca min2: " ;
	cin >> min2 ;
	
	cout << "Introduzca max2: " ;
	cin >> max2;

	min2orig = min2;

	while (min1 <= max1){
	min2 = min2orig ;
		while (min2 <= max2){
			cout << " " << min1 << min2 << "," ;
			min2++ ;
		}
	min1++;
	}		
}
