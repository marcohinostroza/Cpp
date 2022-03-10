#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


int* aleatorio(int tama){
  srand(time(NULL));
  int numero;
  int* ptrArray = new int[tama];
  for(int i = 0; i < tama; i++ ){
    numero = rand()%10;
    ptrArray[i] = numero;
  }
  return ptrArray;
}

void imprimirLista(int* ptrLista, int tama){
  for(int i = 0; i < tama; i++){
    cout << ptrLista[i] << " ";
  }
  cout << endl;
}


void cambiarPorDoble(int* ptrLista, int tama, int pos){
  if(pos<tama){
    //pensando que las posiciones se cuentan a partir de 1 y no de 0
    ptrLista[pos-1] *= 2;

  }
}

//Devuelve el nuevo tamaño
int eliminarPosicionLista(int* ptrLista, int tama, int pos){
  for(int i=(pos-1); i < tama ; i++){
    ptrLista[i] = ptrLista[i+1];
  }
  return tama-1;
}

void imprimirListaAlReves(int* ptrLista, int tama){
  for(int i = tama-1; i >= 0; i--){
    cout << ptrLista[i] << " ";
  }
  cout << endl;
}

int* invertirLista(int* ptrLista, int tama){
  int* ptrNuevaLista = new int[tama];
  for(int i = 0, j = tama-1 ; i < tama ; i++, j--){
    ptrNuevaLista[i] = ptrLista[j];
  }
  return ptrNuevaLista;
}

int* copiarLista(int* ptrLista, int tama){
  int* ptrNuevaLista = new int[tama];
  for (int i = 0; i < tama; i++){
    ptrNuevaLista[i]= ptrLista[i];
  }
  return ptrNuevaLista;
}


int* posMinimoLista(int* ptrLista, int tama){
  int posicion = 0;
  int minimo = ptrLista[0];
  for(int i = 1; i < tama ; i++){
    if(ptrLista[i]<minimo){
      minimo = ptrLista[i];
      posicion = i;
    }
  }
  return posicion;
}




int* ordenarLista(int* ptrLista, int tama){
  int* ptrNuevaLista = copiarLista(ptrLista, tama);
  int* ptrOrdenarLista = new int[tama];
  int posicionMin;
  int nuevoTama = tama;
  for(int i = 0; i < tama; i++){
    posicionMin = posMinimoLista(ptrCopiaLista, tama);
    ptrOrdenarLista[i] = ptrCopiaLista[posicionMin];
    nuevoTama= eliminarPosicionLista(ptrCopiaLista, nuevoTama, posicionMin+1);

  }
  return ptrOrdenarLista;
}


bool estaEnLista(int* ptrLista, int tama, int elemento){
  bool esta = false;
  for(int i = 0 ; i < tama && !esta ; i++){
    if(ptrLista[i]== elemento) esta = true;
  }
  return esta;
}
int* listaSinRepetidos(int* prtLista, int tama){
  int* ptrSinRepetidosLista = new int[tama];
  int tamaSin = 0;
  for(int i = 0; i < tama; i++){
    for(int j = 0; j < tamaSin; j++){
      if(!estaEnLista(ptrSinRepetidosLista, tamaSin, ptrLista[i])){
        ptrSinRepetidosLista[j] = ptrLista[i];
        tamaSin++;
      }
    }
  }
return ptrCopiaLista;
}







/*-------------------------------------------------------*/

int main(){

  int* ptrArray1;
  int tama = 5;
  int* ptrArray2;//array invertido
  int* ptrArray3;//

  cout << "El nombre del alumno es: Marco Antonio Alfoncio Hinostroza" << endl;
  ptrArray1= aleatorio(tama);
  imprimirLista(ptrArray1, tama);


  cout << "cambiar por doble a la posicion" << endl;
  cambiarPorDoble(ptrArray1, tama, 3);
  imprimirLista(ptrArray1, tama);


  cout << "eliminarPosicionLista" << endl;
  tama = eliminarPosicionLista(ptrArray1, tama, 2);
  imprimirLista(ptrArray1, tama);


  cout << "imprimir al reves"<< endl;
  imprimirListaAlReves(ptrArray1, tama);


  cout << "Guardar lista al reves" << endl;
  cout << "Lista antigua";
  ptrArray1 = imprimirLista(ptrArray1, tama);
  imprimirLista(ptrArray1, tama);
  cout << "Lista nueva: ";
  ptrArray2 = invertirLista(ptrArray2, tama);



  return 0;


}
/*
6. Guarda en una lista los números al revés de como se encuentran en la lista original. (Ej: [1,2,3,4,5] -> [5,4,3,2,1]
7. Guarda una lista con los números ordenados.
8. Guarda una lista sin los números repetidos.
9. Crea una segunda lista solicitando los números por pantalla. Únela a la primera y elimina los números repetidos.
10. De nuevo con esa segunda lista y la primera, imprime solo los números que aparezcan en las dos listas.*/
