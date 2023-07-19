#include <iostream>

using namespace std;

//Incremento e decremento de Variáveis

int main(){

    int n1, n2, n3, pre, pos;

    n1 = 5;
    n2 = 100;
    n3 = 2;
    pos = 10;
    pre = 10;

    //Incremento
    n1 = n1 + 1; //6
    n2 ++; // 101
    n3 += 5; //7

    cout << "Incremento: \n";
    cout << "n1: " << n1 << "\nn2: " << n2 << "\nn3: " << n3 << "\n";

    //Decremento
    n1 = n1 - 1; //5
    n2--; //100
    n3 -= 2; //5

    cout << "Decremento: \n";
    cout << "n1: " << n1 << "\nn2: " << n2 << "\nn3: " << n3 << "\n";

    //É possivel fazer essas operações utilizando outro operadores matemáticos
    //n3 *= 5;
    //n1 /= 2;

    //Pré-incremento e Pós-incremento
    pos++; //O valor da variável pos só é alterado após a linha do incremento/decremento
    --pre; //O valor é alterado inline, ou seja, na mesma linha que foi implementado

    //Pos: Primeiro ele usa o valor e depois incrementa
    //Pre: Primeiro ele incrementa o valor e depois usa o valor da variável

    cout << "Pos-incremento: " << pos << "\nPré-incremento: " << pre << "\n";
    cout << "Pos-incremento inline: " << pos++ << "\nPré-incremento inline: " << --pre << "\n";


    return 0;
}