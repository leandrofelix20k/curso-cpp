#include <iostream>

using namespace std;

int fatIterativo(int);
int fatRecursivo(int);

int main(){

    int num, fat;

    cout << "Digite um número: ";
    cin >> num;

    cout << "\nFatorial de " << num << ":";
    cout << "\n\n" << num << "! = ";

    //fat = fatIterativo(num);
    fat = fatRecursivo(num);

    cout << fat << "\n";

    return 0;
}

int fatIterativo(int n){
    int fatorial=1;

    for(int i=n; i>0; i--){
        fatorial = fatorial * i;
    }

    return fatorial;
}

int fatRecursivo(int n){
    if(n == 0){
        return 1;
    }

    return n*fatRecursivo(n-1);
}