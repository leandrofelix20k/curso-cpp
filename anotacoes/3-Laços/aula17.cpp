#include <iostream>

using namespace std;

int main(){

    int j=0, k=0;

    // Estrutura básica
    for(int i=0; i<10; i++){
        cout << i << ": Simbora!\n";
    }
    // O comando for recebe 3 parâmetros que irão definir o funcionamento do comando
    // A variável de controle pode ser definida tanto na função for, quanto fora dela

    // Utilizar mais de uma váriavel de controle dentro do laço for
    for(j, k; k<=20 && j<=30; j+=2, k++){
        cout << j << " " << k <<  "\n";
    }

    return 0;
}