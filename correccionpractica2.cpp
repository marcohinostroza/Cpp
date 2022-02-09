#include <iostream>
using namespace std;

 /*void solicitarContrasena(string clave){
   string palabra;
   int i;


   /*cout << "Quiero comer crustaceos...";
   cin >> palabra;
   while(clave != palabra){
     cout << "¿Eres tonto?, quiero comer crustaceos...";
     cin >> palabra;
   }
 }*/

  /* do{
     cout << "Quiero comer crustaceos...";
     cin >> palabra;
   } while (clave != palabra);*/


   //Cuando el pulpo se va cabreando poco a posicion
  /* cout << "Quiero comer crustaceos...";
   cin >> palabra;
   for(i = 0; clave != palabra && i < 3; i++){
     cout << "No me puedes dar mejor crustaceos...";
     cin >> palabra;
   }
   for( ; clave != palabra && i < 10; i++){
     cout << "Es que eres tonto? Que lo que quiero son crustaceos!!!";
     cin >> palabra;
   }
   if(clave != palabra) {
   cout << "*El pulpo se cabreo y se fue*";
 }
*/
/*int aBase8(int numero){
  if(numero > 65){
  cout << "No estamos preparados para trabajar la recurrencia todavía...";
} else{
  unidades = numero%8;
  decenas = numero/8;
  numero = decenas*10 + unidades;
}
}*/
/*
void imprimirLista (string lista[], int tama){
  for(int i = 0; i < tama; i++){ // = for i in lista
    cout << lista[i] << endl;
  }
}
void imprimirLista (char lista[], int tama){
  for(int i = 0; i < tama; i++){ // = for i in lista
    cout << lista[i] << endl;
  }
}

void pasarLista (string lista[], int tama, char listaFaltas[]){
  string respuesta;

  for(int i = 0; i < tama; i++){
    cout << "Está " << lista[i] << " en clase?" << endl;
    cin >> respuesta;
    if(respuesta == "si") listaFaltas[i] = 'V';
    else listaFaltas[i] = 'F';
  }
}
*/
/*void reorganizarComida (int pecerasComida[], int tama){
  int sobran = 0;

  for(int i = 0; i < tama;i++){
    pecerasComida[ì] += sobran;
    sobran = pecerasComida[i]%3;
    pecerasComida[i] -= sobran;
  }
}*/

void reorganizar (int pecerasComida[], int tama){
  for(int i = 0; i < tama; i++){
    if(pecerasComida[i]%3 ==0){
       cout << "en la posicion " << i << " no hay sobrantes" << endl;
    } else{
      cout << pecerasComida[i]%3 << endl;
    }
  }
}

void posicion(int pecerasComida[], int tama){
  int p = 0;
  for(int i=0; i < tama; i+=){
    cout << pecerasComida[i]%3 << endl;
}
}
/*........................................................................*/


int main(){
  string contrasena = "crustaceos";
  string listaPulpos[] = {"A", "B", "C", "D", "E"};
  int tamaLista = 5;
  char listaFaltas[tamaLista];
  int crustaceos[] = {23, 74, 92, 64, 27, 13};
  int tama = 6;




  cout << "Marco Antonio" << endl;


  /*solicitarContrasena(contrasena);*/
  /*Pasar lista*/
/*  imprimirLista(listaPulpos, tamaLista);
  pasarLista(listaPulpos, tamaLista, listaFaltas);
  imprimirLista(listaFaltas, tamaLista);


  /*leer numeros*/

  reorganizar(crustaceos, tama);
  sumarSobras(crustaceos, tama);

  return 0;
}
