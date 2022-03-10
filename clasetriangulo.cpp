#include <iostream>
using namespace std;

class Triangulo{
    private:
        string color = "Amarillo";
        double altura = 5;
        double base = 6;
        double lados = 15;

    public:

        Triangulo (double altura = 1, double base = 1, double lados = 1){
            setAltura(altura);
            setBase(base);
            setLados(lados);
        }

        void setAltura (double altura){
            if (altura > 0) this->altura = altura;
            else this->altura = 1;
        }

        void setBase (double base){
            if (base > 0) this->base = base;
            else this->base = 1;
        }

        void setLados (double lados){
            if(lados > 0) this->lados = lados;
            else this->lados = 1;
        }

        void setColor(string color){
            this->color = color;
        }

        string getColor(){
            return this->color;
        }

        double getAltura(){
            return this->altura;
        }

        double getBase(){
            return this->base;
        }

        double getLados(){
            return this->lados;
        }

        double areaTriangulo(){
            return (this->base*this->altura)/2;
        }

        double perimetroTriangulo(){
            return ((this->base)+(this->lados*2));
        }

        void imprimir(){
            cout << "El lado es: " << this->lados << endl << "la base es : " << this->base << endl << "La altura es: " << this->altura << endl << "el color es: " << this->color << endl;
        }
 
};







int main(){
    
    
    Triangulo piramide(10, 5, 5);
    double area;
    double perimetro;

    piramide.imprimir();
    piramide.setAltura(6);
    piramide.setBase(7);
    piramide.setLados(9);

    area = piramide.areaTriangulo();
    cout << "el area de la piramide es: " << area << endl;

    perimetro = piramide.perimetroTriangulo();
    cout << "El perimetro de la piramide es: " << perimetro << endl;
    

 
    return 0;

}