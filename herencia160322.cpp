#include <iostream>
using namespace std;

class Persona{
    private:
        string nombre;
        string dni;

    public:
    Persona(string nombre = "Marco", string dni = "181193D") {
        this->nombre= nombre;
        this->dni = dni;
    }

    void setNombre(string nombre){
        this->nombre = nombre;
    }

    void setDni(string dni){
        this->dni=dni;
    }

    string getNombre(){
        return this->nombre=nombre;
    }

    string getDni(){
        return this->dni=dni;
    }

    ~Persona(){
        cout << "¡Adios!" << endl;
    }

    void imprimir(){
        cout << "Me llamo " << this->nombre << " y mi DNI es " << this->dni << "." << endl;
    }

};

class Alumno : public Persona{
    private:
        string clase;
        int curso;
    public:
        Alumno(string clase = "DAW", int curso = 1){
            this->clase = clase;
            this->curso = curso;
        }

        void setClase(string clase){
            this->clase=clase;
        }

        void setCurso(int curso){
            this->curso=curso;
        }

        string getClase(){
            return this->clase;
        }
        
        int getCurso(){
            return this->curso;
        }

        void imprimirAlum(){
            //this->imprimir();
            Persona::imprimir(); // una manera para llamar el imprimir de la clase persona
            //cout << "Me llamo " << this->getNombre() << " y mi DNI es " << this->getDni() << "." << endl;
            cout << "Estoy en el grado " << this->clase << " y mi curso es " << this->curso << "." << endl;
        }


};

int main(){
   Alumno miAlumno("ASD", 4);
   //Persona miPersona;
   //miPersona.imprimir();
   miAlumno.imprimirAlum();
   
    
    return 0;

}