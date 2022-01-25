#include <iostream>
using namespace std;

class Calculadora{
private:
    int paco;
    int kk;

public:
    void setPaco1(int x);
    int getPaco1();
    void setkk(int x);
    int getkk();
    int getSuma();

};


/*------------------------------------------*/

void Calculadora::setPaco1(int x){

    paco = x;
};

int Calculadora::getPaco1(){

    return paco;
};

void Calculadora::setkk(int x){
    kk = x;
};

int Calculadora::getkk(){

  return kk;
};

int Calculadora::getSuma(){

  return paco+kk;
};
/*------------------------------------------*/

int main(){
  Calculadora objeto;
  int dato;


  cout << "Dame algo: ";
  cin >> dato;
  objeto.setkk(dato);

  cout << "Dame otro dato: ";
  cin >> dato;
  objeto.setPaco1(dato);

  cout << "La suma es: " << objeto.getSuma();


  return 0;
}
