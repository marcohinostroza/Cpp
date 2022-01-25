#include <iostream>
using namespace std;

int main(){

  float numero;
  int numerod;
  int numeros;

while(numero != 0){
  cout << "Dame un precio: ";
  cin >> numero;
  if(numero >= 5){
    cout << "rafa me la pela" << endl;
  } else{
  cout << "El numero es: " << numero << " euros" << endl;
  }
}
  cout << "Dame un numero: ";
  cin >> numerod;
  cout << "Dame otro numero: ";
  cin >> numeros;
  cout << "La division es: " << numerod/numeros;


  return 0;

}
