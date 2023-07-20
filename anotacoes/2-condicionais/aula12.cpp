#include <iostream>

using namespace std;

// Operador ternário
int main(){

    // O op ternário é um if simplificado

    int incrementoTernario=0;
    float nota1, nota2;
    float media;
    bool op;

    cout << "Digite a nota 1: ";
    cin >> nota1;
    cout << "Digite a nota 2: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    // Operação ternária:
    //(media >= 6) ? op=true : op=false;
    op = (media) >= 6 ? true : false;
    (media) >= 6 ? incrementoTernario++ : incrementoTernario;

    cout << incrementoTernario << "\n";

    if(op){
        cout << "Aprovado\n";
    } else{
        cout << "Reprovado!\n";
    }

    return 0;
}