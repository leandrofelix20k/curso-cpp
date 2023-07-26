#include <iostream>

using namespace std;

// Argumentos argc e argv na função main

// O primeiro parêmtro recebe a quantidade de argumentos.
// O segundo recebe os argumentos passados ao executar o código
int main(int argc, char *argv[]){

    // Por padrão, o primeiro argumento sempre será o nome do programa
    cout << argv[0] << "\n";
    // O demais argumentos serão passados na execução do programa
    cout << argv[1] << "\n";
    cout << argv[2] << "\n";

    if(argc == 4){
        cout << argv[3] << "\n";
    }

    return 0;
}

// Para executar:
// Compilar: g++ -o main aula-21.cpp
// Executar: ./main argumento1 argumento2 Alora