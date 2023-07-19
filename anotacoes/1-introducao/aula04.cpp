#include <iostream>

using namespace std;

//Variáveis

int main(){
    //tipo nome;
    //tipo nome = valor;

    //Tipos:
    int num=10; //0. 50
    float decimal1; //2.345
    double decimal2; //1.50, 2.34, 4.55668656 - Possui maior precisão que o float
    char letra; //'L'
    char letras[50]; //recebe um texto com até 50 caracteres
    string nome; //"Leandro"
    bool valor; //true / false

    cout << num << "\n";

    //Ler um valor:
    cout << "Digite seu primeiro nome: ";
    cin >> nome;
    cout << "Digite sua idade: ";
    cin >> num;

    cout << "Nome: " << nome << "\nIdade: " << num << "\n";

    return 0;
}