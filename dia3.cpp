#include <iostream>
using namespace std;

/*void mostrarArray (string array[]){
  for(int i = 0 ; i < array ->size() ; i++){
    cout << "Juegos" << i << " = " << array[i] << endl;
  }
}*/

int main(){
  int numJuegos = 10;
  string juegos[numJuegos];


  for(int i = 0 ; i < numJuegos ; i++){
    string jue;
    cout << "Dime un juego: ";
    cin >> jue;
    juegos[i] = jue;
  }

  for(int i = 0 ; i < numJuegos ; i++){
    cout << "Juegos" << i << " = " <<  juegos[i] << endl;
  }

  juegos[4] = "Tetris";

  //mostrarArray(juegos);

  /*Deberes:
  -Rellenar un vector con los 100 primeros numeros.
  -Sumar de 4 en 4 los numeros y sumar en otro vector.
  {0,1,2,3,4,5,6,7} -> {6,22,38,....}*/
  return 0;
}
