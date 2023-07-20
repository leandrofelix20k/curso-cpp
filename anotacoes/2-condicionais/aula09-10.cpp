#include <iostream>

using namespace std;

// Comandos if else

int main(){

    int n1, n2, teste;

    cout << "Digite dois números: \n";
    cin >> n1 >> n2;

    // Estrutura dos comandos:
    if(n1 > n2){
        cout << n1 << " é maior que " << n2 << "\n";
    } else if(n1 < n2){
        cout << n2 << " é maior que " << n1 << "\n";
    } else{
        cout << n1 << " é igual a " << n2 << "\n";
    }

    // Símbolos lógico c++:
    // > < >= <= ==

    cout << "Digite 0 ou 1 e veja a mágia acontecer: ";
    cin >> teste;

    if(teste){
        cout << "True\n";
    } else{
        cout << "False\n";
    }

    // Comando perigoso: goto

    char op;
    float nota1, nota2;
    float media;

    inicio: //Label

    cout << "Digite a nota 1: ";
    cin >> nota1;
    cout << "Digite a nota 2: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    if(media >= 7){
        cout << "Você foi APROVADO!Sua média foi " << media << "! PARABÉNS!\n\n";
    } else if(media >= 3){
        cout << "Você está em RECUPERAÇÃO! Sua média foi " << media << "\n\n";
    } else{
        cout << "Você foi REPROVADO! Média de " << media << "\n\n";
    }

    cout << "Deseja digitar outras notas [S/N]? ";
    cin >> op;

    if(op == 'S' || op == 's'){
        goto inicio;
    } else{
        cout << "\nValeu, valeu!\n";
    }

    return 0;
}