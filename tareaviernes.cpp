#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


void pedirNumeros(int listaNumeros[]){
  for(int i = 0; i < 10; i++){
      cout << "el numero " << i+1 << " es: ";
      cin >> listaNumeros[i];

      while(listaNumeros[i] < 5){
      cout << "el numero " << i+1 << " es: ";
      cin >> listaNumeros[i];
  }
}
}

void imprimirNumeros(int listaNumeros[]){
  for(int i = 0; i < 10; i++){
    cout << "El numero " << i+1 << " es: " << listaNumeros[i] << endl;
  }
}

void posicion(int listaNumeros[], int puesto){
  if(puesto <= 10 && puesto > 0) {
  cout << "El puesto numero " << puesto << " es " << listaNumeros[puesto - 1] << endl;
} else{
  cout << "Ey tranquila, esa posicion no existe. ADIOS.";
}
}

void probar(int listaNumeros[], int puesto){
  while(listaNumeros[puesto - 1] - 5 > 5){
    cout << "Introduce una posicion: ";
    cin >> puesto;
    cout << "El numero es " << listaNumeros[puesto -1 ] << " pero restandole 5 es: " << (listaNumeros[puesto - 1]) - 5 << endl;
}
  if((listaNumeros[puesto - 1]) - (5) < 5){
    cout << "El numero de la posicion " << puesto << " se convierte automaticamente en un 0" << endl;
  }
}


  void probarSuerte(int listaCerosUnos[], int num){
    int contador = 0;
    string secreta;
    while(listaCerosUnos[num]<1 && contador < 5){
      cout << "Introduce algo: ";
      cin >> secreta;
      cout << "La posicion es: " << num << " y el numero es: " << listaCerosUnos[num] << endl;
      contador++;
    }
      if(listaCerosUnos[num]==1){
        cout << "FELICIDADES";
      } else{
        cout << "mala suerte xd";
      }
    }



    void pedirNumerosA(int listaNumeros[]){
      srand (time(NULL));
      int x = rand()% 100 + 5;

      for(int i = 0; x < 10; i++){
          cout << "el numero " << i+1 << " es: ";
          cin >> listaNumeros[x];

          while(listaNumeros[x] < 5){
          cout << "el numero " << i+1 << " es: ";
          cin >> listaNumeros[x];
      }
    }
    }

    void imprimirNumerosA(int listaNumeros[]){

      for(int i = 0; x < 10; i++){
        cout << "El numero " << i+1 << " es: " << listaNumeros[x] << endl;
      }
    }




/*--------------------------------------------------------------------*/


int main(){

  string infiltracion;
  int listanumeros[10];
  int listaCerosUnos[10] = {0,0,0,0,0,0,0,0,0,1};
  int num;
  int aleatorios;




  cout << "Nombre de usuario: Marco Antonio Alfoncio Hinostroza" << endl;

  cout << "Se ha detectado una infiltracion" << endl;
  cout << "Identifiquese: ";
  cin >> infiltracion;
  cout << "Hola " << infiltracion << " ¿Como esta?" << " espero que se encuentre mejor." << endl;

  pedirNumeros(listanumeros);
  cout << "-------------------------------------------------" << endl;
  imprimirNumeros(listanumeros);
  cout << "-------------------------------------------------" << endl;
  imprimirNumeros(listaCerosUnos);
  cout << "-------------------------------------------------" << endl;
  int puesto;
  cout << "Dame una posicion(ejemplo: 2): ";
  cin >> puesto;
  cout << listanumeros[puesto-1] - 5 << endl;
  posicion(listanumeros, puesto);
  cout << "-------------------------------------------------" << endl;
  probar(listanumeros, puesto);

  cout << "-------------------------------------------------" << endl;
  srand (time(NULL));
  num = rand()% 10 + 1;
  probarSuerte(listaCerosUnos, num);

/*lo primero que hice fue incluir la librería:
#include<stdlib.h>

y tambien necesita esta libreria para usar la función time()
#include<time.h>

Luego activar los numeros aleatorios con esto:
srand(time(NULL));

Luego guardar el número aleatorio en alguna parte:
num = rand();*/

/*LOS NUMEROS ALEATORIOS EL EJERCICIO 4 NO PUDE HALLAR LA MANERA AUNQUE INTENTE DE VARIAS FORMAS
LA FUNCION ESTA COMENTADA
pedirNumerosA(listanumeros);
cout << "-----------------------------------------------------------------";
imprimirNumerosA(listanumeros);*/


  return 0;
}
