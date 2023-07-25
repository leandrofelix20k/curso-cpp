#include <iostream>

using namespace std;

// Array bidimensional / Matriz

int main(){

    // Estrutura:
    int mat[3][2];

    // Lendo valores:
    cout << "Digite 6 números:\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cin >> mat[i][j];
        }
    }

    return 0;
}