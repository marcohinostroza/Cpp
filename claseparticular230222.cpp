#include <iostream>
#include <ctime>

using namespace std;


int* almacenar10(int tama){
    int* array = new int[tama];

    for (int i = 0; i < tama; i++){
        if(i%2 == 0){
            array[i] = 1;
        } else{
            array[i] = 0;
        }
    }
    
    
    return array;
}


void imprimirLoQueHayDentroDeUnPuntero(int* array, int tama){
    for (int i = 0; i < tama; i++){
        cout << array[i] << endl;
    }
}


int* almacenarNumerosRandom(int tama, int x, int y){
    int* array = new int[tama];
    
    for (int i = 0; i < tama; i++){
        array[i] = rand()%x+y;
    }

    return array;    
}

/*int* eliminarNumerosDelRandom(int* array, int tama, int z, int w){
    
    
    return array;
}*/

/*int* eliminarUnaPosicionCojones(int* array, int* tama, int pos){
    int* nueva = new int[*tama-1];
    int contador = 0;
 



    for (int i = 0; i < *tama; i++){
        if(i != pos-1){
            nueva[contador] = array[i];
            contador++;
        }
    }

    *tama--; 
    return nueva;
} */


int* randomAlreves(int* array, int tama){
    int* nueva = new int[tama];  
    int contador = tama-1;

    for(int i = 0; i < tama; i++){
        nueva[contador] = array[i];
        contador--;
    }
    return nueva;
}

 




/*...............................*/

int main (){
    srand(time(NULL));    
    int* punteroQueApuntaAArray = NULL;
    int tama; 
    int x;
    int y; b
    int pos;

    cout << "Cual es el tamano que quieres: ";
    cin >> tama;

    punteroQueApuntaAArray = almacenar10(tama);

    imprimirLoQueHayDentroDeUnPuntero(punteroQueApuntaAArray, tama);

    cout << endl;


    cout << "Cual es el rango maximo: ";
    cin >> x;
    cout << "Cual es el rango minimo: ";
    cin >> y;

    punteroQueApuntaAArray = almacenarNumerosRandom(tama, x, y);

    imprimirLoQueHayDentroDeUnPuntero(punteroQueApuntaAArray, tama);

    punteroQueApuntaAArray = randomAlreves(punteroQueApuntaAArray, tama);
    imprimirLoQueHayDentroDeUnPuntero(punteroQueApuntaAArray, tama);



    /*cout << "Cual es la posicion que quieres eliminar: ";
    cin >> pos;*/

   /* punteroQueApuntaAArray = eliminarUnaPosicionCojones(punteroQueApuntaAArray, &tama, pos);

    cout << tama;*/

    //imprimirLoQueHayDentroDeUnPuntero(punteroQueApuntaAArray, tama);




    return 0;
}