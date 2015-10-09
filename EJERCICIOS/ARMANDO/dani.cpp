	

    #include <iostream>
    #include <cmath>
    using namespace std;
     
    int main(){
     
            int n,m,suma;
            suma = 0;
           
            cout << "Introduzca multiplicando (n) :";
            cin >> n ;
     
            cout << "Introduzca multiplicador (m) :";
            cin >> m ;
           
           while( n != 1){
                   
            if ( n%2 != 0 ){
                            suma = suma + m;
                            }      
                           
                            cout << " m es : " << m << endl;
                     
                            m = m * 2;
                     
     
         
                     n = n / 2;    
                                   
                                             
                            cout << " n es : " << n << endl;
                   
            }
           
            if ( n == 1 ){
           
            suma = suma + m;
            }
           
           
            cout << suma << endl;
    }

