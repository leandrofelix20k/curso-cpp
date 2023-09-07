#include <iostream>

using namespace std;

// Ponteiros

void soma(int *x, int y);
void adicionaValores(int *vet);

int main(){

    cout << "\nAula 36:\n";

    // O ponteiro armazena o endereço de uma variável
    int num = 57;
    int *p;

    // O ponteiro deve ser do mesmo tipo da variável que ele aponta
    p = &num;

    // Com o ponteiro, é possível alterar o valor da variável fora do escopo da função

    cout << "\nEndereço: " << p << endl;
    cout << "Valor: " << *p << endl;

    *p = *p + 5;

    cout << "Acrescentado um valor: " << *p << endl;

    cout << "\nAula 37:\n";

    // Atribuindo o endereço do primeiro índice ao ponteiro
    int vet[5];
    p = vet;
    cout << "\nEndereço da primeira posição do vetor: " << p << endl;

    *p = 10;
    cout << "\nValor do primeiro índice vetor :" << vet[0] << endl;

    // Indo para o próximo endereço do vetor
    *p++;
    cout << "\nEndereço da segunda posição do vetor: " << p << endl;

    *p = 20;
    cout << "\nValor do segundo índice vetor :" << vet[1] << endl;

    cout << "\nAula 38:\n";

    // Associando ponteiros com funções

    int x=5;
    int novoVet[5];

    soma(&x, 7);

    cout << "Soma: " << x << endl;

    // Passando uma vetor para uma função
    // Quando é um vetor, não é necessário especificar o endereço
    adicionaValores(novoVet);

    for(int i=0; i <5; i++){
        cout << novoVet[i] << endl;
    }

    return 0;
}

void soma(int *x, int y){
    *x += y;
}

void adicionaValores(int *vet){
    for(int i=0; i < 5; i++){
        vet[i] = i;
    }
}