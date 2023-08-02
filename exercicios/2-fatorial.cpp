#include <iostream>

using namespace std;

void fatIterativo(int);
int fatRecursivo(int);

int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    fatIterativo(num);
    //fatRecursivo(num);

    return 0;
}

void fatIterativo(int n){
    int fat=1;

    cout << "\nFatorial de " << n << ":";
    cout << "\n\n" << n << "! = ";

    for(int i=n; i>0; i--){
        cout << i;
        if(i != 1){
            cout << " x ";
        }
        fat = fat * i;
    }
    cout << " = " << fat << "\n";
}

int fatRecursivo(int n){

    return 0;
}