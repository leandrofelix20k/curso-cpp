#include <iostream>

using namespace std;

//Variáveis Globais e Operadores Matemáticos

//Variável com escopo global:
int global1, global2;

void variáveisGlobais(){
    global1 = 40;
    global2 = 32;
}

int main(){

    int somaGlobal;

    //Variáveis com escopo local:
    int local1, local2; //Só podem ser acessadas dentro da função main

    variáveisGlobais();
    somaGlobal = global1 + global2;

    cout << "Soma: " << somaGlobal << "\n";

    //Operadores Matemáticos:
    int n1, n2;
    int soma, subtracao, multiplicacao, divisao, restoDivisao;

    cout << "Digite dois valores inteiros: \n";
    cin >> n1 >> n2;

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;
    restoDivisao = n1 % n2;

    cout << "Soma: " << soma << "\nSubtracao" << subtracao;
    cout << "\nMultiplicação: " << multiplicacao << "\nDivisão: " << divisao;
    cout << "\nResto da Divisão: " << restoDivisao << "\n";

    return 0;
}