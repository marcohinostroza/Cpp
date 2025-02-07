//Marco Antonio Alfoncio Hinostroza

#include <iostream>
#include <vector>
using namespace std;

class Persona{
  private:
    string nombre;
    string dni;
    int edad;

    
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

    //metodos
    void posiblementeMayor(){
      if(this->edad>=18){
        cout << "es mayor" << endl;
      }
      else{
        cout << "no es mayor " << endl;
      }
    }


    //creando gets
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

    /*void imprimirVector(vector<double> v){
      for(int i= 0; i < v.size(); i++){
        cout << v[i] << endl;
      }
    }*/


};





int main(){

  Persona principal;
  principal.imprimir();
  principal.posiblementeMayor();

  Persona secundaria("Fulanito", "931294H", 15);
  secundaria.imprimir();
  secundaria.posiblementeMayor();



  return 0;  
}
