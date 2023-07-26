#include <iostream>

using namespace std;

// Funções Recursivas:

// Uma função recursiva é função que chama a si mesma por um número determinado de vezes
void contadorRecursivo(int num, int i=0);

int main(){

    int numero, cont=0;

    cout << "Digite um número: ";
    cin >>numero;

    contadorRecursivo(numero, cont);

    return 0;
}

void contadorRecursivo(int num, int i){

    if(i < num+1){
        cout << i << "\n";
        return contadorRecursivo(num, ++i); // Pré-incremento
    }

}