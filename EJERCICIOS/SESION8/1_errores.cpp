// MARCO LOS ERRORES COMO COMENTARIOS

// PRIMERO
int ValorAbsoluto (int entero) {
  if (entero < 0)
      entero = -entero // AQUI FALTA UN RETURN!!!!
  else	
      return entero ;
}

//SEGUNDO

void Cuadrado (int entero) {
    return entero*entero ; // ESTO NO PUEDE TENER UN RETURN, ES UN PROCEDIMIENTO!!! (void) no devuelbe nada!
}


//TERCERO
void Imprime(double valor) {
 double valor ;  // DECLARA UNA VARIABLE CON EL MISMO NOMBRE QUE UN PARAMETRO FORMAL!!
  cout << valor ;
}

// CUARTO
bool EsPositivo(int valor) {
 if (valor > 0)
   return true;
 // Y SI NO ES POSITIVO QUE DEVUELBE? FALTA UN RETURN!!
}