#include <iostream>
using namespace std;


class Motor{
    private:
        void setEstado(bool estado){
            this->estado = estado;
        }
    public:
        Motor(){
            this->estado = false; //entendemos como apagado
        }

    bool getEstado(){
        return this->estado;
    }
    void setEstado(bool estado){
        this->estado = estado;
    }

    void arrancar(){
        this->setEstado(true);
    }

    void apagar(){
        this->setEstado(false);
    }

    void imprimir(){
        if(this->estado){
            cout << "El motor esta encendido.";
        } else{
            cout << "El motor esta apagado";
            }
        }
    };




int main(){
    Motor miMotor;
    miMotor.imprimir();
    miMotor.arrancar();
    miMotor.imprimir();
    miMotor.apagar();
    miMotor.imprimir();


    return 0;
}