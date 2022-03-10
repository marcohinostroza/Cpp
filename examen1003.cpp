#include <iostream>
using namespace std;

class Persona{
  private:
    string nombre = "Pepe";
    string dni = "74038487L";
    int edad = 18;
  public:
    // cintructor
    Persona(string nombre = "Pepe", string dni = "125412315", int edad = 18){
      setNombre(nombre);
      setDni(dni);
      setEdad(edad);
    }
    // Crea los gets y los sets para poder acceder a los datos.
    void setNombre (string nombre){
      this->nombre = nombre;
    }

    void setDni(string dni){
      this->dni = dni;
    }

    void setEdad(int edad){
      this->edad = edad;
    }

    string getNombre (){
      return this->nombre;
    }

    string getDni(){
      return this->dni;
    }

    int getEdad(){
      return this->edad;
    }

    //imprimir
    void imprimir()

};





int main(){

}
