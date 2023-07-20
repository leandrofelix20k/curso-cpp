#include <iostream>

using namespace std;

// Comando switch
// O comando swicth serve apenas para fazer testes de igualdade
int main(){

    char temperatura;

    inicio: //Label

    cout << "Digite a letra inicial da temperatura[C, F, K]: ";
    cin >> temperatura;

    // Estrutura
    switch(temperatura){
        case 'C':
            cout << "Celsius!\n";
            break;
        case 'F':
            cout << "Farenheit!\n";
            break;
        case 'K':
            cout << "Kelvin!\n";
            break;
        default:
         cout << "Letra inválida! Digite novamente";
         goto inicio;
    }

    return 0;
}