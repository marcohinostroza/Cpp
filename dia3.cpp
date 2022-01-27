#include <iostream>
using namespace std;

/*void mostrarArray (string array[]){
  for(int i = 0 ; i < array ->size() ; i++){
    cout << "Juegos" << i << " = " << array[i] << endl;
  }
}*/
void meMultiplicox5 (int x){
  x = x * 5;
  cout << "X en la funcion vale: " << x;
}

int porcinco(int x){
  return (x * 5);
}

int main(){
  int numJuegos = 100;
  string juegos[numJuegos];
  int num1 = 2;
  int num2 = 0;
  int multx5;
  /*cout << "¿Cuantos juegos quieres introducir?: ";
  cin >> numJuegos;

  for(int i = 0 ; i < numJuegos ; i++){
    string jue;
    cout << "Dime un juego: ";
    cin >> jue;
    juegos[i] = jue;
  }

  juegos[4] = "Tetris";

  for(int i = 0 ; i < numJuegos ; i++){
    cout << "Juegos" << i << " = " <<  juegos[i] << endl;
  }*/

  num2 = porcinco(num1);
  cout << "El numero1 es: " << num1 << endl;
  cout << "El numero2 es: " << num2 << endl;

  meMultiplicox5(num1);

  //mostrarArray(juegos);

  /*Deberes:
  -Rellenar un vector con los 100 primeros numeros.
  -Sumar de 4 en 4 los numeros y sumar en otro vector.
  {0,1,2,3,4,5,6,7} -> {6,22,38,....}*/
  return 0;
}
