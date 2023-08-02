#include <iostream>

using namespace std;

void fiboIterativo(int);
int fiboRecursivo(int);

int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    cout << "Sequência Fibonacci:\n";

    //fiboIterativo(num);
    for(int i=0; i<num; i++){
        cout << fiboRecursivo(i+1) << "\n";
    }

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

int fiboRecursivo(int n){
    if(n==1 || n==2){
        return 1;
    } else{
        return fiboRecursivo(n-1)+fiboRecursivo(n-2);
    }
}