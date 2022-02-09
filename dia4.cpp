#include <iostream>
using namespace std;









/*-------------------------------------------------------------*/


int main(){
  string juego = "Tetris";
  string &ocio = juego;
  int num = 5;
  //string &ocio = juego;
  //string juegos[5];

  string * ptrJuego = &juego;
  int* ptrNum = &num;



  /*cout << juego << endl; //Imprime Tetris
  cout << ocio << endl; // Imprime Tetris
  cout << &ocio << endl; // Imprime la direccion
  cout << &juego << endl; // Imprime la direccion

  ocio = "pokemon";

  cout << ocio << endl;
  cout << juego << endl;

  cout << &juegos << endl;
  cout << &juegos[0]<< endl;
  cout << &juegos[1]<< endl;
  cout << &juegos[2]<< endl;
  cout << &juegos[3]<< endl;
  cout << &juegos[4]<< endl;
*/

cout << "Imprimo el juego: " << juego << endl;
cout << "Imprimo el juego: " << &juego << endl;
cout << "Imprimo el juego: " << &ptrJuego << endl;
cout << "Imprimo el juego: " << ptrJuego << endl;
cout << "Imprimo el juego: " << *ptrJuego << endl;
cout << "Imprimo el juego: " << num << endl;
cout << "Imprimo el juego: " << *ptrNum << endl;
cout << "Imprimo el juego: " << &num << endl;
cout << "Imprimo el juego: " << ptrNum << endl;


  return 0;
}
