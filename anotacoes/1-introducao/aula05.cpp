#include <iostream>

using namespace std;

//Declaração de Múltiplas Variáveis e Constante

//Constantes
#define pi 3.1415
#define frase cout << "Olá, mundo!\n"

int main(){

    //Múltiplas variáveis:
    int num1, num2, soma;

    cout << "Digite o primeiro valor inteiro: ";
    cin >> num1;
    cout << "Digite o segundo valor inteiro: ";
    cin >> num2;

    soma = num1 + num2;

    cout << "Soma: " << soma << "\n";
    cout << "PI: " << pi << "\n";
    frase;

    return 0;
}