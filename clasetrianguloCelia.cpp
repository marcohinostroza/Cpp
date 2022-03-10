#include <iostream>
#include <math.h>
using namespace std;

class Triangulo{
    private:
        double ladoA;
        double ladoB;
        double ladoC;
        string color;
        bool comprobarLongitudLados(double a, double b, double c){
            double max = a;
            double perimetro = a+b+c;

            if (max<b) max = b;
            if (max<c) max = c;

            return(perimetro-max > max);
        }
    
    public:
        Triangulo(double ladoA = 2, double ladoB = 2, double ladoC = 2, string color = "azul"){
            if (comprobarLongitudLados(lado, this->ladoB, this->ladoC)){
                if(lado > 0) this->ladoA = ladoA;
                if(lado > 0) this->ladoB = ladoB;
                if(lado > 0) this->ladoC = ladoC;
            } else{
                this->ladoA = 2;
                this->ladoB = 2;
                this->ladoC = 2;
            }
            this->color = color;
        }

        void setLadoA(double lado){
            if (comprobarLothis->ladoA = ladongitudLados(lado, this->ladoB, this->ladoC)){
                if(lado > 0) this->ladoA = lado;
            }
        }

        void setLadoB(double lado){
            if (comprobarLongitudLados(lado, this->ladoB, this->ladoC)){
                if(lado > 0) this->ladoB = lado;
            }
        }

        void setLadoC(double lado){
            if (comprobarLongitudLados(lado, this->ladoB, this->ladoC)){
                if(lado > 0) this->ladoC = lado;
            }
        } 

        double getLadoA(){
            return this->ladoA;
        }

         double getLadoB(){
            return this->ladoB;
        }

         double getLadoC(){
            return this->ladoC;
        }

        void setLados(double ladoA, double ladoB, double ladoC){
            if(comprobarLongitudLados(ladoA, ladoB, ladoC)){
                if(ladoA > 0) this->ladoA = ladoA;
                if(ladoB > 0) this->ladoB = ladoB; 
                if(ladoC > 0) this->ladoC = ladoC;
            }
        }

        double perimetro(){
            return this->ladoA + this->ladoB + this->ladoC;
        }

        double area(){
            double sPer = this->perimetro()/2;
            area = sqrt(sPer*(sPer-this->ladoA)*(sPer-this->ladoB)*(sPer-this->ladoC));
        }

        void imprimir(){
            cout << "los lados del triangulo miden: " << this-ladoA << " " << this->lado << " " << this->ladoC;
            cout << "Su perimetro es: " << this->perimetro() << "m" << endl;
            cout << ""
        }

};





int main(){
    Triangulo t(2,2,40);
    t.setLadoA
    t.setLadoB
    t.setLadoC

    
    
    return 0;
}