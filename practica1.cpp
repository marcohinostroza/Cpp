#include <iostream>
using namespace std;

int tiempodia(int x){

  return(x * 365);
}

int tiempomeses(int x){

  return(x * 12);
}

int dientesCaidos(int x){
  int mes;
  int total = 0;

  mes = tiempomeses(x);
  for(int i = 0; i <= mes ; i += 5){
    total += i;
  }

  return total;
}


int limiteanos(int anos, int Maxanos){
  int mes;
  int Maxmeses;
  int total = 0;

  mes = tiempomeses(anos);
  Maxmeses = tiempomeses(Maxanos);
  for(int i = 0; i <= mes && i < Maxmeses; i += 5){
    total += i;
  }
  return total;
}

/*-----------------------------------*/

int main(){
  string nombre;
  int anos;
  int dias;
  int meses;
  int dientes;
  int totaldientes;
  int limites;


  cout << "Nombre: ";
  cin >> nombre;

  cout << "¿Cuantos años tiene el tiburón: ";
  cin >> anos;
  cout << "El tiburon tiene: " << anos << " años" << endl;

  dias = tiempodia(anos);
  cout << "Han pasado " << dias << " dias" << endl;

  meses = tiempomeses(anos);
  cout << "Han pasado " << meses << " meses" << endl;


  // tiburon se le caen tantos dientes como meses sean

  totaldientes = dientesCaidos(anos);
  cout << "Al tiburon se le han caido " << totaldientes << " dientes." << endl;

// si el tiburon tiene mas de 8 años ya no le quedan dientes que se le puedan caer.
// modifica la funcion anterior para que deje de sumar dientes caidos cuando los meses lleguen a 8 años.

  limites = limiteanos(anos, meses);
  cout << limites;



  return 0;
}
