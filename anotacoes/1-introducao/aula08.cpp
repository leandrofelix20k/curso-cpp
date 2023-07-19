#include <iostream>

using namespace std;

//Invertendo Valores de Variáveis

int main(){

    int num=10;

    cout << num << "\n";

    //Inverter valor pelo metódo tradicional:

    //num *= -1;

    //Metódo sem gravar o valor na variável:
    cout << -num << "\n";
    cout << num << "\n";

    //Metódo simplificado:
    num = -num;

    cout << num << "\n";

    return 0;
}