#include <iostream>
#include <stack>
using namespace std;

// Pilha / Stack

int main(){

    /*
    A pilha é semelhante a um vetor, porém ela tem um controle específico.
    Os primeiro elementos inseridos ficam por último dentro da pilha.
    */
    stack <int> numeros;
    stack <float> notas;
    int nota;

    // Adicionar elementos na pilha:
    numeros.push(34);
    numeros.push(76);
    numeros.push(45);
    numeros.push(12);

    // O comando size retorna a quantidade e elementos dentro da pilha
    // O comando top retorna o último elemento da fila
    cout << "Tamanho da pilha: " << numeros.size() << "\n";
    cout << "Último número: " << numeros.top() << "\n";

    // O comando pop remove o último elemento adicionado na pilha:
    numeros.pop();

    cout << "Tamanho da pilha: " << numeros.size() << "\n";
    cout << "Último número: " << numeros.top() << "\n";

    // Verificar se uma pilha está vázia:
    // if(notas.size() == 0)
    if(notas.empty()){
        cout << "Pilha Vázia!" << "\n\n";
    } else{
        cout << "Pilha não está vázia!" << "\n";
    }

    cout << "Digite suas notas:" << "\n";
    while(notas.size() < 4){
        cin >> nota;
        notas.push(nota); // Adiciona um elemento na pilha
    }


    return 0;
}