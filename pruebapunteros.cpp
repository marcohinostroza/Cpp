#include <iostream>
using namespace std;


void* bajarUno(int normal){
    normal--;
}



/*---------------------------------------*/


int main(){

    int normal = 5;

    cout << bajarUno(normal);

    return 0;
}