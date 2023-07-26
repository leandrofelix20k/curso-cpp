#include <iostream>

using namespace std;

// Funções

// É uma boa prática declarar a função no ínicio do código, pois o torna mais legível
int soma(int x, int y);
int subtracao(int x, int y);

int main(){

    int num1, num2;

    cout << "Digite dois valores:\n";
    cin >> num1;
    cin >> num2;

    cout << "Soma: " << soma(num1, num2) << "\n";
    cout << "Subtração: " << subtracao(num1, num2) << "\n";

    return 0;
}

int soma(int x, int y){
    return x+y;
}

int subtracao(int x, int y){
    return x-y;
}
