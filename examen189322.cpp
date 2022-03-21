#include <iostream>
using namespace std;

class Cargador{
    private:
        float longitud;
        string entrada;
        string salida;
        bool transmision;
        float potenciaEntrada;
        float potenciaSalida;
        int puertos;

        int asignarLimite(){
            int x= 1;
            if(this->puertos>=3){
                this->puertos = x;
            } else{
                x = this->puertos;
            }

            return x;
        }
        
    public:

    Cargador(float longitud = 2, string entrada= "C", string salida="A", bool transmision = true, float potenciaEntrada = 4, float potenciaSalida = 1, int puertos = 1){
        this->longitud = longitud;
        this->entrada = entrada;
        this->salida = salida;
        this->transmision = transmision;
        this->potenciaEntrada = potenciaEntrada;
        this->potenciaSalida = potenciaSalida;
        this->puertos = asignarLimite();
    }

    ~Cargador(){
        cout << "Destruimos todo" << endl;
    }

    //set
    void setLongitud(float longitud){
        this->longitud = longitud;
    }
    
    void setEntrada(string entrada){
        this->entrada = entrada;
    }

    void setSalida(string salida){
        this->salida = salida;
    }

    void setTransmision(bool transmision){
        this->transmision = transmision;
    }

    void setPotenciaEntrada(float potenciaEntrada){
        this->potenciaEntrada = potenciaEntrada;
    }    

    void setPotenciaSalida(float potenciaSalida){
        this->potenciaSalida = potenciaSalida;
    }

    void setPuertos(int puertos){
        this->puertos = puertos;
    }

    //metodos

    //gets

    float getLongitud(){
        return this->longitud;
    }
    
    string getEntrada(){
        return this->entrada;
    }

    string getSalida(){
        return this->salida;
    }

    bool getTransmision(){
        return this->transmision;
    }

    float getPotenciaEntrada(){
        return this->potenciaEntrada;
    }    

    float getPotenciaSalida(){
        return this->potenciaSalida;
    }

    int getPuertos(){
        return this->puertos;
    }

    //imprimir
    void imprimir(){
        if(this->transmision == true){
            cout << "El cargador esta formado por un cable que tiene una longitud de " << this->longitud << "cm "<< " con una entrada tipo: " << this->entrada << " y una salida tipo: " << this->salida << " el cual permite transmision de datos" << " ademas tambien esta formado por un adaptador de potencia, que tiene una potencia de entrada de " << this->potenciaEntrada << " voltios y una potencia de salida de " << this->potenciaSalida << " voltios y tambien tiene " << this->puertos << " puertos" << endl;
        } else{
            cout << "El cargador esta formado por un cable que tiene una longitud de " << this->longitud << "cm "<< " con una entrada tipo: " << this->entrada << " y una salida tipo: " << this->salida << " el cual solo carga" << " ademas tambien esta formado por un adaptador de potencia, que tiene una potencia de entrada de " << this->potenciaEntrada << " voltios y una potencia de salida de " << this->potenciaSalida << " voltios y tambien tiene " << this->puertos << " puertos" << endl;
        }
    }

};










//============================================================//


int main(){

//- Escribe tu nombre [0.5]
cout << "El usuario es: Marco Antonio Alfoncio Hinostroza" << endl; 

cout << endl;

Cargador principal;
principal.imprimir();

cout << endl;

Cargador secundario(3, "R", "C", false, 4, 6, 4);
secundario.imprimir();



/*
- Gestionar el número de puertos disponibles del cargador: ¿Puedo añadir otro cable? [2p]
- Gestiona la utilidad de los cables: ¿Alguno de los cables conectados me permite transmitir datos a mi dispositivo si este tiene una entrada de tipo micro usb? [1,5p]
OJO: Lo IDEAL en el último punto es gestionarlo con una lista/vector que contengan objetos, pero se acepta una implementación manual durante el tiempo del examen (siempre y cuando se realice mediante listas en casa). [+0,5]
*/
    return 0;
}

