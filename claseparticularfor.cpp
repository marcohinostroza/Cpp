#include <iostream>
using namespace std;




int mesaSemana(int x){
  return x * 4;
}

int calcularSemanas(int semana){
  int respuesta = 0;
  int limite = 18 * 4;

  if(semana < limite){
    respuesta = semana;
  } else{
    respuesta = limite;
  }

  return respuesta;
}


/*----------------------------------------------------------*/

int main(){
  int meses;
  int semana;
  int pasar;

  cout << "Dime un numero de meses: ";
  cin >> meses;

  semana = mesaSemana(meses);
  cout << "hay " << semana << " semanas en " << meses << " meses" << endl;

  pasar = calcularSemanas(semana);
  cout << "hay " << pasar << " semanas" << endl;




  return 0;
}
