#include <iostream>

using namespace std;

// Sobrecarga de Funções

// Em c++, é possível ter duas ou mais funções com o mesmo nome, desde que elas possuam
// uma quantidade argumentos diferentes
int divisao(int x, int y);
void divisao();

int main(){

    int num1, num2;

    cout << "Digite o dividendo e o divisor, repectivamente:\n";
    cin >> num1;
    cin >> num2;

    cout << "Função int - Divisão: " << divisao(num1, num2) << "\n";
    divisao();

    return 0;
}

int divisao(int x, int y){
    return x/y;
}

void divisao(){
    int n1, n2, div;

    n1 = 1234;
    n2 = 2;
    div = n1/n2;

    cout << "Função void - Divisão: " << div << "\n";
}