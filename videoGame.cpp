#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

class Personaje{
    private:
        string nombre;
        int nivel;
        int experiencia;
        string arma;
        bool humano;

        int asignarNivel(){
            int x = 0;

            x = this->experiencia/63;

            return x;
        }

    public:
        Personaje(string x = "None", int exp = 1, string arma = "Manos", bool humano = true){
            setNombre(x);
            setExperiencia(exp);
            this->nivel = asignarNivel();
            setArma(arma);
            setHumanos(humano);
        }

        ~Personaje(){
            cout << "Destruimos personaje " << this->nombre << endl;
        }

        //sets

        void setNombre(string k){
            this->nombre = k;
        }

        void setNivel(int nivel){
            this->nivel = nivel;
        }

        void setExperiencia(int experiencia){
            this->experiencia = experiencia;
        }

        void setArma(string arma){
            this->arma = arma;
        }

        void setHumanos(bool humano){
            this->humano = humano;
        }

        //metodos

        void atacar(){
            int x = rand()%100+0;

            if(x < 76){
            cout << "El campeon " << this->nombre << " ataco con " << this->arma << " e hizo " << x << " dano" << endl;
            } else {
                cout << "CRITICOOOO!!!!!!! hizo " << x << " dano" << endl;
            }
        }

        void quitarUnNivel(Personaje x){
            x.setNivel(x.getNivel()-1);
        }

        //gets

        string getNombre(){
            return this->nombre;
        }

        int getNivel(){
            return this->nivel;
        }

        int getExperiencia(){
            return this->experiencia;
        }

        string getArma(){
            return this->arma;
        }
        
        bool getHumano(){
            return this->humano;
        }

        //imprimir


        void imprimir(){
            cout << "Nombre campeon: " << this->nombre << endl << "Nivel: " << this->nivel << " ( " << this->experiencia << " ) " << endl;
            cout << "El arma es: " << this->arma << endl;

            if(this->humano == true){
                cout << "Es humano" << endl;
            } else{
                cout << "No es humano, sino una aberracion" << endl;
            }

        }
};

class Tank : public Personaje{
    private:
        vector <string> lista = {"lanzada de polla", "super vergaso", "patada en los huevos", "agarrada de tetilla"};
    public:

        Tank(string nombre = "kakita", int exp = 1, string arma = "mis huevos", bool humano = true) : Personaje(nombre, exp, arma, humano){
            
        }

        ~Tank(){
            cout << "Destruimos tanque llamado " << getNombre() << endl;
        }

    //imprimir
        void imprimir(){
            Personaje::imprimir();
            cout << this->lista[rand()%4+0] << endl;
        }      

        int atacar(){
           int x;
        
            do{
                x = rand()%100+0;
                if(x > 76){
                    cout << "CRITICOOOO!!!!!!! hizo " << x << " dano" << endl;
                } else{
                    cout << "El campeon " << getNombre() << " ataco con " << getArma() << " e hizo " << x << " dano" << endl;
                }
            } while(x < 76);
        }
};





//----------------------------------------------------------------------------//

int main(){
    srand(time(NULL));
    Personaje user1;
    user1.imprimir();
    
    cout << endl;

    Personaje user2("Jinx", 2000, "un palo de escoba", false);
    user2.imprimir();

    cout << endl;

    Personaje user3("Vi", 3000,"Punos", true);
    user3.imprimir();

    cout << endl;

    for(int i = 0; i < 3; i++){
    
        user2.atacar();
    
    }

    cout << endl;
 
    Tank user4("Illaoi", 6666, "Tentaculos", false);
    user4.imprimir();

    cout << endl;

    user4.atacar();

    cout <<endl;

    cout << user3.getNivel();
    user2.quitarUnNivel(user3);
    cout << user3.getNivel();

    return 0;
}