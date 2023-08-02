#include <iostream>

using namespace std;

void fiboIterativo(int);
int fiboRecursivo(int);

int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    //fiboIterativo(num);
    fiboRecursivo(num);

    return 0;
}

void fiboIterativo(int n){
    int antecessor=0, atual=0, proximo=1;

    cout << "Sequência Fibonacci:\n";
    for(int i=0; i<n; i++){
        cout << atual << "\n";
        antecessor = atual;
        atual = proximo;
        proximo = atual + antecessor;
    }
}

int fiboRecursivo(int n){
    cout << n << "\n";

    return n = fiboRecursivo((n-1) + (n-2));
}