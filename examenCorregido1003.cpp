//Marco Antonio Alfoncio Hinostroza

#include <iostream>
#include <vector>
using namespace std;

class Persona{
  private:
    string nombre;
    string dni;
    int edad;
    bool vip;
    
  public:
    // cintructor
    Persona(string nombre = "Pepe", string dni = "1254123L", int edad = 18, vector<int> v = {1,1,1}){
      setNombre(nombre);
      setDni(dni);
      setEdad(edad);
      this->vip = vipONo(v);
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

    void setVip(bool vip){
      this->vip = vip;
    }

    //metodos
    void posiblementeMayor(){
      if(this->edad>17){
        cout << "es mayor" << endl;
      }
      else{
        cout << "no es mayor " << endl;
      }
    }

    bool vipONo(vector <int> v){
      bool x = false;
      int suma = 0;
      int y;
      
      for(int i : v){
        suma+=i;
      }

      if(suma % 11 == 0){
        x = true;
      }else if(suma % 13 == 0){
        cout << "Que numero quieres: ";
        cin >> y;
        suma+=y;
        cout << "Que otro numero quieres: ";
        cin >> y;
        suma+=y;
      }

      if(suma % 11 == 0){
        x = true;
      }     

      return x;
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

    int getVip(){
      return this->vip;
    }

    //imprimir
    void imprimir(){
      cout << "Me llamo " << this->nombre << ", " << "tengo " << this->edad << " años " << "y mi DNI es " << this->dni << " y vip (" << this->vip << ")" << endl;
    }



};





int main(){
  vector <int> v = {9,1,3};

  Persona principal;
  principal.imprimir();
  principal.posiblementeMayor();

  Persona secundaria("Fulanito", "931294H", 15, v);
  secundaria.imprimir();
  secundaria.posiblementeMayor();

 

  return 0;  
}
