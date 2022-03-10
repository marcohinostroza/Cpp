#include <iostream>
#include <vector>
#include <ctime>
using namespace std;


int* meterNumeros(){
    int numero;
    int* array = new int[5];
    
    for(int i = 4; i >= 0; i--){
        cout << "Dime un numero: ";
        cin >> numero;

        array[i] = numero;
    }   

    return array;
}

void imprimir(int* punteroNumeros, int tamano){
    
    for(int i = 0; i < tamano; i++){
        if(i < tamano-1){
            cout << punteroNumeros[i] << ", ";
        } else{
            cout << punteroNumeros[i];
        }
    }
}


int* aleatoriosNumeros(int tamano){
    int* puntero = new int[tamano];
    for(int i = tamano-1; i >= 0; i--){
        puntero[i] = rand()%10+5;
    }
    return puntero;
}





/*.....................................................*/




int main() {
    
    string ajedrez[10][10];
    int numero = 0;
    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            if(numero%2 ==0){
            ajedrez[x][y] = "B";
            }else{
            ajedrez[x][y] = "N";
        }
        numero++;
        }
    numero--;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << ajedrez[i][j];
        }
        cout << endl;
    }

 
 
    srand(time(NULL));
    int tamano;
    int* numerosAleatorios;
    cout << "Dame un tamano: ";
    cin >> tamano;

    numerosAleatorios = aleatoriosNumeros(tamano);
    imprimir(numerosAleatorios, tamano);

    int tama;
    int* punteroNumeros;
    vector<int> numerosHastaDiez;
    int ananido;

    do{
    cout << "dime un numero: ";
    cin >> ananido;
    if(ananido != 10){
        numerosHastaDiez.push_back(ananido); //el push_back sirve para añadir numero a un vector como si fuera unos estantes
    }
    }while(ananido != 10);
    
    int array[] = {12,13,123,14,12,31,41,23};
    


    cout << "[";
    for(int i = 0; i < numerosHastaDiez.size(); i++){
        if(i < numerosHastaDiez.size()-1){//el size sirve para decir el tamaño de algo
        
            cout << numerosHastaDiez[i] << ", ";
        
        }else{
            cout << numerosHastaDiez[i];
            cout << "]";
        }
    }

    punteroNumeros = meterNumeros();
    imprimir(punteroNumeros);

    
    return 0;
}