#include <iostream>

using namespace std;

void fiboIterativo(int);

int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    cout << "Sequência Fibonacci:\n";

    fiboIterativo(num);

    return 0;
}

void fiboIterativo(int n){
    int antecessor=0, atual=0, proximo=1;

    for(int i=0; i<n; i++){
        cout << atual << "\n";
        antecessor = atual;
        atual = proximo;
        proximo = atual + antecessor;
    }
}
