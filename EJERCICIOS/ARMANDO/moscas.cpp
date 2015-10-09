#include <iostream> 

using namespace std;

int main(){
	int n,m,suma ;
	
	suma = 0 ;

	cout << "Introduzca multiplicando (n) :" ;
	cin >> n ;

	cout << "Introduzca multiplicador (m) :" ;
	cin >> m ;

	if ( n == 1)
		suma = suma + m ;
	
		do{
			if (n%2!=0){
			   suma = suma + m ;
			}

			m = m * 2 ;
			n = n / 2 ;
		}while (n != 1);
	
	cout << "Resultado : " << suma ;
}
 
