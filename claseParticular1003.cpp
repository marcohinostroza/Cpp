#include <iostream>
#include <vector>
using namespace std;


vector <int> ordenarPorTamano(vector <int> v){
    int nuevoNumero = 0;
    if(v[2] < v[1]){
        nuevoNumero = v[2];
        v[2] = v[1];
        v[1] = nuevoNumero;
    }

    if(v[0] > v[1]){
        nuevoNumero = v[1];
        v[1] = v[0];
        v[0] = nuevoNumero;
    }

    if(v[2] < v[1]){
        nuevoNumero = v[2];
        v[2] = v[1];
        v[1] = nuevoNumero;
    }

    return v;
    }

void imprimirVector(vector <int> v){
    
    for(int i = 0; i < 3; i++){
        cout << v[i] << endl;
    }
}




int main(){
vector <int> numerosMetidos = {23,10,1};
vector <int> copia;
vector <int> copia2;


copia = numerosMetidos;
copia2 = ordenarPorTamano(copia);
imprimirVector(copia2);


    return 0;
}