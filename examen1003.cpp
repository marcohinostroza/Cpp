#include <iostream>
using namespace std;

class Persona{
  private:
    string nombre = "Pepe";
    string dni = "74038487L";
    int edad = 18;
  public:
    // cintructor
    Persona(string nombre = "Pepe", string dni = "1254123L", int edad = 18){
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

    void posiblementeMayor(){
      if(this->edad>17){
        cout << "es mayor" << endl;
      }
      else{
        cout << "no es mayor " << endl;
      }
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
    void imprimir(){
      cout << "Me llamo " << this->nombre << ", " << "tengo " << this->edad << " años " << "y mi DNI es " << this->dni << endl;
    }

};





int main(){


Persona principal;
principal.imprimir();
principal.posiblementeMayor();

Persona secundaria("Fulanito", "931294H", 15);
secundaria.imprimir();
secundaria.posiblementeMayor();






}
