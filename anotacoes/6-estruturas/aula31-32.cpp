#include <iostream>
#include <list>

using namespace std;

// Listas

int main(){

    list<int> numeros1, numeros2;
    list<int>::iterator it;

    // Comando push_front e push_back:
    cout << "Adicionando numeros1 na lista:\n";
    for(int i=0; i<5; i++){
        numeros1.push_front(i); // Adiciona elemento no ínicio da lista
    }

    for(int i=0; i<5; i++){
        numeros1.push_back(i); // Adiciona elemento no final da lista
    }
    for(int i=10; i<20; i++){
        numeros2.push_front(i);
    }

    // Adicionando elementos em qualquer lugar da lista:
    it = numeros1.begin();
    advance(it, 5);
    numeros1.insert(it, 999);

    // Removendos elementos de um lugar qualquer:
    it = numeros1.begin();
    advance(it, 0);
    numeros1.erase(it);

    // Comandos sort e reverse
    numeros1.sort(); // Põe os elementos em ordem crescente
    numeros1.reverse(); // Põe os elementos em ordem decrescente

    // numeros1.clear(); // Remove todos os elementos da lista

    // Juntar duas listas:
    numeros1.merge(numeros2);

    // Imprimindo Valores:
    for(int i=0; numeros1.size(); i++){
        cout << numeros1.front() << "\n";
        numeros1.pop_front(); // Remove o primeiro elemento da lista
        //numeros1.pop_back(); // Remove o último elemento da lista

    }


    return 0;
}