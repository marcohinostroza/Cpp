#include <iostream>
using namespace std;


int suma10(int num){
  num += 10;

  return num;
}


int suma10(int* ptrNum){
  *ptrNum += 10;
  return *ptrNum;
}


void colorines(string* colores, int numero){
  for(int i = 0; i < numero; i++){
    cout << "Introduce un color: " << endl;
    //cin >> colores[i];
    getline(cin, colores[i]);
  } 
}

void imprimir(string* colores, int numero){
  for(int i = 0; i < numero; i++){
    cout << colores[i] << " " << endl;
  }
}



/*-------------------------------------------------------------*/


int main(){
//Tercera parte
string* colores = NULL;
string line;
string entrada;
int numero;



//cout << "Valor de *colores = NULL" << colores << endl;
cout << "Numero de colores: ";
//cin >> numero;
getline(cin, line);
numero = stoi(line);

colores = new string[numero];

colorines(colores, numero);
imprimir(colores, numero);


//cout << "Valor de colores = new string[]: " << colores << endl;

/*for(int i = 0; i < numero; i++){
  cout << "dime un color: " << endl;
  //cin >> colores[i];
  getline(cin, colores[i]);

}*/

/*for(int i = 0; i < numero; i++){
  cout << colores[i] << " " << endl;
}
*/





delete[] colores;
colores = NULL;










//segunda parte
/*int numero = 10;
int resultado;



cout << "Imprimir numero: " << numero << endl;
resultado = suma10(numero);
cout << "Imprimir numero despues de sumar10(int): " << numero << endl;
cout << "Imprimir resultado despues de sumar 10(int): " << resultado << endl;

cout << "Imprimir numero: " << numero << endl;
resultado = suma10(&numero);
cout << "Imprimir numero despues de sumar10(*int): " << numero << endl;
cout << "Imprimir resultado despues de sumar 10(*int): " << resultado << endl;

*/

/// primera parte
  /*string juego = "Tetris";
  string &ocio = juego;
  int num = 5;
  //string &ocio = juego;
  //string juegos[5];

  string * ptrJuego = &juego;
  int* ptrNum = &num;*/


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

/*cout << "Imprimo el juego: " << juego << endl;
cout << "Imprimo el juego: " << &juego << endl;
cout << "Imprimo el juego: " << &ptrJuego << endl;
cout << "Imprimo el juego: " << ptrJuego << endl;
cout << "Imprimo el juego: " << *ptrJuego << endl;
cout << "Imprimo el juego: " << num << endl;
cout << "Imprimo el juego: " << *ptrNum << endl;
cout << "Imprimo el juego: " << &num << endl;
cout << "Imprimo el juego: " << ptrNum << endl;
*/

  return 0;
}
