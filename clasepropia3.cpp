#include <iostream>
using namespace std;

void descendente(int x){

  for(int i = x; i >= 0; i++){
    cout <<  << endl;

  }
}

void almacenarNombres(string listaNinos[], int tama){

  for(int i = 0; i < tama; i++){
    cout << "Dime el nombre del nino " << i+1 <<": ";
    cin >> listaNinos[i];
  }
}

void imprimirNombres(string listaNinos[], int tama){

  for(int i = 0; i < tama; i++){
      cout << "El nino " << i+1 << " es: " << listaNinos[i] << endl;
  }
}

void asignarEdad(string listaNinos[], int listaEdad[], int tama){
  for(int i = 0; i < tama; i++){
    cout << "¿ " <<listaNinos[i] << " cuantos anos tiene ?: ";
    cin >> listaEdad[i];
  }
}

void mostrarNE(string listaNinos[], int listaEdad[], int tama){

  for(int i = 0; i < tama; i++){
    cout << listaNinos[i] << " tiene " << listaEdad[i] << " anos " << endl;
  }
}


void mostrarTelf(string telf){
  for(int i = 0; i < 9; i++){
    cout << telf[i] << endl;
  }
}

void pedirNumeros(int listaNumeros[]){
  for(int i = 0; i < 3; i++){
    if(i == 0){
      cout << "el numero " << i+1 << " es: ";
      cin >> listaNumeros[i];
    } else{
    do{
      cout << "el numero " << i+1 << " es: ";
      cin >> listaNumeros[i];
    } while(listaNumeros[i] < listaNumeros[i-1]);

  }
  }
}




/*------------------------------------------------*/

int main(){
  int numero = 0;
  string nombre;
  int num;
  int tama;
  string telf;
  string respuesta;
  int listaNumeros[3];

//1
descendente(9);

//2
int i = 0;

/*do{
cout << "¿Cual es el nombre correcto? ";
cin >> nombre;
i++;
} while((nombre != "Rafa" && nombre != "rafa") && (i <= 2));

if(nombre == "Rafa" || nombre == "rafa"){
cout << "ENHORABUENA" << endl;
} else{
  cout << "DERROTA" << endl;
}
//3
cout << "¿Cuantos ninos hay? ";
cin >> tama;

string listaNinos[tama];
int listaEdad[tama];

almacenarNombres(listaNinos, tama);
imprimirNombres(listaNinos, tama);
asignarEdad(listaNinos, listaEdad, tama);
mostrarNE(listaNinos, listaEdad, tama);*/


/*while(numero < 10){
  cout << "Introduce un numero: ";
  cin >> numero;
}

if(numero >= 10){
  for(int i = numero; i <= numero*2; i+=2){
    cout << i << endl;
  }
}*/

/*cout << "Introduce tu numero telf: ";
cin >> telf;
mostrarTelf(telf);
*/
int contador = 0;

while (respuesta != "Marco"){
cout << "¿A quien ama Vicky?: ";
cin >> respuesta;

if(respuesta == "Marco"){
cout << "A ese chico amo" << endl;
} else if(contador > 2){
  cout << "Calla ctmr" << endl;
} else{
  cout << "Vete a la mrd" << endl;
  contador++;
}
}

pedirNumeros(listaNumeros);
  return 0;
}
