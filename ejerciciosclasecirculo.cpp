#include <iostream>
using namespace std;


class Circulo {
private:
    double radio = 7;
    double pi = 3.141592;

public:
    Circulo(double raido = 1){

    }

    void setRadio(double radio){
        if (radio > 0) this->radio = radio;
        else this->radio = 1;
    }

    double getRadio(){
        return this->radio;
    }

    double areaC(){
        return ((this->pi) * (this->radio*this->radio));
    }

    double perimetroC(){
        return ((this->pi*2)*(this->radio));
    }

    void imprimir(){
        cout << "La base de folio es " << this->radio << " y la altura es " << this->pi << endl;
    }
};









int main() {

Circulo esfera();
double areaEsfera;
double perimetroEsfera;

esfera.imprimir();
esfera.setRadio(2);
esfera.imprimir();



areaEsfera = esfera.areaC();
cout << "el area de la esfera es: " << areaEsfera << endl;

perimetroEsfera = esfera.perimetroC();
cout << "el perimetro de la esfera es: " << perimetroEsfera << endl;



    return 0;
}



