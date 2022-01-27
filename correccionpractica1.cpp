#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int aniosaDias(int anios){
  const int DIASENUNANIO = 365;
  return DIASENUNANIO * anios;
}

int aniosaMeses (int meses){

  return (meses * 12);
}


int main(){

// Imprime tu nombre por pantalla
string nombre;
int respuesta;

cout << "Introduce tu nombre: ";
cin >> nombre;

cout << "¿Cuantos años tiene el tiburón?: ";
cin >> respuesta;




  return 0;
}
