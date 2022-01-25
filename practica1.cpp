#include <iostream>
using namespace std;

int tiempodia(int x){

  return(x * 365);
}

int tiempomeses(int x){

  return(x * 12);
}




/*-----------------------------------*/

int main(){
  string nombre;
  int anos;
  int dias;
  int meses;
  int dientes;


  cout << "Nombre: ";
  cin >> nombre;

  cout << "¿Cuantos años tiene el tiburón: ";
  cin >> anos;
  cout << "El tiburon tiene: " << anos << " años" << endl;

  dias = tiempodia(anos);
  cout << "Han pasado " << dias << " dias" << endl;

  meses = tiempomeses(anos);
  cout << "Han pasado " << meses << " meses" << endl;









  return 0;
}
