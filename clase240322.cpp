#include <iostream>
using namespace std;

class Yokey{
    private:
        bool belleza;//true=bello y false=fisimo tipo rafa

    public:
        Yokey(bool belleza=false){
            this->belleza;
        }

        //set
        void setBelleza(bool belleza){
            this->belleza=belleza;
        }


        //get
        bool getBelleza(){
            return this->belleza;
        }
};

class Persona{
    private:
        string nombre;
        int edad;
        bool casa;
        Yokey gorra;

        void setCasa(bool x){
            this->casa=x;
        }

    public:
        //constructor
        Persona(string nombre="Pepe", int edad=1, bool casa=true, bool x=false){
            this->nombre=nombre;
            this->edad=edad;
            this->casa=casa;
            this->getGorra().setBelleza(x);

        }

        //set
        void setNombre(string nombre){
            this->nombre=nombre;
        }

        void setEdad(int edad){
            this->edad=edad;
        }

        //metodos
        void entrar(){
            this->setCasa(true);
        }

        void salir(){
            this->setCasa(false);
        }

        void morir(){
            this->setEdad(0);
        }


        //get
        string getNombre(){
            return this->nombre;
        }

        int getEdad(){
            return this->edad;
        }

        bool getCasa(){
            return this->casa;
        }

        Yokey & getGorra(){
            return this->gorra;
        }

        void imprimir(){
            if(this->getGorra().getBelleza()){
            cout << "Mi nombre es " << this->nombre << " y tengo " << this->edad << " anos y mi gorra es bella" << endl;
        } else{
            cout << "Mi nombre es " << this->nombre << " y tengo " << this->edad << " anos y mi gorra es una mierda" << endl;
        
        }
        }

};

class Puerta{
    private:
        bool estadoPuerta;//false=cerrado, true=abierto
        
        //set
        void setestadoPuerta(bool estadoPuerta){
        this->estadoPuerta=estadoPuerta;
    }
    public:
        Puerta(bool estadoPuerta=false){
            this->estadoPuerta=estadoPuerta;
        }
    
    

    //metodo
    void abrir(){
        this->setestadoPuerta(true);
    }

    void cerrar(){
        this->setestadoPuerta(false);
    }


    //get
    bool getestadoPuerta(){
        return this->estadoPuerta;
    }

    //imprimir
    void imprimir(){
        if(this->getestadoPuerta()==false){
        cout << "La puerta esta cerrada" << endl;
    } else{
        cout << "La puerta esta abierta" << endl;
    }
    }
};

class Casa{
    private:
        string direccion;
        float metrosCuadrados;
        bool contenido;//true = lleno , false = vacio
        Puerta puerta;
        Persona persona;
        

        void setContenido(bool contenido){
            this->contenido=contenido;
        }


    public:
        Casa(string direccion="Caballa de TupacAmaru", float metrosCuadrados=25.12, bool contenido=false){
            this->direccion=direccion;
            this->metrosCuadrados=metrosCuadrados;
            this->contenido=contenido;
        }

        //set
        void setDireccion(string direccion){
            this->direccion=direccion;
        }

        void setMetrosCuadrados(float metrosCuadrados){
            this->metrosCuadrados=metrosCuadrados;
        }

        //metodos
        void llenar(){
            this->setContenido(true);
        }

        void vaciar(){
            this->setContenido(false);
        }

        //get
        string getDireccion(){
            return this->direccion;
        }

        float getmetrosCuadrados(){
            return this->metrosCuadrados;
        }

        bool getcontenido(){
            return this->contenido;
        }

        Puerta & getPuerta(){
            return this->puerta;
        }

        Persona & getPersona(){
            return this->persona;
        }

        void tioSale(){
            if(this->getPuerta().getestadoPuerta()==true){
                this->getPersona().salir();
                this->vaciar();
            }
        }

        void tioEntra(){
            if(this->getPuerta().getestadoPuerta()==true){
                this->getPersona().entrar();
                this->llenar();
            }
        }

        void imprimir(){
            if(this->getPersona().getCasa()==true){
                cout << "La persona " << this->getPersona().getNombre() << " esta dentro de la casa y la casa esta llena" << endl;
            } else{
                cout << "La persona " << this->getPersona().getNombre() << " esta en la calle y la casa esta vacia" << endl;
            }
        }
};

class Nino: public Persona{
    private:
        
    public:
        Nino(string nombre="Pepe", int edad=1, bool casa=true, bool x=false) : Persona(nombre, edad, casa, x){

        }

    void imprimir(){
        Persona::imprimir();
        cout << "Soy un subnormal" << endl;
    }

};


//===============================================================================================================


int main(){
    
    Casa uno;
    Nino jaaa("Manolito", 10, true, true);

    uno.getPuerta().abrir();
    uno.getPuerta().imprimir();

    uno.imprimir();
    uno.tioSale();
    uno.imprimir();
    

    uno.getPuerta().abrir();
    uno.tioEntra();
    uno.imprimir();

    jaaa.imprimir();



    return 0;
}