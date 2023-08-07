#include <iostream>

using namespace std;

// Estrutura Enum

int main(){

    // Cria uma estrutura que armazena valores inteiros.
    // Por padrão, o valor inicializado da variável é 0
    enum armas{ak47=30, m4=20, eagle=7};

    armas armaSelecionada;

    armaSelecionada = eagle;

    cout << armaSelecionada << "\n";

    return 0;
}