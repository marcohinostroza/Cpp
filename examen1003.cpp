//Marco Antonio Alfoncio Hinostroza

#include <iostream>
#include <vector>
#include <ctime>
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

    //metodos
    void posiblementeMayor(){
      if(this->edad>17){
        cout << "es mayor" << endl;
      }
      else{
        cout << "no es mayor " << endl;
      }
    }

    /*vector <int> suerte(){
      vector <int> v;
      for(int i = 0; i < 3; i++ ){
        i = rand()%10+1;
        v.push_back(i);
        cout << v.push_back(i) << endl;
    }
    return v;
  }*/

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
/*srand(time(NULL));
vector <int> main(3,rand()%10+1)
vector <int> suerte;*/

Persona principal;
principal.imprimir();
principal.posiblementeMayor();

Persona secundaria("Fulanito", "931294H", 15);
secundaria.imprimir();
secundaria.posiblementeMayor();

/*suerte = main;
suerte = suerte();
imprimirVector(suerte);
*/



}
