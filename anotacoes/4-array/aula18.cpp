#include <iostream>

using namespace std;

// Array / Vetor

int main(){

    // Declaração:
    int vet[5];
    int vet2[6];

    // Declaração com os valores definidos:
    int vetDef[3] = {1, 2, 3};

    for(int i=0; i<3; i++){
        cout << vetDef[i] << "\n";
    }

    // Atribuindo valores:
    vet[0] = 10;

    // Lendo valores:
    cout << "\nDigite 4 valores:\n";
    for(int i=1; i<5; i++){
        cin >> vet[i];
    }

    // Imprimindo os valores:
    cout << "\nValores digitados mais o valor inical 10:\n";
    for(int i=0; i<5; i++){
        cout << vet[i] << "\n";
    }

    // Utilizando o sizeof para ler os valores:
    cout << "\nDigite " << sizeof(vet2)/4 << " valor(es):\n";
    for(int i=0; i<sizeof(vet2)/4; i++){
        cin >> vet[i];
    }
    // O sizeof retorna o tamanho do tipo. No caso, o tipo int possui 4 bytes.

    return 0;
}