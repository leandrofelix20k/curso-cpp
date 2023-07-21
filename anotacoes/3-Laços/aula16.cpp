#include <iostream>

using namespace std;

// Comando do while

int main(){

    int expressão=1;

    // Estrutura básica do while
    do{
        cout << expressão << "\nDigite 0 a qualquer momento para sair do loop: ";
        cin >> expressão;
    } while(expressão);

    // O comando do while executa o loop pelo menos uma vez

    return 0;
}