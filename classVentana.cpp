#include <iostream>
using namespace std;

class Ventana{
    private:
        bool estado;
    private:
        

    public:
        Ventana(){
            this->estado = false; // estan cerradas
        }
    bool getEstado(){
        return this->estado;
    }
    void setEstado(){
        this->estado = estado;
    }

    void abrirVentana(){
        this->setEstado(true);
    }

    void cerrarVentana(){
        this->setEstado(false);
    }

    void imprimir(){
        if(this->estado){
            cout << "La ventana esta abierta.";
        } else{
            cout << "la ventana esta cerrada";
            }
        }
    };

int main(){




    return 0;
}

