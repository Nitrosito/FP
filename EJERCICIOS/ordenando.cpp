#include <iostream>

using namespace std;


int main(){
 int vector[50];
 int usados=0;
 bool salir=false;
 int valor;
 
 while(!salir){
  cin >> valor;
  
  if (valor==0)
    salir=true;
    
    else{
     vector[usados]=valor;
     usados++;
      
    }
  }
   
   int aux;
   cout << "IMPRIMO VECTOR";
   for(int i=0; i < usados; i++){
    cout << vector[i] << " " ;
   }
   
   cout << "\nordenado\n" ;
   
   for(int i=0; i < usados-1; i++){
    for(int b=usados-1; b >0;b--){
     if(vector[b] < vector[b-1]){
        aux=vector[b-1];
	vector[b-1]=vector[b];
	vector[b]=aux;
     }
    }
   }
   
      cout << "IMPRIMO VECTOR";
   for(int i=0; i < usados; i++){
    cout << vector[i] << " " ;
   }
  
     cout << "\nordenado de mayor a menor\n" ;
      for(int i=0; i < usados -1;i++){
	for(int a=0; a < usados-1; a++){
	 if(vector[a] < vector[a+1]){
	  aux=vector[a];
	  vector[a]=vector[a+1];
	  vector[a+1]=aux;
	 }
	}
      }
   cout << "IMPRIMO VECTOR";
   for(int i=0; i < usados; i++){
    cout << vector[i] << " " ;
   }
     
}