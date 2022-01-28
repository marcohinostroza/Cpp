/*- Imprime tu nombre por pantalla.

- Pregunta por pantalla cuántos años tiene un tiburón.

- (Función) Partiendo de un número de años calcule cuanto tiempo en días y cuánto tiempo en meses ha pasado.

- (Esto es ficticio): Cada 5 meses al tiburón se le caen tantos dientes como meses tenga, es decir:
     A los 5 meses se le caen 5 dientes.
     A los 10 meses se le caen 10 dientes: Ya se le han caido 15 dientes (5 + 10).
     A los 15 meses se le caen 15 dientes: Ya se le han caido 30 dientes (5+10+15) , etc.
(Función) Calcula cuántos dientes se le han caído en total al tiburón.

- (Esto es ficticio): Si el tiburón tiene más de 8 años ya no le quedan dientes que puedan caerse.
  Modifica la función anterior para que deje de sumar dientes caídos cuando los meses lleguen a 8 años.

Suerte!
PD: [Todas las funciones extra son bienvenida]*/
#include <iostream>
using namespace std;


int anosadias(int x){

  return x * 365;
}

int anosameses(int x){
  return x * 12;
}

int calcularDientes(int mes){

  dientes = 0;
  limite = 8 * 12;

  for(int i = 0; i <= limite && i <= mes; i += 5){

    dientes += i;
  }

  return dientes;
}



/*----------------------------------------------------------Ç*/


int main(){

  string nombre;
  int anos;
  int dias;
  int meses;


  cout << "Introduce tu nombre: ";
  cin >> nombre;
  cout << "El usuario es: " << nombre << endl;

  cout << "¿Cuantos años tiene el tiburon? ";
  cin >> anos;
  cout << "El tiburon tiene " << anos << "años." << endl;

  dias = anosadias(anos);
  cout << "EL tiburon tiene " << dias << " dias en " << anos << " años" << endl;

  meses = anosameses(anos);
  cout << "EL tiburon tiene " << meses << " meses en " << anos << " años" << endl;

  cout << "A los " << meses << " meses " << "se le han caido " << calcularDientes(meses) << " dientes" << endl;





  return 0;
}
