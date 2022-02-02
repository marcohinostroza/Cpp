#include <iostream>
using namespace std;


void octal(int x){

  for(int i = 1; i <= x; i++){
    cout << i << " = " << i/8 << i%8 << endl;
  }


}

/*void pasarLista(string lista[5], int posicion){
  if(lista[posicion]= posicion%2==0){
    cout << "Presente" << endl;
  } else{
    cout << "No estoy xd" << endl;
  }


}*/






/*-----------------------------------------------------------*/

int main(){
  string nameComida;
  int puesto;


/*1*/
  cout << "Nombre de usuario: Marco Antonio Alfoncio Hinostroza" << endl;
/*2*/
while(nameComida != "Crustaceos"){
  cout << "Introduce un nombre de cualquier comida para el pulpo (Siempre la letra inicial con mayuscula <3): ";
  cin >> nameComida;
  if(nameComida == "Crustaceos"){
    cout << "ESO SI ME GUTA" << endl;
  } else{
    cout << "QUE ASCO" << endl;
  }
}

/*3*/
 octal(9);

/*4*/




  return 0;
}

/*
- Pasa lista a los pulpos.
Crea una lista con el nombre de 5 pulpos y una función que los imprima por pantalla.
Al pasar lista, los pulpos contestan SI/NO, devuelve una lista con las faltas.
- Los pulpos solo comen números de crustáceos múltiplos de tres.
Le pasamos este array con el número de crustáceos que hay en cada pecera:
[23,74,92,64,27,13,84,73]
Reorganiza los crustáceos para que en todas las peceras haya un número múltiplo de tres de crustáceos.
*/
