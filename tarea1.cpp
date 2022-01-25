#include <iostream>
using namespace std;

bool muchadiferencia(int diferente, int num3){

  return(num3 > diferente);
}

int positivo(int num1){
  return(num1 * -1); //o tambien puede ser por (num1+(num1 * -2))
}



/*--------------------------------------------------------*/

int main(){
  int num1;
  int pasarapositivo;
  int edad = 21;
  int edadrespuesta;
  int num2;
  bool diferentes;
  int num3;
/*HALLAR POSITIVO*/
  cout << "Dame un numero negativo, para pasarlo a positivo: ";
  cin >> num1;
  pasarapositivo = positivo(num1);

  if(num1>0){
    cout << "No mames, el numero ya es positivo" << endl;
  }  else{
    cout << "El nuevo numero positivo es: " << pasarapositivo << endl;
  }

/*...............................................................*/
/*Arreglar funcion*/

  cout << "Dime tu edad: ";
  cin >> num2;
  cout << "tu edad es: " << num2 << endl;

if(num2 >= edad){
    cout << "Eres un abuelo" << endl;

  }  else {
    cout << "Eres un chaval" << endl;
  }

  num3 = positivo(num2 - edad);
if(num2 - edad>0){
  cout << "veremos si hay o no diferencia" << endl;
} else{
  cout << "Veamos que pasa:" << endl;
}

diferentes = muchadiferencia(6, num3);
if(diferentes){
  cout << "hay mucha diferencia de edad";
} else{
  cout << "Lo bueno es que no hay tanta diferencia";
}


  return 0;
}
