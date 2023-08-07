#include <iostream>
#include <queue>

using namespace std;

// Fila

int main(){

    // Na estrutura Fila, o primeiro elemento que entra é o primeiro que sai
    queue <int> numeros;
    queue <float> notas;
    int nota;

    numeros.push(34);
    numeros.push(76);
    numeros.push(45);
    numeros.push(12);

    // O comando front retorna o primeiro elemento da Fila
    // O comando back retorna o último elemento
    cout << "Tamanho da Fila: " << numeros.size() << "\n";
    cout << "Primeiro número: " << numeros.front() << "\n";
    cout << "Último número: " << numeros.back() << "\n";

    numeros.pop();

    cout << "Tamanho da Fila: " << numeros.size() << "\n";
    cout << "Primeiro número: " << numeros.front() << "\n";
    cout << "Último número: " << numeros.back() << "\n";

    if(notas.empty()){
        cout << "Fila Vázia!" << "\n\n";
    } else{
        cout << "Fila não está vázia!" << "\n";
    }

    cout << "Digite suas notas:" << "\n";
    while(notas.size() < 4){
        cin >> nota;
        notas.push(nota);
    }

    
    return 0;
}