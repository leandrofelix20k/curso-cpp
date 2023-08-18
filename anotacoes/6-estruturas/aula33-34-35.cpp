#include <iostream>

using namespace std;

// Struct

// Declaração:
struct Pessoa{
    string nome;
    char sexo;
    int idade;
    long int cpf;

    // Criando métodos dentro de uma struct:
    void insere(string stnome, char stsexo, int stidade, long int stcpf){
        nome = stnome;
        sexo = stsexo;
        idade = stidade;
        cpf = stcpf;
    }

    void exibeValores(){
        cout << nome << "\n";
        cout << sexo << "\n";
        cout << idade << "\n";
        cout << cpf << "\n";
    }
};


int main(){

    // Criando uma váriavel com o tipo da struct
    Pessoa p1, p2, p3;

    // Atribuindo valores:
    p1.nome = "Jośe Suenson";
    p1.sexo = 'M';
    p1.idade = 25;
    p1.cpf = 12345678910;

    // Forma mais eficiente quando se tem diversos valores a serem passados para a struct
    p2.insere("Marcos Tupã", 'M', 35, 12345678910);
    p3.insere("Altos de Lindonha", 'F', 23, 12345678910);

    p1.exibeValores();
    p2.exibeValores();
    p3.exibeValores();

    std::cout << "\n\n";
    // Associando structs com vetores:
    Pessoa pessoas[3];

    pessoas[0] = p1;
    pessoas[1] = p2;
    pessoas[2] = p3;

    for(int i=0; i<3; i++){
        pessoas[i].exibeValores();
    }

    return 0;
}