#include <iostream>
using namespace std;


class Rectangulo {
private:
    double base = 5;
    double altura = 1;
public:

    //Contructor
    Rectangulo(double base = 1, double altura = 1) {
        //this->base = base;
        //this->altura = altura;
        setBase(base);
        setAltura(altura);
    }
    //los set
    void setBase (double base) {
        if (base > 0) this->base = base;
        else this->base = 1;
    }
    void setAltura (double altura) {
        (altura > 0) ? this->altura = altura : this->altura = 1;
    }
    //los get
    double getBase() {
        return this->base;
    }
    double getAltura() {
        return this->altura;
    }

    //metodos
    double area(){
        return this->base*this->altura;
    }
     
    double perimetro(){
        return ((this->altura*2) + (this->base*2));
    }


    //imprimir
    void imprimir(){
        cout << "La base de folio es " << this->base << " y la altura es " << this->altura << endl;
    }
};







int main() {




Rectangulo folio(-5, 3);
Rectangulo tablero;
Rectangulo manta(4);
double areaFolio;
double perimetroFolio;


folio.imprimir();
folio.setBase(2);
folio.setAltura(2);
folio.imprimir();

areaFolio = folio.area();
cout << "El area del folio es: " << areaFolio << endl;

perimetroFolio = folio.perimetro();
cout << "El perimetro del folio es: " << perimetroFolio << endl;

cout << "Tableros: " << endl;
tablero.imprimir();
cout << "Manta: " << endl;
manta.imprimir();

return 0;
}