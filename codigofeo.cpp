#include <iostream>
using namespace std;

int sumaDeNumeros(int* i){
  int suma = 0;
  int nota = 0;
  cout << "Introduce una nota: ";
  cin >> nota;
  for (*i = 0 ; x != -1 ; ()*i)++){
      suma += nota;
      cout << "mete un numero: ";
      cin >> nota;
  }
  return suma;
}




/*----------------------------------------------------------------*/
int main() {

    int nota = 0; //esta variable no tiene un nombre descriptivo n = numero
    int suma=0; // s = suma de numeros para la media
    double media = 0; // m es igual a media, entonces es la suma(s) de todos los numeros
    int i; // contador de cuantas veces repite el numero que aumenta, pero como cuentas el 0 hay una de mas por eso el -1.
    //sumaDeNumeros(nota, suma, i);ç


    cout << "Introduce una nota: ";
    cin >> nota;
    sumaDeNumeros(nota, suma, i);

    /*for(i = 0; nota != -1; i++){
      suma+=nota;
      cout << "Introduce una nota";
      cin >> nota;*/

    media = (suma+1)/(i);
    suma = 0;
    cout << media << endl;
    while (media < 5){
        media = 0;
        nota = 0;
    for (i = 0 ; nota != -1 ; i++){
        cin >> nota;
        suma += nota;
    }
    media = (suma+1)/(i);
    }
    if (media >= 5){
        cout << "apto";
    }
    if (media > 9){
        cout << "super apto";
    }
  return 0;
}
