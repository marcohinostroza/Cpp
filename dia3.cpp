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

void subirNota (int notas[3], int posicion, int nuevaNota){
  notas[posicion] = nuevaNota;
}

void imprimirArray(int array[20], int tama){
  for(int i = 0; i < tama; i++){
    cout << array[i] << endl;
  }
}

int main(){
  int numJuegos = 100;
  string juegos[numJuegos];
  int num1 = 2;
  int num2 = 0;
  int multx5;
  int notas[] = {8, 4, 9};
  string clave = "gfasa";
  string clave2;
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

  /*num2 = porcinco(num1);
  cout << "El numero1 es: " << num1 << endl;
  cout << "El numero2 es: " << num2 << endl;

  meMultiplicox5(num1);*/

  /*cout << "Notas original" << endl;

  imprimirArray(notas, 3);

  cout << "Subimos la nota" << endl;

  subirNota(notas, 1, 9);

  cout << "Nota tras subir la nota" << endl;

  imprimirArray(notas, 3);*/

/*
  cout << "dime la clave o muere: ";
  cin >> clave2;
  while(clave2 != clave){
    cout << "Repite la clave: ";
    cin >> clave2;
  }*/











  //mostrarArray(juegos);








  /*Deberes:
  -Rellenar un vector con los 100 primeros numeros.
  -Sumar de 4 en 4 los numeros y sumar en otro vector.
  {0,1,2,3,4,5,6,7} -> {6,22,38,....}*/

  int tama = 100;
  int num[tama];
  int sumaNum[tama/4];
//Rellenamos el array con los 100 primeros nunmeros
  for (int i = 0; i < tama ; i++){
    num[i] = i;
  }

  for (int i = 0; i < tama; i+=4){
    sumaNum[i/4] = i + i+1 + i+2 + i+3;
    }

  cout << "otra forma de hacerlo" << endl;
  int suma = 0;
  int contador = 0;
  for(int i = 0; i < tama; i++){
    suma += i;
    if(i % 4 == 0){
      sumaNum[i/4] = suma;
      suma = 0;
    }
    contador++;
  }

  for (int i = 0; i < tama/4; i++){
    cout << sumaNum[i] << endl;
  }









  return 0;
}
