#include <iostream>
using namespace std;


bool muchadiferencia(int diferencia, int num1, int num2){
  return (num1 - num2 > diferencia);

};

bool mesirve(int numMax, int numMin, int num){

  return(numMin <= num && num <= numMax);
}

void imprimeBool(bool b){
  if(b == 0){
    cout << "False";
  } else{
    cout << "True";
  }
}

bool mesirve2(int numMax, int numMin, int num){
  return(num < numMin || num > numMax);
}

void imprimeBool2(bool )

int main(){

  string saludo = "Hola!";
  string repetir;
  string contrasena = "aaaa";
  bool esCorrecto = false;
  int edad = 26;
  int edadIntroducida;
  bool diferencia;
  int suma = 0;
  bool ok;
  int numMax;
  int numMin;
  int num;
  /*cout << "Imprimir por pantalla" << endl;
  cout << "Imprimir por pantalla\n";
  cout << "Comprobación de salto de línea";

  cout << saludo << endl;
  cout << saludo << "\n";*/

  /*while(true){
    cout << "Introduce una palabra: ";
    cin >> repetir;
    cout << repetir << endl;
}*/

/*while(!esCorrecto){
  cout << "Introduce una palabra: ";
  cin >> repetir;
  if (repetir == contrasena){
    esCorrecto = true;
  }
}*/

/* WHILE Y DO while
repetir = "";
while(repetir != contrasena){
  cout << "Introduce la contraseña: ";
  cin >> repetir;
}

do{
  cout << "Introduce la contraseña: ";
  cin >> repetir;
} while(repetir != contrasena);
*/


//Python
/*suma = 0
for numero in range(o, 101):
  suma += numero


ietrador = 0
suma = 0
while(numero <= 100):
  suma += numero
  numero += 1*/

//bucle for

/*
suma = 0;
for(int i = 0; i <= 500 ; i += 2){
  suma += i;
}
cout << "La suma de los 100 primeros numeros es: " << suma << endl;

suma = 0;
for(int i = 0; i <= 500; i++){
  if(i%2 == 0){
  suma += i;
  }
}
cout << "la suma de los 100 primeros numeros es: " << suma << endl;

int arr[] = {10, 20, 30, 40};
for (int i: arr){
  cout << i << endl;
}*/



/*cin >> edadIntroducida;

if(edadIntroducida >= edad){
   cout << "Eres un viejo";
 } else{
   cout << "que joven";
 }

diferencia = muchadiferencia(5, edadIntroducida, edad){
  if (diferencia){
    cout << "Hay mucha diferencia de edad";
    }
  }
*/
/* DEBERES
- Crear funcion de valor absoluto(quitar signos).
-Arreglar la funcion muchadiferencia para que funcione con cuualquier edad (mayor o menor que la tuya)
 */
numMax = 30;
numMin = 10;
cout << "Introduce un numero: ";
cin >> num;
ok = mesirve(numMax, numMin, num);
imprimeBool(ok);



  return 0;
}
