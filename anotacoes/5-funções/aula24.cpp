#include <iostream>

using namespace std;

// Omissão de argumentos e argumentos padrão

// Para omitir um argumento, basta atribuir um valor para ele na declaração da função
void cumprimentoFormal(string cump="Olá!");

int main(){

    string cumprimento = "Alora!";

    cumprimentoFormal(cumprimento);
    // Omissão do argumento:
    cumprimentoFormal();

    return 0;
}

void cumprimentoFormal(string cump){
    cout << cump << "\n";
}
