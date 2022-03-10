#include <iostream>
#include <vector>
using namespace std;


void imprimirVector(vector<double> v){
  for(int i= 0; i < v.size(); i++){
    cout << v[i] << endl;
    //cout << v.at(i) << endl; PARA ASIGNAR VALORES SE USA EL AT(I)
}
}


vector<double> rellenar1a10(){
  vector<double> v;
  for(int i = 0; i < 10; i++){
    v.push_back(i+1);
    cout << "En el i " << i << " el tamaño es: " << v.size() << endl;
    cout << "En el i " << i << " la capacidad es: " << v.capacity() << endl;
  }
  return v;
}



int main(){
  vector<double> vectorDouble(10, 0); // Crea un vector de tamaño 10 relleno de 0s
  vector<double> vectorCopia;



  vectorCopia= vectorDouble;
  vectorCopia.at(4) = 35;
  /*for(int i= 0; i < vectorCopia.size(); i++){
    cout << vectorCopia[i] << endl;
  }
*/
//cout << vectorCopia.empty();



/*cout << "Imprimir vectorDouble" << endl;
imprimirVector(vectorDouble);
cout << "Imprimir vectorCopia" << endl;
imprimirVector(vectorCopia);
*/
cout << "Imprimir primer elemento" << endl;
rellenar1a10(vectorCopia);

vectorCopia = rellenar1a10();
imprimirVector(vectorCopia);

//cout << vectorCopia.empty();

    return 0;
}
