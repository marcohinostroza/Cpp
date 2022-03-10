#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

//class poligono
class Poligono{
    private:
        vector <double> lados;

    public:
    //constructor
        Poligono (vector <double> lados = {10,10,10,10}){
            setLados(lados);
        }
        //set
        void setLados(vector <double> lados = {10,10,10,10}){
            this->lados = lados;
        }

        vector <double> getLados(){
            return this->lados;
        }

        void setPosLado(int pos, double lado){
            //Comprobar que pos < numero de Lados.
            if (pos < this->numeroLados()){
                this->lados[pos] = lado;
            }
        }

        double getPosLado(int pos){
            return this->lados[pos];
        }

        int numeroLados(){
            return this->lados.size();
        }

        double perimetro(){
            double suma = 0;
            for(double elemento : this->lados){
                suma += elemento;
            }
            return suma;
        }
        
        double ladoMaximo(){
            int pos = posicionNumMayor();
            return getPosLado(pos);
        }

        int posicionNumMayor(){
            double max = this->lados[0];
            int posicion = 0;
            for(int i = 1; i < this->lados.size(); i++){
                if (lados[i] > max){
                    posicion = i;
                    max = this->lados[i];
            }
            }
            return posicion;
        }

        //imprimir
        void imprimir(){
            for (double elemento : this->lados){
                cout << elemento << endl;
            }
            cout << endl;
        }


    };


int main(){
    vector <double> ladosTriangulo {10, 15, 20};
    Poligono triangulo(ladosTriangulo);
    /*for (double elemento : ladosTriangulo){
    cout << elemento << endl;
    }*/
    
    triangulo.imprimir();
    triangulo.setLados(ladosTriangulo);
    triangulo.imprimir();
    triangulo.setPosLado(0,15);
    triangulo.imprimir();

    return 0;
}