#include <iostream>
#include <vector>
using namespace std;

void mostrarVector (vector<int> vector){
    int i;
    cout << "[";
    for(int i = 0; i < vector.size(); i++){
        cout << vector[i] << ", "; //vector.at(i)
    }
    cout << vector[i] << "]" << endl;
}


vector<int> rellenarVector(){
    vector<int> vector;
    int numero, tama;
    
    cout << "Cuantos numeros quiere introducir? ";
    cin >> tama;

    for (int i = 0; i < tama; i++){
        cout << "Introduce un numero " << endl;
        cin >> numero;
        vector.push_back(numero);
    }
    return vector;
}


void insertar(vector<int> vect, int posicion, int numero){
    vect.insert(vect.begin()+posicion, numero);
    return vect;
}


void insert(vector<int> vect, int numero){
    for(int i = 0; i < posicion; i++){
        vect[i]
    }
}



int main() {
    //sin inicializa
    /*vector<int> miVector1;
    vector<string> miVectorS;*/
    // inicializado un vector tamaño 10 relleno de 2s
    vector<int> miVector2(10, 2);
    //inicializa un vector con los valores introducidos
    /*vector<int> miVector3{1,2,3,4,5};
    miVector3 = {1,2,3,4,5};*/
    vector<int> miVector4{2, 4, 6, 8, 10};

   /*miVectorS = {"la casa verde"};
    cout << miVectorS[0] << endl;

    miVector2 = rellenarVector();
    mostrarVector(miVector2);*/

    miVector2 = insertar(miVector2, 0, 20);
    mostrarVector(miVector2);



    return 0;
}