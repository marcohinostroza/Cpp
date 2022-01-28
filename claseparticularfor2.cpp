#include <iostream>
using namespace std;



/*void frase(int x){


  for (int i=1; i<=x; i++){
    if(i%2==0){
      cout << "me quiere" << endl;
    } else{
      cout << "no me quiere" << endl;
    }
  }

}*/

void parejas(int x){
  int y = 1;

  if (x%2==0){
    for(int i = 2; i <= x; i+=2){
      cout << "Creada pareja de ovejas NUMERO: " << y << endl;
      y++;
    }

  }
}


  void tabla3(int x){

    for(int i= 0; i <= x; i++){
      cout << "3" << "x" << i << " = " << i*3 << endl;
    }




  }



/*------------------------------------------------------*/

int main(){
  int numero;
  int cabras;
  int ovejas;

  /*cout << "Dime un numero: ";
  cin >> numero;

if (numero > 20){
  cout << "no me quiere";
} else{
  frase(numero);
}*/

  cout << "¿Cuantas cabras hay? ";
  cin >> cabras;

  cout << "¿Cuantas ovejas hay? ";
  cin >> ovejas;

  if(ovejas%2==0 && ovejas > cabras){
    cout << "CABRON" << endl;
  }

  if(cabras<200 && cabras>100){
    cout << cabras << endl;
    cout << "HAY " << ovejas + cabras << " ANIMALES." << endl;
}

  parejas(ovejas);
  tabla3(18);

  return 0;
}
