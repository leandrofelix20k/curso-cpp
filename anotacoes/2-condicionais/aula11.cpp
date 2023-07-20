#include <iostream>

using namespace std;

// and(&&), or(||) e not(!)

int main (){

    int n1=2, n2=3, teste;

    if(n1 > 0 && n2 > 0){
        cout << "O valores são maiores que 0\n";
    }
    if(n1 >=3 || n2 >= 3){
        cout << "Um ou mais valores são maiores que 3!\n";
    }
    if(n1 != 3){
        cout << "n1 é diferente de 3!\n";
    }

    cout << "Digite 0 ou 1: ";
    cin >> teste;

    if(!teste){
        cout << "False\n";
    } else{
        cout << "True\n";
    }

    return 0;
}